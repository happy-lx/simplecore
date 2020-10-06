### SRAM-LIKE 接口到AXI接口的转化

+ SRAM-LIKE接口定义

  + ```scala
    class memory_req_io extends Bundle
    {
        val addr = Output(UInt(32.W))
        val mask = Output(UInt(8.W))//写memory时候的掩码
        val op = Output(UInt(3.W))//读memory时候的操作码
        val wdata = Output(UInt(64.W))
        val memen = Output(Bool())//是否需要启动mem
        val wen = Output(Bool())
    
        override def cloneType = {new memory_req_io().asInstanceOf[this.type]}
    }
    
    class memory_resp_io extends Bundle
    {
        val rdata = Output(UInt(64.W))
    
        override def cloneType = {new memory_resp_io().asInstanceOf[this.type]}
    }
    ```

  + ```scala
    class memory_port_io extends Bundle
    {
        val req = Flipped(Decoupled(new memory_req_io))
        val resp = Decoupled(new memory_resp_io)
    
        override def cloneType = {new memory_port_io().asInstanceOf[this.type]}
    }
    ```

  + ```scala
    val io = IO(new Bundle {
            val ports = Vec(2,new memory_port_io)
        })
    //0 is instruction port 
    //1 is data port 
    ```



 

### AXI-RAM设计

+ ram的大小为2的32次方个byte，一个字是8个byte，所以对于ram的初始化可以是

  + ```SCALA
    RAM = Mem(2的29次方,Vec(8,UInt(8.W)))
    ```

  + Ram内部的地址线长度位29位

  + 所以对于输入的物理地址首先转化成Ram内部的地址

+ 对于读操作，有两个状态

  + idle状态
    + 这个状态下可以接受master的读请求，所以`arready`置位，如果接受到了master的`arvalid`信号就进行本次读请求，收集本次读请求的信息存到寄存器中然后进入，`arready`置为0，表示现在正在进行读操作，然后进入到burst状态，并且把
  + burst状态
    + 这个状态下处理idle状态下接收到的信息，进行读操作，这时只要master的`aready`为1，表示master可以接受数据，在这个时钟周期内就可以读出需要的数据，然后在下一个时钟周期把`avalid`置为1，一直读到结束，全部都读完之后把`arready`置为1，表示可以本次读操作已经完成，可以进行下一次的读操作，然后进入idle状态

+ 对于写操作，有三个状态

  + idle状态
    + 那么此时ram可以进行写操作，所以`awready = 1`，只要不是这个状态，`awready = 0`，表示当前不可以进行写操作
    + 如果在这个状态检测到`awready = 1 && awvalid = 1`表示现在有写操作的请求，从AXI接口中得到输入信号，在下一个时钟周期把`awready`置为0，进入burst状态，然后把`wready`置为1，表示当前可以接受写入的数据
  + burst状态
    + burst状态之可以从idle状态转化而来
    + 进入这个状态表面现在已经接受了master的写请求，并且准备接受master的数据，所以这个状态的`wready`为1
    + 当master的`wvalid`也置1的时候，就可以根据在idle状态下接受到的信息，接受数据，写入ram，直到传输结束，在结束的时候，把`wready`置为0表示现在不需要接受master传过来的数据了，然后就可以进入response状态了(可能有点问题)
  + response状态
    + 在这个状态主要是响应写的结果，如果检测到master的`bready`信号了就可以把`bvalid`置位，并且发送写相应的结果，然后就可以进入到idle状态，并且把`arready`置位，表示ram以及处理完成了一个事务，可以处理下一个事务了