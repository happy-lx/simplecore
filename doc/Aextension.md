### 关于实现A指令集

#### 1.sc和lr

+ 首先需要实现这两类指令，条件存储和加载保留
+ 关于`sc`指令，类似与`store`指令，唯一有不同的是它是R型指令，不需要有立即数，立即数是0，所以数据通路的DEC阶段的第二个操作数增加一个选项，立即数0，由于它的作用是把寄存器中的内容存到存在加载保留的地址的存储器中去，然后存成功给rd写0存失败给rd写非0，所以rd的值是在MEM阶段才能确定，因此它也有load-use-data-hazard。
+ 它的rs1和rs2都需要使用，所以需要rs1_en,rs2_en都是true，用于判断是不是与前面的指令有load-use-data-hazard
+ 关于`lr`指令，是把存储器中的内容加载到rd中去，然后保留其地址，等待后续sc指令，这个指令与`load`指令非常类似，但它是R型指令，仍然需要给数据通路的DEC阶段的第二个操作数加上0选项，然后去访存，也需要判断load-use-data-hazard
+ 它只需要使用rs1
+ 如果是这两类的指令也是用原来的访存机制，不过对于lr来说需要把访存地址保留下来，对于sc来说额外需要的操作是需要和保留的地址进行比对，只有相同才进行访存，不相同就不进行访存，直接把错误码写回，访存的话访存成功后把0写回，所以写回的mem_stage_out也需要增加一个片选信号，让它选择0或者1
+ 如果这两类指令使用原来的访存机制，那么发生page fault和miss align都是算原来的各自的异常不是amo的异常

#### 2.AMO指令

+ 需要设计一个AMO的ALU，来处理各种类型的AMO操作
+ 需要设计一个AMO的Accesser，让它来进行AMO指令的流程，即先从存储器取操作数，然后进入AMO的ALU计算得到结果，然后写回到存储器中，使用状态机即可完成
+ 所有的AMO指令都需要使用rs1和rs2,所有的AMO指令都是用rs1的值去访问存储器，然后与rs2的值进行一些操作然后写回到存储器中，然后rd写回第一次访问存储器得到的值

#### 3.细节

+ 关于AMO的Accesser，可以分为几个状态，idle，access，exe，write_back，其他的指令在数据通路对外的访存信号使用原来的那一套，即译码出来该如何访存就如何访存，cpath管理的data_stall信号就是原来那样如果要访存在得到结果之后拉低，如果不访存就一直低。如果是AMO指令，数据通路的对外访存信号就不能使用原来那一套，而是连接到AMO的Accesser里面去，让AMO的Accesser去在不同的状态下进行访存(Accesser要访存两次)，所以AMO的Accesser本身需要有一个让流水线stall的信号，这个信号代替cpath的data_stall信号，只有当完成写回操作之后这个stall信号才拉低，这样就可以比较方便地把AMO的Accesser融入到流水线中。
+ 关于Accesser，如果有异常发生，可能在access阶段就有page fault或者write_back阶段的page fault，那就可以直接终止整个过程，这个时候其实是指令发生了异常的，这个异常算到store的那个异常里面去，AMO指令可以在译码的时候让它不访存，即mem_valid为false，这个只是为了让原来的那种page fault不发生，store的page fault再或上一个条件:AMO指令且发生异常
+ 数据通路需要再增加一个片选信号，选择Accesser的输出，这个输出应该是第一次访存得到的值
+ **注意：前面的设计有不合理的情况，如果是store的missalign，必须是不能访存，不能是访存完了才处理异常，这样存储器的状态就已经改变了**
  + 解决方式：`cs_wire_mem_load_missaligned`和`cs_wire_mem_store_missaligned`会在是特定load或者store并且发生了missaligned的时候置位，那么这个时候就不用去访存了，直接把dpath的访存请求信号清除，但是发送给cpath的访存请求信号不能清除要保持missaligned信号，这时data_stall的信号会一直置位，所以这要作为一个特殊情况来处理，只要有load或者store的missalign就不访存并且不stall，在这个周期处理完异常之后，流水线直接前移

#### 4.功能部件接入流水线
+ 从A指令集的扩展出发，需要对cpath的译码部分进行修改，先把指令写进去，然后在添加额外的控制信号
  + 需要添加的信号有
    + 是否为A指令集内的指令(包括lr和sc)，这个得用于判断load-use-data-hazard，因为A指令集内的所有指令都要写回，结果都在mem阶段产生，所以全部都会有load-use-data-hazard
    + A指令集指令的操作码(包括lr和sc，这两类不参与运算，所以对应功能部件如果发现这两个操作码不进行操作)
    + 是否为A指令集的32位的操作
+ 扩展op2-selector
  + 需要添加0选择项
  + 需要增加位宽
  + 需要对应修改寄存器的位宽
+ 扩展wb-selector
  + 需要添加添加amo-accesser的结果和sc的操作结果
  + 需要增加位宽
  + 需要对应修改寄存器的位宽
+ 分析amo指令的数据流，在dec阶段选择的第二个操作数是0,第一个操作数是rs1，exe选择add操作到mem阶段得到地址，然后在mem阶段不使用常规的访存，在mem阶段如果检测到是amo指令，则把访存通道dmem连接到amo-accesser上，没有使用常规的访存，所以一开始dec阶段译码的时候memen是false，就不会有data_stall和mem阶段的访存异常，这个时候需要让data_stall或上amo-accesser的stall，让store的missalign或上从amo出来的missalign信号(在valid的情况下)，page fault也是同理，只要有异常，就不会写回，清空流水线处理异常，没有异常就写回
+ 分析lr和sc的数据流，在dec阶段选择的第二个操作数是0,第一个操作数是rs1，exe选择add操作到mem阶段得到地址，对于lr指令，沿用原来的访存信号，把访存地址写入到station中保存起来，然后去访存，如果访存出了异常，就必须flush掉station写的值，然后不写回，清除流水线。对于sc指令，沿用原来的访存信号，默认是会访存，dec的memen是true，但是如果它的访存地址在station中进行比较不对就不能访存，把memen清空掉，就不会发生一系列访存相关的异常，写入的错误代码为1，如果在station中比较正确，则进行访存，如果在访存过程中出现异常，就是这一条指令发生异常，需要清空流水线，不写回。如果没有发生异常则正常完成了写入，写入正确代码为0