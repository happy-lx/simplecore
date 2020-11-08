| addr       | name       | init value | bits |
| ---------- | ---------- | ---------- | ---- |
| 0x2004000  | mtimecmp   | 0          | 64   |
| 0x200bff8  | mtime      | 0          | 64   |
| 0x40600000 | uart_read  |            | 32   |
| 0x40600004 | uart_write |            | 32   |
|            |            |            |      |

+ 需要有一个`memory-map-reading-list`，访存的时候如果遇到以上地址，不直接访问`ram`

+ `UART`需要有一个`module`使用`blackbox`接入到`verilog`，然后使用`verilator`使用`c`

  + `NutShell`的做法

  + ```scala
    class UARTGetc extends BlackBox with HasBlackBoxInline {
      val io = IO(new Bundle {
        val clk = Input(Clock())
        val getc = Input(Bool())
        val ch = Output(UInt(8.W))
      })
    
      setInline("UARTGetc.v",
        s"""
          |import "DPI-C" function void uart_getc(output byte ch);
          |
          |module UARTGetc (
          |  input clk,
          |  input getc,
          |  output reg [7:0] ch
          |);
          |
          |  always@(posedge clk) begin
          |    if (getc) uart_getc(ch);
          |  end
          |
          |endmodule
         """.stripMargin)
    }
    ```

  + 

