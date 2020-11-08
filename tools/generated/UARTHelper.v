
import "DPI-C" function void uart_getchar(
     output byte ch    
);
import "DPI-C" function void uart_putchar(
     input  byte ch    
);

module UARTHelper(
  input clk,
  input getc,
  input putc,
  input [7:0] ch_put,
  output reg [7:0] ch_get
);

  always@(posedge clk) begin
      if(getc) uart_getchar(ch_get);
      if(putc) uart_putchar(ch_put);
  end 

endmodule
     