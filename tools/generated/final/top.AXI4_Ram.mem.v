module BindsTo_0_AXI4_Ram(
  input         clock,
  input         reset,
  input  [63:0] io_awaddr,
  input         io_awvalid,
  output        io_awready,
  input  [63:0] io_araddr,
  input         io_arvalid,
  output        io_arready,
  output [63:0] io_rdata,
  output        io_rvalid,
  input         io_rready,
  input  [63:0] io_wdata,
  input  [7:0]  io_wstrb,
  input         io_wvalid,
  output        io_wready,
  output        io_bvalid,
  input         io_bready,
  output        has_time_interrupt_0
);

initial begin
  $readmemh("./test1.txt", AXI4_Ram.mem);
end
                      endmodule

bind AXI4_Ram BindsTo_0_AXI4_Ram BindsTo_0_AXI4_Ram_Inst(.*);