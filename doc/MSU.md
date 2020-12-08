## 实现M/S/U特权模式

**需要添加的寄存器**

+ stvec
+ sepc
+ scause
+ sie
+ sip
+ stval
+ sscratch
+ sstatus
+ satp

**特权级编码**

+ U ：00
+ S  ：01
+ M： 11

**或许需要实现PMP的检测以及access fault的异常**

**重点实现异常和中断的委托机制**

+ 异常的委托：默认情况下异常都进入到M模式的异常处理程序，而通过委托机制，可以选择性地把一些异常交给S模式进行处理
+ 中断的委托：与异常的委托类似
+ 相关寄存器：
  + mideleg：这个寄存器的布局与mie，mip一样，表示那些中断被委托给了S模式
  + sie和sip：只有mideleg中被置为的那些位可以被读写，没有被委托的位始终为0,工作方式类似于mie与mip
  + medeleg：这个寄存器委托的是异常，与mideleg类似，表示哪些异常被委托给了S模式
+ 不管委托是如何设置的，发生异常时权限不可能变成更低的模式，比如在U，S模式下发生异常，如果委托给了S模式，就在S模式下处理，如果没有就在M模式下进行处理，而在M模式下发生异常，不管是怎么样进行委托的都在M模式下进行处理



### 需要注意的点

+ sstatus是mstatus的子集，对sstatus的写入，相应地也要写入到mstatus中，而与m-mode相关的mstatus中的一些位(mpp,mpie,mie)在sstatus中为0
+ 同理，sie和sip是mie和mip的子集，他们中没有mti和msi和mei，全部为0,所以实际上不需要真的添加一个sstatus，sie，sip寄存器，只在对应的m寄存器中设置一下即可，比如读sstatus，设置一个掩码，从mstatus中读取，写sstatus，也就是写入mstatus，而对mstatus的更改，同样也会反映到sstatus中。
+ **对satp的写入，需要清空流水线，把satp前面的所有阶段(IF,DEC,EXE)全部清空，类似于发生异常，所以可以当做异常处理，因为写入satp后，后面进入流水线的指令都是按照原来的satp进行地址转换得到的，所以需要重新清空后，重新取，然后进行的地址转换就是以satp为基础的地址转换，然后同时，需要刷新TLB，因为此时的TLB都是以原来的satp为基础的**
+ 对于中断的处理，mti和msi和mei对应的mideleg是不会设置的，而对于sti，ssi，sei对应的mideleg可能会设置，如果设置了就委托给s-mode去处理，而当目前的特权级为m-mode时不会响应，且不会处理，只有为s-mode或者u-mode会响应。并且响应的时候有一个全局中断信号，对于没有委托给S模式的中断如果需要响应它，则必须当前为m-mode且mstatus.mie置位，或者为s-mode或者u-mode。当委托给S模式的中断需要响应时，必须为s-mode且sstatus.sie置位，或者为u-mode，m-mode不响应。
+ 对于异常的处理，medeleg可以选择性地设置异常委托给s-mode进行处理，如果当前没有中断，需要处理异常，异常则必须要处理，不能不响应，则如果对要处理的异常发生了委托，当前为m-mode，则忽略这个委托，直接在m-mode下进行处理，如果为s-mode或者u-mode这个异常发生了委托，则在s-mode下进行处理。如果没有发生委托，则一律在m-mode下进行处理