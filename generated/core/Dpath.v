module Regfile(
  input         clock,
  input  [4:0]  io_rp1,
  input  [4:0]  io_rp2,
  output [63:0] io_rp1_data,
  output [63:0] io_rp2_data,
  input  [4:0]  io_wp,
  input  [63:0] io_wp_data,
  input         io_wp_en
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] regs [0:31]; // @[regfile.scala 28:19]
  wire [63:0] regs__T_4_data; // @[regfile.scala 28:19]
  wire [4:0] regs__T_4_addr; // @[regfile.scala 28:19]
  wire [63:0] regs__T_7_data; // @[regfile.scala 28:19]
  wire [4:0] regs__T_7_addr; // @[regfile.scala 28:19]
  wire [63:0] regs__T_data; // @[regfile.scala 28:19]
  wire [4:0] regs__T_addr; // @[regfile.scala 28:19]
  wire  regs__T_mask; // @[regfile.scala 28:19]
  wire  regs__T_en; // @[regfile.scala 28:19]
  wire  _T_1 = io_wp == 5'h0; // @[regfile.scala 32:34]
  wire  _T_3 = io_rp1 == 5'h0; // @[regfile.scala 35:31]
  wire  _T_6 = io_rp2 == 5'h0; // @[regfile.scala 36:31]
  assign regs__T_4_addr = io_rp1;
  assign regs__T_4_data = regs[regs__T_4_addr]; // @[regfile.scala 28:19]
  assign regs__T_7_addr = io_rp2;
  assign regs__T_7_data = regs[regs__T_7_addr]; // @[regfile.scala 28:19]
  assign regs__T_data = _T_1 ? 64'h0 : io_wp_data;
  assign regs__T_addr = io_wp;
  assign regs__T_mask = 1'h1;
  assign regs__T_en = io_wp_en;
  assign io_rp1_data = _T_3 ? 64'h0 : regs__T_4_data; // @[regfile.scala 35:17]
  assign io_rp2_data = _T_6 ? 64'h0 : regs__T_7_data; // @[regfile.scala 36:17]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    regs[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if(regs__T_en & regs__T_mask) begin
      regs[regs__T_addr] <= regs__T_data; // @[regfile.scala 28:19]
    end
  end
endmodule
module alu_module(
  input  [63:0] io_input1,
  input  [63:0] io_input2,
  input  [4:0]  io_op,
  input  [2:0]  io_res_ext_op,
  output [63:0] io_res
);
  wire [63:0] add_res = io_input1 + io_input2; // @[alu.scala 29:26]
  wire [5:0] sham = io_input2[5:0]; // @[alu.scala 31:25]
  wire  _T_2 = io_op == 5'h0; // @[alu.scala 36:16]
  wire  _T_3 = io_op == 5'h1; // @[alu.scala 37:16]
  wire [63:0] _T_5 = io_input1 - io_input2; // @[alu.scala 37:43]
  wire  _T_6 = io_op == 5'h2; // @[alu.scala 38:16]
  wire [63:0] _T_7 = io_input1 & io_input2; // @[alu.scala 38:43]
  wire  _T_8 = io_op == 5'h3; // @[alu.scala 39:16]
  wire [63:0] _T_9 = io_input1 | io_input2; // @[alu.scala 39:42]
  wire  _T_10 = io_op == 5'h4; // @[alu.scala 40:16]
  wire [63:0] _T_11 = io_input1 ^ io_input2; // @[alu.scala 40:43]
  wire  _T_12 = io_op == 5'h5; // @[alu.scala 41:16]
  wire [126:0] _GEN_0 = {{63'd0}, io_input1}; // @[alu.scala 41:44]
  wire [126:0] _T_13 = _GEN_0 << sham; // @[alu.scala 41:44]
  wire  _T_15 = io_op == 5'h6; // @[alu.scala 42:16]
  wire [63:0] _T_16 = io_input1; // @[alu.scala 42:49]
  wire  _T_18 = $signed(io_input1) < $signed(io_input2); // @[alu.scala 42:52]
  wire  _T_19 = io_op == 5'h7; // @[alu.scala 43:16]
  wire  _T_20 = io_input1 < io_input2; // @[alu.scala 43:53]
  wire  _T_21 = io_op == 5'h8; // @[alu.scala 44:16]
  wire [63:0] _T_24 = $signed(io_input1) >>> sham; // @[alu.scala 44:68]
  wire  _T_25 = io_op == 5'h9; // @[alu.scala 45:16]
  wire [31:0] _T_27 = io_input1[31:0]; // @[alu.scala 45:57]
  wire [31:0] _T_29 = $signed(_T_27) >>> sham; // @[alu.scala 45:75]
  wire  _T_30 = io_op == 5'ha; // @[alu.scala 46:16]
  wire [63:0] _T_31 = io_input1 >> sham; // @[alu.scala 46:53]
  wire  _T_32 = io_op == 5'hb; // @[alu.scala 47:16]
  wire [31:0] _T_34 = io_input1[31:0] >> sham; // @[alu.scala 47:60]
  wire  _T_35 = io_op == 5'hc; // @[alu.scala 48:16]
  wire  _T_36 = io_op == 5'hd; // @[alu.scala 49:16]
  wire [127:0] _T_39 = $signed(io_input1) * $signed(io_input2); // @[alu.scala 49:53]
  wire  _T_41 = io_op == 5'he; // @[alu.scala 50:16]
  wire  _T_46 = io_op == 5'hf; // @[alu.scala 51:16]
  wire [64:0] _T_49 = {1'h0,io_input2}; // @[alu.scala 51:88]
  wire [64:0] _GEN_1 = {{1{_T_16[63]}},_T_16}; // @[alu.scala 51:56]
  wire [128:0] _T_50 = $signed(_GEN_1) * $signed(_T_49); // @[alu.scala 51:56]
  wire  _T_52 = io_op == 5'h10; // @[alu.scala 52:16]
  wire [127:0] _T_53 = io_input1 * io_input2; // @[alu.scala 52:55]
  wire  _T_55 = io_op == 5'h11; // @[alu.scala 53:16]
  wire [63:0] _T_59 = $signed(io_input1) % $signed(io_input2); // @[alu.scala 53:81]
  wire  _T_60 = io_op == 5'h12; // @[alu.scala 54:16]
  wire [63:0] _GEN_2 = io_input1 % io_input2; // @[alu.scala 54:54]
  wire [63:0] _T_61 = _GEN_2[63:0]; // @[alu.scala 54:54]
  wire  _T_62 = io_op == 5'h13; // @[alu.scala 55:16]
  wire [31:0] _GEN_3 = io_input1[31:0] % io_input2[31:0]; // @[alu.scala 55:61]
  wire [31:0] _T_65 = _GEN_3[31:0]; // @[alu.scala 55:61]
  wire  _T_66 = io_op == 5'h14; // @[alu.scala 56:16]
  wire [31:0] _T_70 = io_input2[31:0]; // @[alu.scala 56:84]
  wire [31:0] _T_72 = $signed(_T_27) % $signed(_T_70); // @[alu.scala 56:94]
  wire  _T_73 = io_op == 5'h15; // @[alu.scala 57:16]
  wire [64:0] _T_77 = $signed(io_input1) / $signed(io_input2); // @[alu.scala 57:81]
  wire  _T_78 = io_op == 5'h16; // @[alu.scala 58:16]
  wire [63:0] _T_79 = io_input1 / io_input2; // @[alu.scala 58:54]
  wire  _T_80 = io_op == 5'h17; // @[alu.scala 59:16]
  wire [31:0] _T_83 = io_input1[31:0] / io_input2[31:0]; // @[alu.scala 59:61]
  wire  _T_84 = io_op == 5'h18; // @[alu.scala 60:16]
  wire [32:0] _T_90 = $signed(_T_27) / $signed(_T_70); // @[alu.scala 60:94]
  wire [63:0] _T_91 = _T_84 ? {{31'd0}, _T_90} : add_res; // @[Mux.scala 98:16]
  wire [63:0] _T_92 = _T_80 ? {{32'd0}, _T_83} : _T_91; // @[Mux.scala 98:16]
  wire [63:0] _T_93 = _T_78 ? _T_79 : _T_92; // @[Mux.scala 98:16]
  wire [64:0] _T_94 = _T_73 ? _T_77 : {{1'd0}, _T_93}; // @[Mux.scala 98:16]
  wire [64:0] _T_95 = _T_66 ? {{33'd0}, _T_72} : _T_94; // @[Mux.scala 98:16]
  wire [64:0] _T_96 = _T_62 ? {{33'd0}, _T_65} : _T_95; // @[Mux.scala 98:16]
  wire [64:0] _T_97 = _T_60 ? {{1'd0}, _T_61} : _T_96; // @[Mux.scala 98:16]
  wire [64:0] _T_98 = _T_55 ? {{1'd0}, _T_59} : _T_97; // @[Mux.scala 98:16]
  wire [64:0] _T_99 = _T_52 ? {{1'd0}, _T_53[127:64]} : _T_98; // @[Mux.scala 98:16]
  wire [64:0] _T_100 = _T_46 ? {{1'd0}, _T_50[127:64]} : _T_99; // @[Mux.scala 98:16]
  wire [64:0] _T_101 = _T_41 ? {{1'd0}, _T_39[127:64]} : _T_100; // @[Mux.scala 98:16]
  wire [64:0] _T_102 = _T_36 ? {{1'd0}, _T_39[63:0]} : _T_101; // @[Mux.scala 98:16]
  wire [64:0] _T_103 = _T_35 ? {{1'd0}, io_input1} : _T_102; // @[Mux.scala 98:16]
  wire [64:0] _T_104 = _T_32 ? {{33'd0}, _T_34} : _T_103; // @[Mux.scala 98:16]
  wire [64:0] _T_105 = _T_30 ? {{1'd0}, _T_31} : _T_104; // @[Mux.scala 98:16]
  wire [64:0] _T_106 = _T_25 ? {{33'd0}, _T_29} : _T_105; // @[Mux.scala 98:16]
  wire [64:0] _T_107 = _T_21 ? {{1'd0}, _T_24} : _T_106; // @[Mux.scala 98:16]
  wire [64:0] _T_108 = _T_19 ? {{64'd0}, _T_20} : _T_107; // @[Mux.scala 98:16]
  wire [64:0] _T_109 = _T_15 ? {{64'd0}, _T_18} : _T_108; // @[Mux.scala 98:16]
  wire [64:0] _T_110 = _T_12 ? {{1'd0}, _T_13[63:0]} : _T_109; // @[Mux.scala 98:16]
  wire [64:0] _T_111 = _T_10 ? {{1'd0}, _T_11} : _T_110; // @[Mux.scala 98:16]
  wire [64:0] _T_112 = _T_8 ? {{1'd0}, _T_9} : _T_111; // @[Mux.scala 98:16]
  wire [64:0] _T_113 = _T_6 ? {{1'd0}, _T_7} : _T_112; // @[Mux.scala 98:16]
  wire [64:0] _T_114 = _T_3 ? {{1'd0}, _T_5} : _T_113; // @[Mux.scala 98:16]
  wire [64:0] _T_115 = _T_2 ? {{1'd0}, add_res} : _T_114; // @[Mux.scala 98:16]
  wire  _T_116 = io_res_ext_op == 3'h0; // @[alu.scala 65:24]
  wire  _T_117 = io_res_ext_op == 3'h1; // @[alu.scala 66:24]
  wire [63:0] res_temp = _T_115[63:0]; // @[alu.scala 27:24 alu.scala 35:14]
  wire [55:0] _T_120 = res_temp[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_122 = {_T_120,res_temp[7:0]}; // @[Cat.scala 29:58]
  wire  _T_123 = io_res_ext_op == 3'h2; // @[alu.scala 67:24]
  wire [63:0] _T_126 = {56'h0,res_temp[7:0]}; // @[Cat.scala 29:58]
  wire  _T_127 = io_res_ext_op == 3'h3; // @[alu.scala 68:24]
  wire [47:0] _T_130 = res_temp[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_132 = {_T_130,res_temp[15:0]}; // @[Cat.scala 29:58]
  wire  _T_133 = io_res_ext_op == 3'h4; // @[alu.scala 69:24]
  wire [63:0] _T_136 = {48'h0,res_temp[15:0]}; // @[Cat.scala 29:58]
  wire  _T_137 = io_res_ext_op == 3'h5; // @[alu.scala 70:24]
  wire [31:0] _T_140 = res_temp[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_142 = {_T_140,res_temp[31:0]}; // @[Cat.scala 29:58]
  wire  _T_143 = io_res_ext_op == 3'h6; // @[alu.scala 71:24]
  wire [63:0] _T_146 = {32'h0,res_temp[31:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_147 = _T_143 ? _T_146 : res_temp; // @[Mux.scala 98:16]
  wire [63:0] _T_148 = _T_137 ? _T_142 : _T_147; // @[Mux.scala 98:16]
  wire [63:0] _T_149 = _T_133 ? _T_136 : _T_148; // @[Mux.scala 98:16]
  wire [63:0] _T_150 = _T_127 ? _T_132 : _T_149; // @[Mux.scala 98:16]
  wire [63:0] _T_151 = _T_123 ? _T_126 : _T_150; // @[Mux.scala 98:16]
  wire [63:0] _T_152 = _T_117 ? _T_122 : _T_151; // @[Mux.scala 98:16]
  assign io_res = _T_116 ? res_temp : _T_152; // @[alu.scala 64:12]
endmodule
module Dpath(
  input         clock,
  input         reset,
  input  [2:0]  io_c2d_cp_pc_sel,
  input  [1:0]  io_c2d_cp_op1_sel,
  input  [1:0]  io_c2d_cp_op2_sel,
  input  [4:0]  io_c2d_cp_alu_sel,
  input         io_c2d_cp_reg_wen,
  input         io_c2d_cp_mem_en,
  input  [2:0]  io_c2d_cp_mem_read_op,
  input  [7:0]  io_c2d_cp_mem_write_mask,
  input         io_c2d_cp_mem_wen,
  input  [2:0]  io_c2d_cp_alu_ext_sel,
  input  [1:0]  io_c2d_cp_wb_sel,
  input  [2:0]  io_c2d_cp_csr_op,
  input         io_c2d_hasexception,
  input         io_c2d_shouldstall,
  output [31:0] io_d2c_instr,
  output        io_d2c_islt,
  output        io_d2c_isltu,
  output        io_d2c_iseq,
  output        io_d2c_isredir,
  input         io_imem_req_ready,
  output        io_imem_req_valid,
  output [31:0] io_imem_req_bits_addr,
  output [7:0]  io_imem_req_bits_mask,
  output [2:0]  io_imem_req_bits_op,
  output [63:0] io_imem_req_bits_wdata,
  output        io_imem_req_bits_memen,
  output        io_imem_req_bits_wen,
  output        io_imem_resp_ready,
  input         io_imem_resp_valid,
  input  [63:0] io_imem_resp_bits_rdata,
  input         io_dmem_req_ready,
  output        io_dmem_req_valid,
  output [31:0] io_dmem_req_bits_addr,
  output [7:0]  io_dmem_req_bits_mask,
  output [2:0]  io_dmem_req_bits_op,
  output [63:0] io_dmem_req_bits_wdata,
  output        io_dmem_req_bits_memen,
  output        io_dmem_req_bits_wen,
  output        io_dmem_resp_ready,
  input         io_dmem_resp_valid,
  input  [63:0] io_dmem_resp_bits_rdata
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  regfile_clock; // @[dpath.scala 72:25]
  wire [4:0] regfile_io_rp1; // @[dpath.scala 72:25]
  wire [4:0] regfile_io_rp2; // @[dpath.scala 72:25]
  wire [63:0] regfile_io_rp1_data; // @[dpath.scala 72:25]
  wire [63:0] regfile_io_rp2_data; // @[dpath.scala 72:25]
  wire [4:0] regfile_io_wp; // @[dpath.scala 72:25]
  wire [63:0] regfile_io_wp_data; // @[dpath.scala 72:25]
  wire  regfile_io_wp_en; // @[dpath.scala 72:25]
  wire [63:0] dp_alu_io_input1; // @[dpath.scala 118:24]
  wire [63:0] dp_alu_io_input2; // @[dpath.scala 118:24]
  wire [4:0] dp_alu_io_op; // @[dpath.scala 118:24]
  wire [2:0] dp_alu_io_res_ext_op; // @[dpath.scala 118:24]
  wire [63:0] dp_alu_io_res; // @[dpath.scala 118:24]
  reg [63:0] reg_pc; // @[dpath.scala 32:25]
  wire [31:0] dp_instr = io_imem_resp_bits_rdata[31:0]; // @[dpath.scala 42:52]
  wire  _T_2 = io_c2d_cp_pc_sel == 3'h0; // @[dpath.scala 55:27]
  wire  _T_3 = io_c2d_cp_pc_sel == 3'h4; // @[dpath.scala 56:27]
  wire  _T_4 = io_c2d_cp_pc_sel == 3'h1; // @[dpath.scala 57:27]
  wire  _T_5 = io_c2d_cp_pc_sel == 3'h3; // @[dpath.scala 58:27]
  wire  _T_6 = io_c2d_cp_pc_sel == 3'h2; // @[dpath.scala 59:27]
  wire [63:0] _T_63 = reg_pc; // @[dpath.scala 99:44]
  wire [11:0] dp_bim = {dp_instr[31],dp_instr[7],dp_instr[30:25],dp_instr[11:8]}; // @[Cat.scala 29:58]
  wire [50:0] _T_44 = dp_bim[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_64 = {_T_44,dp_instr[31],dp_instr[7],dp_instr[30:25],dp_instr[11:8],1'h0}; // @[dpath.scala 99:66]
  wire [63:0] temp_pc_branch_target = $signed(reg_pc) + $signed(_T_64); // @[dpath.scala 99:76]
  wire [63:0] temp_pc_next_4 = reg_pc + 64'h4; // @[dpath.scala 96:30]
  wire [11:0] dp_iim = dp_instr[31:20]; // @[dpath.scala 80:26]
  wire [53:0] _T_29 = dp_iim[11] ? 54'h3fffffffffffff : 54'h0; // @[Bitwise.scala 72:12]
  wire [65:0] dp_iim_ext = {_T_29,dp_iim}; // @[Cat.scala 29:58]
  wire [65:0] _T_56 = {_T_29,dp_iim}; // @[dpath.scala 98:64]
  wire [65:0] _GEN_2 = {{2{_T_63[63]}},_T_63}; // @[dpath.scala 98:45]
  wire [65:0] _T_59 = $signed(_GEN_2) + $signed(_T_56); // @[dpath.scala 98:45]
  wire [64:0] _T_60 = _T_59[65:1]; // @[dpath.scala 98:68]
  wire [65:0] _T_62 = {$signed(_T_60), 1'h0}; // @[dpath.scala 98:86]
  wire [63:0] temp_pc_jr_target = _T_62[63:0]; // @[dpath.scala 49:33 dpath.scala 98:23]
  wire [19:0] dp_jim = {dp_instr[31],dp_instr[19:12],dp_instr[20],dp_instr[30:21]}; // @[Cat.scala 29:58]
  wire [42:0] _T_32 = dp_jim[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_50 = {_T_32,dp_instr[31],dp_instr[19:12],dp_instr[20],dp_instr[30:21],1'h0}; // @[dpath.scala 97:64]
  wire [63:0] temp_pc_jump_target = $signed(reg_pc) + $signed(_T_50); // @[dpath.scala 97:74]
  wire  _T_12 = ~io_c2d_shouldstall; // @[dpath.scala 62:10]
  wire [4:0] dp_rs1_addr = dp_instr[19:15]; // @[dpath.scala 68:31]
  wire [4:0] dp_rd_addr = dp_instr[11:7]; // @[dpath.scala 70:31]
  wire [19:0] dp_uim = dp_instr[31:12]; // @[dpath.scala 82:26]
  wire [11:0] dp_sim = {dp_instr[31:25],dp_rd_addr}; // @[Cat.scala 29:58]
  wire [31:0] _T_36 = dp_uim[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_uim_ext = {_T_36,dp_uim,12'h0}; // @[Cat.scala 29:58]
  wire [51:0] _T_41 = dp_sim[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_sim_ext = {_T_41,dp_instr[31:25],dp_rd_addr}; // @[Cat.scala 29:58]
  wire [63:0] dp_zim_ext = {59'h0,dp_rs1_addr}; // @[Cat.scala 29:58]
  wire  _T_69 = io_c2d_cp_op1_sel == 2'h0; // @[dpath.scala 106:28]
  wire  _T_70 = io_c2d_cp_op1_sel == 2'h1; // @[dpath.scala 107:28]
  wire  _T_71 = io_c2d_cp_op1_sel == 2'h2; // @[dpath.scala 108:28]
  wire [63:0] _T_72 = _T_71 ? dp_uim_ext : regfile_io_rp1_data; // @[Mux.scala 98:16]
  wire [63:0] _T_73 = _T_70 ? dp_zim_ext : _T_72; // @[Mux.scala 98:16]
  wire [63:0] dp_op1_src = _T_69 ? regfile_io_rp1_data : _T_73; // @[Mux.scala 98:16]
  wire  _T_75 = io_c2d_cp_op2_sel == 2'h0; // @[dpath.scala 112:28]
  wire  _T_76 = io_c2d_cp_op2_sel == 2'h1; // @[dpath.scala 113:28]
  wire  _T_77 = io_c2d_cp_op2_sel == 2'h2; // @[dpath.scala 114:28]
  wire  _T_78 = io_c2d_cp_op2_sel == 2'h3; // @[dpath.scala 115:28]
  wire [63:0] _T_79 = _T_78 ? dp_sim_ext : regfile_io_rp2_data; // @[Mux.scala 98:16]
  wire [65:0] _T_80 = _T_77 ? dp_iim_ext : {{2'd0}, _T_79}; // @[Mux.scala 98:16]
  wire [65:0] _T_81 = _T_76 ? {{2'd0}, reg_pc} : _T_80; // @[Mux.scala 98:16]
  wire [65:0] _T_82 = _T_75 ? {{2'd0}, regfile_io_rp2_data} : _T_81; // @[Mux.scala 98:16]
  wire [63:0] _T_83 = _T_69 ? regfile_io_rp1_data : _T_73; // @[dpath.scala 129:38]
  wire [63:0] dp_op2_src = _T_82[63:0]; // @[dpath.scala 103:26 dpath.scala 111:16]
  wire [63:0] _T_84 = _T_82[63:0]; // @[dpath.scala 129:60]
  wire  _T_89 = io_c2d_cp_wb_sel == 2'h0; // @[dpath.scala 161:27]
  wire  _T_90 = io_c2d_cp_wb_sel == 2'h1; // @[dpath.scala 162:27]
  wire  _T_91 = io_c2d_cp_wb_sel == 2'h2; // @[dpath.scala 163:27]
  wire  _T_92 = io_c2d_cp_wb_sel == 2'h3; // @[dpath.scala 164:27]
  wire [63:0] _T_93 = _T_92 ? 64'h0 : dp_alu_io_res; // @[Mux.scala 98:16]
  wire [63:0] _T_94 = _T_91 ? temp_pc_next_4 : _T_93; // @[Mux.scala 98:16]
  wire [63:0] _T_95 = _T_90 ? io_dmem_resp_bits_rdata : _T_94; // @[Mux.scala 98:16]
  wire  _T_97 = ~io_c2d_hasexception; // @[dpath.scala 167:10]
  wire  _T_99 = _T_97 & _T_12; // @[dpath.scala 167:31]
  Regfile regfile ( // @[dpath.scala 72:25]
    .clock(regfile_clock),
    .io_rp1(regfile_io_rp1),
    .io_rp2(regfile_io_rp2),
    .io_rp1_data(regfile_io_rp1_data),
    .io_rp2_data(regfile_io_rp2_data),
    .io_wp(regfile_io_wp),
    .io_wp_data(regfile_io_wp_data),
    .io_wp_en(regfile_io_wp_en)
  );
  alu_module dp_alu ( // @[dpath.scala 118:24]
    .io_input1(dp_alu_io_input1),
    .io_input2(dp_alu_io_input2),
    .io_op(dp_alu_io_op),
    .io_res_ext_op(dp_alu_io_res_ext_op),
    .io_res(dp_alu_io_res)
  );
  assign io_d2c_instr = io_imem_resp_bits_rdata[31:0]; // @[dpath.scala 44:18]
  assign io_d2c_islt = $signed(_T_83) < $signed(_T_84); // @[dpath.scala 129:17]
  assign io_d2c_isltu = dp_op1_src < dp_op2_src; // @[dpath.scala 130:18]
  assign io_d2c_iseq = dp_op1_src == dp_op2_src; // @[dpath.scala 131:17]
  assign io_d2c_isredir = 1'h0; // @[dpath.scala 155:20]
  assign io_imem_req_valid = 1'h1; // @[dpath.scala 36:23]
  assign io_imem_req_bits_addr = reg_pc[31:0]; // @[dpath.scala 37:27]
  assign io_imem_req_bits_mask = 8'h0;
  assign io_imem_req_bits_op = 3'h5; // @[dpath.scala 38:25]
  assign io_imem_req_bits_wdata = 64'h0;
  assign io_imem_req_bits_memen = 1'h1; // @[dpath.scala 39:28]
  assign io_imem_req_bits_wen = 1'h0; // @[dpath.scala 40:26]
  assign io_imem_resp_ready = 1'h0;
  assign io_dmem_req_valid = io_c2d_cp_mem_en; // @[dpath.scala 134:23]
  assign io_dmem_req_bits_addr = dp_alu_io_res[31:0]; // @[dpath.scala 135:27]
  assign io_dmem_req_bits_mask = io_c2d_cp_mem_write_mask; // @[dpath.scala 136:27]
  assign io_dmem_req_bits_op = io_c2d_cp_mem_read_op; // @[dpath.scala 137:25]
  assign io_dmem_req_bits_wdata = regfile_io_rp2_data; // @[dpath.scala 138:28]
  assign io_dmem_req_bits_memen = io_c2d_cp_mem_en; // @[dpath.scala 139:28]
  assign io_dmem_req_bits_wen = io_c2d_cp_mem_wen; // @[dpath.scala 140:26]
  assign io_dmem_resp_ready = 1'h0;
  assign regfile_clock = clock;
  assign regfile_io_rp1 = dp_instr[19:15]; // @[dpath.scala 74:20]
  assign regfile_io_rp2 = dp_instr[24:20]; // @[dpath.scala 75:20]
  assign regfile_io_wp = dp_instr[11:7]; // @[dpath.scala 174:19]
  assign regfile_io_wp_data = _T_89 ? dp_alu_io_res : _T_95; // @[dpath.scala 175:24]
  assign regfile_io_wp_en = _T_99 & io_c2d_cp_reg_wen; // @[dpath.scala 169:26 dpath.scala 172:26]
  assign dp_alu_io_input1 = _T_69 ? regfile_io_rp1_data : _T_73; // @[dpath.scala 120:22]
  assign dp_alu_io_input2 = _T_82[63:0]; // @[dpath.scala 121:22]
  assign dp_alu_io_op = io_c2d_cp_alu_sel; // @[dpath.scala 123:18]
  assign dp_alu_io_res_ext_op = io_c2d_cp_alu_ext_sel; // @[dpath.scala 124:26]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  reg_pc = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      reg_pc <= 64'h80000000;
    end else if (_T_12) begin
      if (_T_2) begin
        reg_pc <= temp_pc_next_4;
      end else if (_T_3) begin
        reg_pc <= 64'h0;
      end else if (_T_4) begin
        reg_pc <= temp_pc_jump_target;
      end else if (_T_5) begin
        reg_pc <= temp_pc_jr_target;
      end else if (_T_6) begin
        reg_pc <= temp_pc_branch_target;
      end else begin
        reg_pc <= temp_pc_next_4;
      end
    end
  end
endmodule
