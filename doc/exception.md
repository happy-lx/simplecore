### 实现完整的同步异常的支持

**方法**

+ MMU把各种类型的pagefault给了cpath
+ 对于发生在IF阶段的pagefault，需要在cpath中跟随流水线一直流到MEM阶段进行处理
+ 对于发生在MEM阶段的pagefault，直接在这个阶段进行处理
+ 可以用一个bundle把MEM阶段除了非法指令异常的其他异常送给dpath，然后dpath送给csr去处理
  + csr处理的时候，给异常进行分类，有一个总的异常发生的信号，然后不同的异常对应进行处理，主要是异常的原因和异常的value不相同

**除了pagefault之外的异常**

+ IF阶段：发生指令地址%4 != 0
+ ID阶段：非法指令
+ MEM阶段：load/store非对齐
+ 实现方式类似与以上