### flush的情况讨论

##### 1.TLB的flush

**原因**：

+ 由于TLB是页表的缓存，如果软件修改了页表，就造成了TLB与页表的不一致，比如操作系统显式修改了页表项，这个时候需要有一条指令来保证一致性即`sfence.vma`，另外一种情况是指令修改了`satp`寄存器(TODO:修改mstatus,sstatus)，而由于这条指令是在MEM阶段才修改完成，前面三个阶段的指令已经进入流水线了，而且它们仍然是按照旧的`satp`去进行地址变换的，所以需要重新清空流水线，并且设置IF阶段的pc为`sfence.vma`后面一条指令，这个时候同样要使TLB全部失效，因为原来的TLB不管是ITLB还是DTLB都是以旧的`satp`的值为基础的。

**实现方案**

+ 1.`sfence.vma`指令在DEC阶段会被译码出来，这个时候IF阶段的MMU，TLB全部都是idle状态，所以可以直接根据DEC的指令为`sfence.vma`的信号使IF阶段的ITLB进行刷新，在一个周期内完成，然而由于流水线被阻塞，这个信号会一直置位，直到IF阶段的MMU和TLB开始工作，ITLB从idle状态转为工作状态，完成地址转换后又会变成idle状态，而这个信号现在还是置位，所以又会被刷新一遍(这是降低性能的地方)，一直到指令取出来，这个信号就变低，然后`sfence.vma`指令到达EXE阶段，这样分析下来，`sfence.vma`后面的指令都是使用的被刷新之后的ITLB，然后`sfence.vma`随流水线到达MEM阶段，这个时候`sfence.vma`前面的指令都已经访存结束了，用到的是刷新前的DTLB，然后现在刷新DTLB，由于这条指令不会访存，所以DTLB一直都是idle的状态，在这个状态下被刷新，同样会一直进行刷新操作，因为流水线现在阻塞，一直到IF阶段取到指令，流水线往前移动，`sfence.vma`进入WB阶段，这样就保证了它后面的指令访问的DTLB都是刷新过后的DTLB
+ 2.如果修改了`satp`寄存器的值，这条指令现在在MEM阶段，且这个信号只在最后没有阻塞的时候被置位，一旦它置位，ITLB一定处于idle，DTLB也一定处于idle，他们都可以在idle状态下完成对TLB的刷新，同样可以保证这条指令之前的指令用的是原来的`satp`关系，之后的指令就是用的新的`satp`的关系
+ 3.第2点有点考虑不妥当，如果写入`satp`寄存器时，只有在没有阻塞的情况下信号被置位，即IF阶段完成时，这个时候可能发生了Instruciton-pagefault，一旦发生这个异常，ITLB一定不是在idle状态下，而一定是下一个周期才是idle状态，可能此时是TLB hit，但是不能访问，可能是TLB miss，而PTW访问时出错，可能是TLB miss，PTW访问成功，然后TLB访问失败，这些情况都有可能遇到写入`satp`寄存器的信号，这时也需要对TLB刷新



##### 2.Cache的flush

**原因：**

+ 由于系统中有两个Cache，icache和dcache，如果store指令修改了指令区域的内容，由于cache是write-back的，这个修改就会保留在dcache中，而不是在ram中，所以icache就不能得到这个正确的修改后的指令，所以需要`fence.i`这条指令来同步

**实现方案：**

+ 我的想法是，fence.i前面可能是一系列对指令区域修改的指令，一直到fence.i到达MEM阶段后，这些指令才全部完成其可能的修改，所以这个时候可以把dcache的dirty-block全部写回到ram里面去然后设置dirty为false，保证ram和dcache的一致性，然后再让icache全部刷新，与fence.i最近的一条指令只有在fence.i到达MEM阶段后才在IF阶段开始进行取操作，所以当icache完成刷新之后进行取指操作得到的指令就一定是正确的指令。
+ 细节方面，当fence.i到达MEM阶段后，有一个标志信号就置位，一旦这个标志信号出现后，dcache马上就进行写回dirty-block的操作，由于这个操作需要访存，不能让IF阶段现在访存，所以一旦dcache开始写回dirty-block就让IF阶段的访存enable信号为false，这样才可以保证一定icache的flush是在dcache写回之后才发生的，直到dcache完成写回操作，IF阶段的访存enable信号才为true开始访存。而在fence.i到达MEM阶段后的标志信号出现时，dcache在进行写回操作，而icache其实也可以同时做刷新操作，可以并行进行，所以icache其实检测到标志信号就马上开始刷新，一直刷新一直刷新到dcache完成写回，同时IF阶段开始访存，enable信号为true时，icache在某一次刷新操作结束之后回到idle状态，这时检测到访问cache操作信号就不再进行刷新操作，而是去取指，一直到取到指令，流水线往前移动，fence.i的标志信号降下来，就不再进行刷新操作了，这样可以保证fence.i后面的指令一定是使用的刷新过后的cache，所以取到的内容也一定是与ram一致的


##### 感受

+ cache的刷新需要的始终周期数太多了，单单一个icache刷新需要1024个周期，一个dcache刷新需要写回dirty-block最坏需要1024×访存延迟，如果访存要100个周期那一个fence.i指令带来的开销就有10万个时钟周期，太离谱了。