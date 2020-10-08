module BindsTo_4_AXI4_Ram(
  input         clock,
  input         reset,
  input  [31:0] io_awaddr,
  input         io_awvalid,
  output        io_awready,
  input  [31:0] io_araddr,
  input         io_arvalid,
  output        io_arready,
  output [63:0] io_rdata,
  input  [63:0] io_wdata,
  input  [7:0]  io_wstrb,
  input         io_wvalid,
  output        io_wready,
  output        io_bvalid
);

initial begin
  $readmemh("./test1_4", AXI4_Ram.mem_4);
end
                      endmodule

bind AXI4_Ram BindsTo_4_AXI4_Ram BindsTo_4_AXI4_Ram_Inst(.*);