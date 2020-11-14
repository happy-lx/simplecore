![2020-11-03 14-45-08 的屏幕截图](/home/lx/图片/2020-11-03 14-45-08 的屏幕截图.png)

+ 64位的地址线

  + | tag  | index | offset |
    | ---- | ----- | ------ |
    | 49位 | 10位  | 5位    |

  + 通过`sram_like_io`与CPU进行交互

  + 通过`sram_like_io`和`bus_bridge`转化成`axi4`与mem进行交互

  + 只有走`mem`的地址请求才走`cache`，走`mmio`的请求需要走`axi4`，走`mtime mtimecmp`的也不要走`cache`

+ 请求

  + ```scala
    class sram_like_io extends Bundle
    {
        val addr = Output(UInt(AXI_paddr_len.W))
        val mask = Output(UInt(8.W))//写memory时候的掩码
        val op = Output(UInt(3.W))//读memory时候的操作码
        val wdata = Output(UInt(64.W))
        val memen = Output(Bool())//是否需要启动mem
        val wen = Output(Bool())
        val rdata = Input(UInt(64.W))
        
        val data_valid = Input(Bool())
    }
    ```

+ 状态

  + 一共有四个状态，`idle`,`find_index`,`write_back`,`write_allocate`
  + 在`idle`状态下
    + 等待sram_like接口发过来的请求
    + 如果有请求则进入到find_index状态，否则一直在idle状态
  + 在`find_index`状态下
    + 对发过来的地址，拆分成3个部分，首先先拿index找到对应的cache block，首先看valid是不是true，然后对比这个cache block的tag是不是与发过来的地址的tag一样，如果一样，则cache命中，那么直接`data_valid`可以来取了，然后等待取走之后进入到`idle`状态,根据offset的高两位找到对应的block的偏移，如果tag不相同，cache缺失，如果这一块dirty，则先把这一块写入ram，则进入write_back，如果着一块不dirty，则直接进入write_allocate。如果cache命中，是写操作，则把dirty值位
  + 在`write_back`状态下
    + 把dirty的block写入到ram中，等待其写入完成进入到write_allocate状态
  + 在`write_allocate`状态下
    + 从内存中读入一个block，等待其读入完成进入到find_index状态

