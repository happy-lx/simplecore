### 关于实现A指令集

#### 1.sc和lr

+ 首先需要实现这两类指令，条件存储和加载保留
+ 关于`sc`指令，类似与`store`指令，唯一有不同的是它是R型指令，不需要有立即数，立即数是0，所以数据通路的DEC阶段的第二个操作数增加一个选项，立即数0，由于它的作用是把寄存器中的内容存到存在加载保留的地址的存储器中去，然后存成功给rd写0存失败给rd写非0，所以rd的值是在MEM阶段才能确定，因此它也有load-use-data-hazard。
+ 它的rs1和rs2都需要使用，所以需要rs1_en,rs2_en都是true，用于判断是不是与前面的指令有load-use-data-hazard
+ 关于`lr`指令，是把存储器中的内容加载到rd中去，然后保留其地址，等待后续sc指令，这个指令与`load`指令非常类似，但它是R型指令，仍然需要给数据通路的DEC阶段的第二个操作数加上0选项，然后去访存，也需要判断load-use-data-hazard
+ 它只需要使用rs1

#### 2.AMO指令

+ 需要设计一个AMO的ALU，来处理各种类型的AMO操作
+ 需要设计一个AMO的Accesser，让它来进行AMO指令的流程，即先从存储器取操作数，然后进入AMO的ALU计算得到结果，然后写回到存储器中，使用状态机即可完成
+ 所有的AMO指令都需要使用rs1和rs2,所有的AMO指令都是用rs1的值去访问存储器，然后与rs2的值进行一些操作然后写回到存储器中，然后rd写回第一次访问存储器得到的值

#### 3.细节

+ 关于AMO的Accesser，可以分为几个状态，idle，access，exe，write_back，其他的指令在数据通路对外的访存信号使用原来的那一套，即译码出来该如何访存就如何访存，cpath管理的data_stall信号就是原来那样如果要访存在得到结果之后拉低，如果不访存就一直低。如果是AMO指令，数据通路的对外访存信号就不能使用原来那一套，而是连接到AMO的Accesser里面去，让AMO的Accesser去在不同的状态下进行访存(Accesser要访存两次)，所以AMO的Accesser本身需要有一个让流水线stall的信号，这个信号代替cpath的data_stall信号，只有当完成写回操作之后这个stall信号才拉低，这样就可以比较方便地把AMO的Accesser融入到流水线中。
+ 关于Accesser，如果有异常发生，可能在access阶段就有page fault或者write_back阶段的page fault，那就可以直接终止整个过程，这个时候其实是指令发生了异常的，这个异常算到store的那个异常里面去，AMO指令可以在译码的时候让它不访存，即mem_valid为false，这个只是为了让原来的那种page fault不发生，store的page fault再或上一个条件:AMO指令且发生异常