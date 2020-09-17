module BindsTo_0_memorymodule(
  input         clock,
  input  [31:0] io_ports_0_req_bits_addr,
  output [63:0] io_ports_0_resp_bits_rdata,
  input         io_ports_1_req_valid,
  input  [31:0] io_ports_1_req_bits_addr,
  input  [7:0]  io_ports_1_req_bits_mask,
  input  [2:0]  io_ports_1_req_bits_op,
  input  [63:0] io_ports_1_req_bits_wdata,
  input         io_ports_1_req_bits_memen,
  input         io_ports_1_req_bits_wen,
  output        io_ports_1_resp_valid,
  output [63:0] io_ports_1_resp_bits_rdata
);

initial begin
  $readmemh("./test.txt", memorymodule.mem);
end
                      endmodule

bind memorymodule BindsTo_0_memorymodule BindsTo_0_memorymodule_Inst(.*);