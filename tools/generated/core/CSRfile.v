module CSRfile(
  input         clock,
  input         reset,
  input  [31:0] io_instruction,
  input  [2:0]  io_csr_op,
  input  [63:0] io_data_in,
  input         io_hasException,
  input         io_hasStall,
  input  [63:0] io_in_pc,
  output [63:0] io_redir_target,
  output [63:0] io_csr_info,
  output        io_isredir
);
  assign io_redir_target = 64'h0;
  assign io_csr_info = 64'h0;
  assign io_isredir = 1'h0;
endmodule
