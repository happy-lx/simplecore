### 启动xv6时遇到的一些问题

1.进入到S模式后，设置页表开启分页后出现问题。

为了还原出错的现场，写了下面这一段汇编来测试

```asm
#test for address translate unit
li t1 , 0x2000003f # content of the pte of 0x80000000-0x80000fff page 
li t2 , 0x80004010 # addr of the pte of 0x80000000-0x80000fff page
sd t1 , 0(t2) # store the content of pte in ram
li t3 , 0x8000000000080004 # content of satp recording the address of root page table
csrw satp,t3 # open sv39 
#now the instruction below will do the translating work
#if t4 inclines per instruction then the address translate unit works well
lable1:
addi t4 , t4 , 1
j lable1
```

通过观察每一个周期的行为，我发现原因是ITLB访存存在一些问题，虽然IMMU，ITLB，IPTW的行为都是正确的，并且在第一次进行地址转换IPTW进行工作的时候，IPTW发出的访存地址也是正确的，但是取回来的值是0,而不是之前通过指令写入的0x2000003f，原因是通过指令`li t1 , 0x2000003f`进行写入操作实际上写到了DCACHE中，而不是写到了RAM中，而后面IPTW，ITLB，IMMU在进行地址转化时，访问的是ICACHE，此时ICACHE对这个地址块是缺失的，因此它去访问RAM，而RAM中并没有这一部分内容，所以取出来的值为0.

所以这也是因为有两个CACHE而导致的不一致性，我想了想可以通过手动加一条`fence.i`指令，把DCACHE的内容刷到RAM中，然后ICACHE再MISS后访问RAM就可以得到正确的结果，尝试之后结果确实是这样。

所以我感觉如果软件可以在每一次修改了页表内容后加一条`fence.i`和`sfence.vma`就可以保证正确性，但是对性能损耗太大，xv6并不会修改页表后用`fence.i`去刷新CACHE。所以这个方法并不可取，应该是我的设计需要进行更改。

后来我感觉可以让IMMU内部的IPTW的访存信号和DMMU内部的DPTW的访存信号都接入到DCACHE中，这是比较合理的，这样页表的副本就都在DCACHE中，或者还有一种方法是让这两个访存信号不经过CACHE而是直接访问RAM，可以保证一致性但是性能损耗大，之后看NutShell的文档，NutShell说它为了保持 TLB 的一致性, ITLB 和 DTLB 都经过数据 Cache 进行访存，也就是PTW都是在数据Cache中访存。

