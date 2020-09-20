module Regfile(
  input         clock,
  input  [4:0]  io_rp1,
  input  [4:0]  io_rp2,
  output [63:0] io_rp1_data,
  output [63:0] io_rp2_data,
  input  [4:0]  io_wp,
  input  [63:0] io_wp_data,
  input         io_wp_en,
  output [63:0] _T_41_0_0,
  output [63:0] _T_41_0_1,
  output [63:0] _T_41_0_2,
  output [63:0] _T_41_0_3,
  output [63:0] _T_41_0_4,
  output [63:0] _T_41_0_5,
  output [63:0] _T_41_0_6,
  output [63:0] _T_41_0_7,
  output [63:0] _T_41_0_8,
  output [63:0] _T_41_0_9,
  output [63:0] _T_41_0_10,
  output [63:0] _T_41_0_11,
  output [63:0] _T_41_0_12,
  output [63:0] _T_41_0_13,
  output [63:0] _T_41_0_14,
  output [63:0] _T_41_0_15,
  output [63:0] _T_41_0_16,
  output [63:0] _T_41_0_17,
  output [63:0] _T_41_0_18,
  output [63:0] _T_41_0_19,
  output [63:0] _T_41_0_20,
  output [63:0] _T_41_0_21,
  output [63:0] _T_41_0_22,
  output [63:0] _T_41_0_23,
  output [63:0] _T_41_0_24,
  output [63:0] _T_41_0_25,
  output [63:0] _T_41_0_26,
  output [63:0] _T_41_0_27,
  output [63:0] _T_41_0_28,
  output [63:0] _T_41_0_29,
  output [63:0] _T_41_0_30,
  output [63:0] _T_41_0_31
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] regs [0:31]; // @[regfile.scala 29:19]
  wire [63:0] regs__T_4_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_4_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_7_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_7_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_9_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_9_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_10_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_10_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_11_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_11_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_12_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_12_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_13_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_13_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_14_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_14_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_15_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_15_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_16_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_16_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_17_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_17_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_18_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_18_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_19_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_19_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_20_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_20_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_21_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_21_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_22_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_22_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_23_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_23_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_24_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_24_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_25_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_25_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_26_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_26_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_27_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_27_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_28_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_28_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_29_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_29_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_30_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_30_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_31_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_31_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_32_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_32_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_33_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_33_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_34_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_34_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_35_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_35_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_36_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_36_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_37_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_37_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_38_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_38_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_39_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_39_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_40_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_40_addr; // @[regfile.scala 29:19]
  wire [63:0] regs__T_data; // @[regfile.scala 29:19]
  wire [4:0] regs__T_addr; // @[regfile.scala 29:19]
  wire  regs__T_mask; // @[regfile.scala 29:19]
  wire  regs__T_en; // @[regfile.scala 29:19]
  wire  _T_1 = io_wp == 5'h0; // @[regfile.scala 33:34]
  wire  _T_3 = io_rp1 == 5'h0; // @[regfile.scala 36:31]
  wire  _T_6 = io_rp2 == 5'h0; // @[regfile.scala 37:31]
  wire [63:0] _T_41_0 = regs__T_9_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_1 = regs__T_10_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_2 = regs__T_11_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_3 = regs__T_12_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_4 = regs__T_13_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_5 = regs__T_14_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_6 = regs__T_15_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_7 = regs__T_16_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_8 = regs__T_17_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_9 = regs__T_18_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_10 = regs__T_19_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_11 = regs__T_20_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_12 = regs__T_21_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_13 = regs__T_22_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_14 = regs__T_23_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_15 = regs__T_24_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_16 = regs__T_25_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_17 = regs__T_26_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_18 = regs__T_27_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_19 = regs__T_28_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_20 = regs__T_29_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_21 = regs__T_30_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_22 = regs__T_31_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_23 = regs__T_32_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_24 = regs__T_33_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_25 = regs__T_34_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_26 = regs__T_35_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_27 = regs__T_36_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_28 = regs__T_37_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_29 = regs__T_38_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_30 = regs__T_39_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  wire [63:0] _T_41_31 = regs__T_40_data; // @[regfile.scala 40:34 regfile.scala 40:34]
  assign regs__T_4_addr = io_rp1;
  assign regs__T_4_data = regs[regs__T_4_addr]; // @[regfile.scala 29:19]
  assign regs__T_7_addr = io_rp2;
  assign regs__T_7_data = regs[regs__T_7_addr]; // @[regfile.scala 29:19]
  assign regs__T_9_addr = 5'h0;
  assign regs__T_9_data = regs[regs__T_9_addr]; // @[regfile.scala 29:19]
  assign regs__T_10_addr = 5'h1;
  assign regs__T_10_data = regs[regs__T_10_addr]; // @[regfile.scala 29:19]
  assign regs__T_11_addr = 5'h2;
  assign regs__T_11_data = regs[regs__T_11_addr]; // @[regfile.scala 29:19]
  assign regs__T_12_addr = 5'h3;
  assign regs__T_12_data = regs[regs__T_12_addr]; // @[regfile.scala 29:19]
  assign regs__T_13_addr = 5'h4;
  assign regs__T_13_data = regs[regs__T_13_addr]; // @[regfile.scala 29:19]
  assign regs__T_14_addr = 5'h5;
  assign regs__T_14_data = regs[regs__T_14_addr]; // @[regfile.scala 29:19]
  assign regs__T_15_addr = 5'h6;
  assign regs__T_15_data = regs[regs__T_15_addr]; // @[regfile.scala 29:19]
  assign regs__T_16_addr = 5'h7;
  assign regs__T_16_data = regs[regs__T_16_addr]; // @[regfile.scala 29:19]
  assign regs__T_17_addr = 5'h8;
  assign regs__T_17_data = regs[regs__T_17_addr]; // @[regfile.scala 29:19]
  assign regs__T_18_addr = 5'h9;
  assign regs__T_18_data = regs[regs__T_18_addr]; // @[regfile.scala 29:19]
  assign regs__T_19_addr = 5'ha;
  assign regs__T_19_data = regs[regs__T_19_addr]; // @[regfile.scala 29:19]
  assign regs__T_20_addr = 5'hb;
  assign regs__T_20_data = regs[regs__T_20_addr]; // @[regfile.scala 29:19]
  assign regs__T_21_addr = 5'hc;
  assign regs__T_21_data = regs[regs__T_21_addr]; // @[regfile.scala 29:19]
  assign regs__T_22_addr = 5'hd;
  assign regs__T_22_data = regs[regs__T_22_addr]; // @[regfile.scala 29:19]
  assign regs__T_23_addr = 5'he;
  assign regs__T_23_data = regs[regs__T_23_addr]; // @[regfile.scala 29:19]
  assign regs__T_24_addr = 5'hf;
  assign regs__T_24_data = regs[regs__T_24_addr]; // @[regfile.scala 29:19]
  assign regs__T_25_addr = 5'h10;
  assign regs__T_25_data = regs[regs__T_25_addr]; // @[regfile.scala 29:19]
  assign regs__T_26_addr = 5'h11;
  assign regs__T_26_data = regs[regs__T_26_addr]; // @[regfile.scala 29:19]
  assign regs__T_27_addr = 5'h12;
  assign regs__T_27_data = regs[regs__T_27_addr]; // @[regfile.scala 29:19]
  assign regs__T_28_addr = 5'h13;
  assign regs__T_28_data = regs[regs__T_28_addr]; // @[regfile.scala 29:19]
  assign regs__T_29_addr = 5'h14;
  assign regs__T_29_data = regs[regs__T_29_addr]; // @[regfile.scala 29:19]
  assign regs__T_30_addr = 5'h15;
  assign regs__T_30_data = regs[regs__T_30_addr]; // @[regfile.scala 29:19]
  assign regs__T_31_addr = 5'h16;
  assign regs__T_31_data = regs[regs__T_31_addr]; // @[regfile.scala 29:19]
  assign regs__T_32_addr = 5'h17;
  assign regs__T_32_data = regs[regs__T_32_addr]; // @[regfile.scala 29:19]
  assign regs__T_33_addr = 5'h18;
  assign regs__T_33_data = regs[regs__T_33_addr]; // @[regfile.scala 29:19]
  assign regs__T_34_addr = 5'h19;
  assign regs__T_34_data = regs[regs__T_34_addr]; // @[regfile.scala 29:19]
  assign regs__T_35_addr = 5'h1a;
  assign regs__T_35_data = regs[regs__T_35_addr]; // @[regfile.scala 29:19]
  assign regs__T_36_addr = 5'h1b;
  assign regs__T_36_data = regs[regs__T_36_addr]; // @[regfile.scala 29:19]
  assign regs__T_37_addr = 5'h1c;
  assign regs__T_37_data = regs[regs__T_37_addr]; // @[regfile.scala 29:19]
  assign regs__T_38_addr = 5'h1d;
  assign regs__T_38_data = regs[regs__T_38_addr]; // @[regfile.scala 29:19]
  assign regs__T_39_addr = 5'h1e;
  assign regs__T_39_data = regs[regs__T_39_addr]; // @[regfile.scala 29:19]
  assign regs__T_40_addr = 5'h1f;
  assign regs__T_40_data = regs[regs__T_40_addr]; // @[regfile.scala 29:19]
  assign regs__T_data = _T_1 ? 64'h0 : io_wp_data;
  assign regs__T_addr = io_wp;
  assign regs__T_mask = 1'h1;
  assign regs__T_en = io_wp_en;
  assign io_rp1_data = _T_3 ? 64'h0 : regs__T_4_data; // @[regfile.scala 36:17]
  assign io_rp2_data = _T_6 ? 64'h0 : regs__T_7_data; // @[regfile.scala 37:17]
  assign _T_41_0_0 = _T_41_0;
  assign _T_41_0_1 = _T_41_1;
  assign _T_41_0_2 = _T_41_2;
  assign _T_41_0_3 = _T_41_3;
  assign _T_41_0_4 = _T_41_4;
  assign _T_41_0_5 = _T_41_5;
  assign _T_41_0_6 = _T_41_6;
  assign _T_41_0_7 = _T_41_7;
  assign _T_41_0_8 = _T_41_8;
  assign _T_41_0_9 = _T_41_9;
  assign _T_41_0_10 = _T_41_10;
  assign _T_41_0_11 = _T_41_11;
  assign _T_41_0_12 = _T_41_12;
  assign _T_41_0_13 = _T_41_13;
  assign _T_41_0_14 = _T_41_14;
  assign _T_41_0_15 = _T_41_15;
  assign _T_41_0_16 = _T_41_16;
  assign _T_41_0_17 = _T_41_17;
  assign _T_41_0_18 = _T_41_18;
  assign _T_41_0_19 = _T_41_19;
  assign _T_41_0_20 = _T_41_20;
  assign _T_41_0_21 = _T_41_21;
  assign _T_41_0_22 = _T_41_22;
  assign _T_41_0_23 = _T_41_23;
  assign _T_41_0_24 = _T_41_24;
  assign _T_41_0_25 = _T_41_25;
  assign _T_41_0_26 = _T_41_26;
  assign _T_41_0_27 = _T_41_27;
  assign _T_41_0_28 = _T_41_28;
  assign _T_41_0_29 = _T_41_29;
  assign _T_41_0_30 = _T_41_30;
  assign _T_41_0_31 = _T_41_31;
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
      regs[regs__T_addr] <= regs__T_data; // @[regfile.scala 29:19]
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
  input  [2:0]  io__c2d_cp_pc_sel,
  input  [1:0]  io__c2d_cp_op1_sel,
  input  [1:0]  io__c2d_cp_op2_sel,
  input  [4:0]  io__c2d_cp_alu_sel,
  input         io__c2d_cp_reg_wen,
  input         io__c2d_cp_mem_en,
  input  [2:0]  io__c2d_cp_mem_read_op,
  input  [7:0]  io__c2d_cp_mem_write_mask,
  input         io__c2d_cp_mem_wen,
  input  [2:0]  io__c2d_cp_alu_ext_sel,
  input  [1:0]  io__c2d_cp_wb_sel,
  input         io__c2d_hasexception,
  input         io__c2d_shouldstall,
  output [31:0] io__d2c_instr,
  output        io__d2c_islt,
  output        io__d2c_isltu,
  output        io__d2c_iseq,
  output [31:0] io__imem_req_bits_addr,
  input  [63:0] io__imem_resp_bits_rdata,
  output        io__dmem_req_valid,
  output [31:0] io__dmem_req_bits_addr,
  output [7:0]  io__dmem_req_bits_mask,
  output [2:0]  io__dmem_req_bits_op,
  output [63:0] io__dmem_req_bits_wdata,
  output        io__dmem_req_bits_memen,
  output        io__dmem_req_bits_wen,
  input  [63:0] io__dmem_resp_bits_rdata,
  output        io_c2d_cp_reg_wen,
  output [63:0] reg_pc_0,
  output [63:0] _T_41_0_0,
  output [63:0] _T_41_0_1,
  output [63:0] _T_41_0_2,
  output [63:0] _T_41_0_3,
  output [63:0] _T_41_0_4,
  output [63:0] _T_41_0_5,
  output [63:0] _T_41_0_6,
  output [63:0] _T_41_0_7,
  output [63:0] _T_41_0_8,
  output [63:0] _T_41_0_9,
  output [63:0] _T_41_0_10,
  output [63:0] _T_41_0_11,
  output [63:0] _T_41_0_12,
  output [63:0] _T_41_0_13,
  output [63:0] _T_41_0_14,
  output [63:0] _T_41_0_15,
  output [63:0] _T_41_0_16,
  output [63:0] _T_41_0_17,
  output [63:0] _T_41_0_18,
  output [63:0] _T_41_0_19,
  output [63:0] _T_41_0_20,
  output [63:0] _T_41_0_21,
  output [63:0] _T_41_0_22,
  output [63:0] _T_41_0_23,
  output [63:0] _T_41_0_24,
  output [63:0] _T_41_0_25,
  output [63:0] _T_41_0_26,
  output [63:0] _T_41_0_27,
  output [63:0] _T_41_0_28,
  output [63:0] _T_41_0_29,
  output [63:0] _T_41_0_30,
  output [63:0] _T_41_0_31
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  regfile_clock; // @[dpath.scala 73:25]
  wire [4:0] regfile_io_rp1; // @[dpath.scala 73:25]
  wire [4:0] regfile_io_rp2; // @[dpath.scala 73:25]
  wire [63:0] regfile_io_rp1_data; // @[dpath.scala 73:25]
  wire [63:0] regfile_io_rp2_data; // @[dpath.scala 73:25]
  wire [4:0] regfile_io_wp; // @[dpath.scala 73:25]
  wire [63:0] regfile_io_wp_data; // @[dpath.scala 73:25]
  wire  regfile_io_wp_en; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_0; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_1; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_2; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_3; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_4; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_5; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_6; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_7; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_8; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_9; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_10; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_11; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_12; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_13; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_14; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_15; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_16; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_17; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_18; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_19; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_20; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_21; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_22; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_23; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_24; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_25; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_26; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_27; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_28; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_29; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_30; // @[dpath.scala 73:25]
  wire [63:0] regfile__T_41_0_31; // @[dpath.scala 73:25]
  wire [63:0] dp_alu_io_input1; // @[dpath.scala 119:24]
  wire [63:0] dp_alu_io_input2; // @[dpath.scala 119:24]
  wire [4:0] dp_alu_io_op; // @[dpath.scala 119:24]
  wire [2:0] dp_alu_io_res_ext_op; // @[dpath.scala 119:24]
  wire [63:0] dp_alu_io_res; // @[dpath.scala 119:24]
  reg [63:0] reg_pc; // @[dpath.scala 33:25]
  wire [31:0] dp_instr = io__imem_resp_bits_rdata[31:0]; // @[dpath.scala 43:52]
  wire  _T_2 = io__c2d_cp_pc_sel == 3'h0; // @[dpath.scala 56:27]
  wire  _T_3 = io__c2d_cp_pc_sel == 3'h4; // @[dpath.scala 57:27]
  wire  _T_4 = io__c2d_cp_pc_sel == 3'h1; // @[dpath.scala 58:27]
  wire  _T_5 = io__c2d_cp_pc_sel == 3'h3; // @[dpath.scala 59:27]
  wire  _T_6 = io__c2d_cp_pc_sel == 3'h2; // @[dpath.scala 60:27]
  wire [11:0] dp_bim = {dp_instr[31],dp_instr[7],dp_instr[30:25],dp_instr[11:8]}; // @[Cat.scala 29:58]
  wire [50:0] _T_44 = dp_bim[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_64 = {_T_44,dp_instr[31],dp_instr[7],dp_instr[30:25],dp_instr[11:8],1'h0}; // @[dpath.scala 100:66]
  wire [63:0] temp_pc_branch_target = $signed(reg_pc) + $signed(_T_64); // @[dpath.scala 100:76]
  wire [63:0] temp_pc_next_4 = reg_pc + 64'h4; // @[dpath.scala 97:30]
  wire [63:0] _T_55 = regfile_io_rp1_data; // @[dpath.scala 99:47]
  wire [11:0] dp_iim = dp_instr[31:20]; // @[dpath.scala 81:26]
  wire [53:0] _T_29 = dp_iim[11] ? 54'h3fffffffffffff : 54'h0; // @[Bitwise.scala 72:12]
  wire [65:0] dp_iim_ext = {_T_29,dp_iim}; // @[Cat.scala 29:58]
  wire [65:0] _T_56 = {_T_29,dp_iim}; // @[dpath.scala 99:69]
  wire [65:0] _GEN_2 = {{2{_T_55[63]}},_T_55}; // @[dpath.scala 99:50]
  wire [65:0] _T_59 = $signed(_GEN_2) + $signed(_T_56); // @[dpath.scala 99:50]
  wire [64:0] _T_60 = _T_59[65:1]; // @[dpath.scala 99:73]
  wire [65:0] _T_62 = {$signed(_T_60), 1'h0}; // @[dpath.scala 99:91]
  wire [63:0] temp_pc_jr_target = _T_62[63:0]; // @[dpath.scala 50:33 dpath.scala 99:23]
  wire [19:0] dp_jim = {dp_instr[31],dp_instr[19:12],dp_instr[20],dp_instr[30:21]}; // @[Cat.scala 29:58]
  wire [42:0] _T_32 = dp_jim[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_50 = {_T_32,dp_instr[31],dp_instr[19:12],dp_instr[20],dp_instr[30:21],1'h0}; // @[dpath.scala 98:64]
  wire [63:0] temp_pc_jump_target = $signed(reg_pc) + $signed(_T_50); // @[dpath.scala 98:74]
  wire  _T_12 = ~io__c2d_shouldstall; // @[dpath.scala 63:10]
  wire [4:0] dp_rs1_addr = dp_instr[19:15]; // @[dpath.scala 69:31]
  wire [4:0] dp_rd_addr = dp_instr[11:7]; // @[dpath.scala 71:31]
  wire [19:0] dp_uim = dp_instr[31:12]; // @[dpath.scala 83:26]
  wire [11:0] dp_sim = {dp_instr[31:25],dp_rd_addr}; // @[Cat.scala 29:58]
  wire [31:0] _T_36 = dp_uim[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_uim_ext = {_T_36,dp_uim,12'h0}; // @[Cat.scala 29:58]
  wire [51:0] _T_41 = dp_sim[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_sim_ext = {_T_41,dp_instr[31:25],dp_rd_addr}; // @[Cat.scala 29:58]
  wire [63:0] dp_zim_ext = {59'h0,dp_rs1_addr}; // @[Cat.scala 29:58]
  wire  _T_69 = io__c2d_cp_op1_sel == 2'h0; // @[dpath.scala 107:28]
  wire  _T_70 = io__c2d_cp_op1_sel == 2'h1; // @[dpath.scala 108:28]
  wire  _T_71 = io__c2d_cp_op1_sel == 2'h2; // @[dpath.scala 109:28]
  wire [63:0] _T_72 = _T_71 ? dp_uim_ext : regfile_io_rp1_data; // @[Mux.scala 98:16]
  wire [63:0] _T_73 = _T_70 ? dp_zim_ext : _T_72; // @[Mux.scala 98:16]
  wire [63:0] dp_op1_src = _T_69 ? regfile_io_rp1_data : _T_73; // @[Mux.scala 98:16]
  wire  _T_75 = io__c2d_cp_op2_sel == 2'h0; // @[dpath.scala 113:28]
  wire  _T_76 = io__c2d_cp_op2_sel == 2'h1; // @[dpath.scala 114:28]
  wire  _T_77 = io__c2d_cp_op2_sel == 2'h2; // @[dpath.scala 115:28]
  wire  _T_78 = io__c2d_cp_op2_sel == 2'h3; // @[dpath.scala 116:28]
  wire [63:0] _T_79 = _T_78 ? dp_sim_ext : regfile_io_rp2_data; // @[Mux.scala 98:16]
  wire [65:0] _T_80 = _T_77 ? dp_iim_ext : {{2'd0}, _T_79}; // @[Mux.scala 98:16]
  wire [65:0] _T_81 = _T_76 ? {{2'd0}, reg_pc} : _T_80; // @[Mux.scala 98:16]
  wire [65:0] _T_82 = _T_75 ? {{2'd0}, regfile_io_rp2_data} : _T_81; // @[Mux.scala 98:16]
  wire [63:0] _T_83 = _T_69 ? regfile_io_rp1_data : _T_73; // @[dpath.scala 130:38]
  wire [63:0] dp_op2_src = _T_82[63:0]; // @[dpath.scala 104:26 dpath.scala 112:16]
  wire [63:0] _T_84 = _T_82[63:0]; // @[dpath.scala 130:60]
  wire  _T_89 = io__c2d_cp_wb_sel == 2'h0; // @[dpath.scala 162:27]
  wire  _T_90 = io__c2d_cp_wb_sel == 2'h1; // @[dpath.scala 163:27]
  wire  _T_91 = io__c2d_cp_wb_sel == 2'h2; // @[dpath.scala 164:27]
  wire  _T_92 = io__c2d_cp_wb_sel == 2'h3; // @[dpath.scala 165:27]
  wire [63:0] _T_93 = _T_92 ? 64'h0 : dp_alu_io_res; // @[Mux.scala 98:16]
  wire [63:0] _T_94 = _T_91 ? temp_pc_next_4 : _T_93; // @[Mux.scala 98:16]
  wire [63:0] _T_95 = _T_90 ? io__dmem_resp_bits_rdata : _T_94; // @[Mux.scala 98:16]
  wire  _T_97 = ~io__c2d_hasexception; // @[dpath.scala 168:10]
  wire  _T_99 = _T_97 & _T_12; // @[dpath.scala 168:31]
  Regfile regfile ( // @[dpath.scala 73:25]
    .clock(regfile_clock),
    .io_rp1(regfile_io_rp1),
    .io_rp2(regfile_io_rp2),
    .io_rp1_data(regfile_io_rp1_data),
    .io_rp2_data(regfile_io_rp2_data),
    .io_wp(regfile_io_wp),
    .io_wp_data(regfile_io_wp_data),
    .io_wp_en(regfile_io_wp_en),
    ._T_41_0_0(regfile__T_41_0_0),
    ._T_41_0_1(regfile__T_41_0_1),
    ._T_41_0_2(regfile__T_41_0_2),
    ._T_41_0_3(regfile__T_41_0_3),
    ._T_41_0_4(regfile__T_41_0_4),
    ._T_41_0_5(regfile__T_41_0_5),
    ._T_41_0_6(regfile__T_41_0_6),
    ._T_41_0_7(regfile__T_41_0_7),
    ._T_41_0_8(regfile__T_41_0_8),
    ._T_41_0_9(regfile__T_41_0_9),
    ._T_41_0_10(regfile__T_41_0_10),
    ._T_41_0_11(regfile__T_41_0_11),
    ._T_41_0_12(regfile__T_41_0_12),
    ._T_41_0_13(regfile__T_41_0_13),
    ._T_41_0_14(regfile__T_41_0_14),
    ._T_41_0_15(regfile__T_41_0_15),
    ._T_41_0_16(regfile__T_41_0_16),
    ._T_41_0_17(regfile__T_41_0_17),
    ._T_41_0_18(regfile__T_41_0_18),
    ._T_41_0_19(regfile__T_41_0_19),
    ._T_41_0_20(regfile__T_41_0_20),
    ._T_41_0_21(regfile__T_41_0_21),
    ._T_41_0_22(regfile__T_41_0_22),
    ._T_41_0_23(regfile__T_41_0_23),
    ._T_41_0_24(regfile__T_41_0_24),
    ._T_41_0_25(regfile__T_41_0_25),
    ._T_41_0_26(regfile__T_41_0_26),
    ._T_41_0_27(regfile__T_41_0_27),
    ._T_41_0_28(regfile__T_41_0_28),
    ._T_41_0_29(regfile__T_41_0_29),
    ._T_41_0_30(regfile__T_41_0_30),
    ._T_41_0_31(regfile__T_41_0_31)
  );
  alu_module dp_alu ( // @[dpath.scala 119:24]
    .io_input1(dp_alu_io_input1),
    .io_input2(dp_alu_io_input2),
    .io_op(dp_alu_io_op),
    .io_res_ext_op(dp_alu_io_res_ext_op),
    .io_res(dp_alu_io_res)
  );
  assign io__d2c_instr = io__imem_resp_bits_rdata[31:0]; // @[dpath.scala 45:18]
  assign io__d2c_islt = $signed(_T_83) < $signed(_T_84); // @[dpath.scala 130:17]
  assign io__d2c_isltu = dp_op1_src < dp_op2_src; // @[dpath.scala 131:18]
  assign io__d2c_iseq = dp_op1_src == dp_op2_src; // @[dpath.scala 132:17]
  assign io__imem_req_bits_addr = reg_pc[31:0]; // @[dpath.scala 38:27]
  assign io__dmem_req_valid = io__c2d_cp_mem_en; // @[dpath.scala 135:23]
  assign io__dmem_req_bits_addr = dp_alu_io_res[31:0]; // @[dpath.scala 136:27]
  assign io__dmem_req_bits_mask = io__c2d_cp_mem_write_mask; // @[dpath.scala 137:27]
  assign io__dmem_req_bits_op = io__c2d_cp_mem_read_op; // @[dpath.scala 138:25]
  assign io__dmem_req_bits_wdata = regfile_io_rp2_data; // @[dpath.scala 139:28]
  assign io__dmem_req_bits_memen = io__c2d_cp_mem_en; // @[dpath.scala 140:28]
  assign io__dmem_req_bits_wen = io__c2d_cp_mem_wen; // @[dpath.scala 141:26]
  assign io_c2d_cp_reg_wen = io__c2d_cp_reg_wen;
  assign reg_pc_0 = reg_pc;
  assign _T_41_0_0 = regfile__T_41_0_0;
  assign _T_41_0_1 = regfile__T_41_0_1;
  assign _T_41_0_2 = regfile__T_41_0_2;
  assign _T_41_0_3 = regfile__T_41_0_3;
  assign _T_41_0_4 = regfile__T_41_0_4;
  assign _T_41_0_5 = regfile__T_41_0_5;
  assign _T_41_0_6 = regfile__T_41_0_6;
  assign _T_41_0_7 = regfile__T_41_0_7;
  assign _T_41_0_8 = regfile__T_41_0_8;
  assign _T_41_0_9 = regfile__T_41_0_9;
  assign _T_41_0_10 = regfile__T_41_0_10;
  assign _T_41_0_11 = regfile__T_41_0_11;
  assign _T_41_0_12 = regfile__T_41_0_12;
  assign _T_41_0_13 = regfile__T_41_0_13;
  assign _T_41_0_14 = regfile__T_41_0_14;
  assign _T_41_0_15 = regfile__T_41_0_15;
  assign _T_41_0_16 = regfile__T_41_0_16;
  assign _T_41_0_17 = regfile__T_41_0_17;
  assign _T_41_0_18 = regfile__T_41_0_18;
  assign _T_41_0_19 = regfile__T_41_0_19;
  assign _T_41_0_20 = regfile__T_41_0_20;
  assign _T_41_0_21 = regfile__T_41_0_21;
  assign _T_41_0_22 = regfile__T_41_0_22;
  assign _T_41_0_23 = regfile__T_41_0_23;
  assign _T_41_0_24 = regfile__T_41_0_24;
  assign _T_41_0_25 = regfile__T_41_0_25;
  assign _T_41_0_26 = regfile__T_41_0_26;
  assign _T_41_0_27 = regfile__T_41_0_27;
  assign _T_41_0_28 = regfile__T_41_0_28;
  assign _T_41_0_29 = regfile__T_41_0_29;
  assign _T_41_0_30 = regfile__T_41_0_30;
  assign _T_41_0_31 = regfile__T_41_0_31;
  assign regfile_clock = clock;
  assign regfile_io_rp1 = dp_instr[19:15]; // @[dpath.scala 75:20]
  assign regfile_io_rp2 = dp_instr[24:20]; // @[dpath.scala 76:20]
  assign regfile_io_wp = dp_instr[11:7]; // @[dpath.scala 175:19]
  assign regfile_io_wp_data = _T_89 ? dp_alu_io_res : _T_95; // @[dpath.scala 176:24]
  assign regfile_io_wp_en = _T_99 & io__c2d_cp_reg_wen; // @[dpath.scala 170:26 dpath.scala 173:26]
  assign dp_alu_io_input1 = _T_69 ? regfile_io_rp1_data : _T_73; // @[dpath.scala 121:22]
  assign dp_alu_io_input2 = _T_82[63:0]; // @[dpath.scala 122:22]
  assign dp_alu_io_op = io__c2d_cp_alu_sel; // @[dpath.scala 124:18]
  assign dp_alu_io_res_ext_op = io__c2d_cp_alu_ext_sel; // @[dpath.scala 125:26]
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
module Cpath(
  output [2:0]  io_c2d_cp_pc_sel,
  output [1:0]  io_c2d_cp_op1_sel,
  output [1:0]  io_c2d_cp_op2_sel,
  output [4:0]  io_c2d_cp_alu_sel,
  output        io_c2d_cp_reg_wen,
  output        io_c2d_cp_mem_en,
  output [2:0]  io_c2d_cp_mem_read_op,
  output [7:0]  io_c2d_cp_mem_write_mask,
  output        io_c2d_cp_mem_wen,
  output [2:0]  io_c2d_cp_alu_ext_sel,
  output [1:0]  io_c2d_cp_wb_sel,
  output        io_c2d_hasexception,
  output        io_c2d_shouldstall,
  input  [31:0] io_d2c_instr,
  input         io_d2c_islt,
  input         io_d2c_isltu,
  input         io_d2c_iseq,
  input         io_dmem_resp_valid,
  output        io_c2d_cp_reg_wen_0
);
  wire [31:0] _T = io_d2c_instr & 32'h7f; // @[Lookup.scala 31:38]
  wire  _T_1 = 32'h6f == _T; // @[Lookup.scala 31:38]
  wire [31:0] _T_2 = io_d2c_instr & 32'h707f; // @[Lookup.scala 31:38]
  wire  _T_3 = 32'h2067 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_5 = 32'h3 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_7 = 32'h4003 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_9 = 32'h3003 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_11 = 32'h1003 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_13 = 32'h5003 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_15 = 32'h2003 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_17 = 32'h6003 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_19 = 32'h37 == _T; // @[Lookup.scala 31:38]
  wire  _T_21 = 32'h17 == _T; // @[Lookup.scala 31:38]
  wire [31:0] _T_22 = io_d2c_instr & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _T_23 = 32'h1033 == _T_22; // @[Lookup.scala 31:38]
  wire [31:0] _T_24 = io_d2c_instr & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _T_25 = 32'h1013 == _T_24; // @[Lookup.scala 31:38]
  wire  _T_27 = 32'h101b == _T_24; // @[Lookup.scala 31:38]
  wire  _T_29 = 32'h103b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_31 = 32'h2033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_33 = 32'h2013 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_35 = 32'h3013 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_37 = 32'h3033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_39 = 32'h40005033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_41 = 32'h40005013 == _T_24; // @[Lookup.scala 31:38]
  wire  _T_43 = 32'h4000501b == _T_24; // @[Lookup.scala 31:38]
  wire  _T_45 = 32'h4000503b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_47 = 32'h5033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_49 = 32'h5013 == _T_24; // @[Lookup.scala 31:38]
  wire  _T_51 = 32'h501b == _T_24; // @[Lookup.scala 31:38]
  wire  _T_53 = 32'h503b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_55 = 32'h40000033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_57 = 32'h4000003b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_59 = 32'h4033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_61 = 32'h4013 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_63 = 32'h6033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_65 = 32'h6013 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_67 = 32'h33 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_69 = 32'h13 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_71 = 32'h1b == _T_2; // @[Lookup.scala 31:38]
  wire  _T_73 = 32'h3b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_75 = 32'h7033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_77 = 32'h7013 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_79 = 32'h23 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_81 = 32'h3023 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_83 = 32'h1023 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_85 = 32'h2023 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_87 = 32'h63 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_89 = 32'h5063 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_91 = 32'h7063 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_93 = 32'h4063 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_95 = 32'h6063 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_97 = 32'h1063 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_99 = 32'h3073 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_101 = 32'h7073 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_103 = 32'h2073 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_105 = 32'h6073 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_107 = 32'h1073 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_109 = 32'h5073 == _T_2; // @[Lookup.scala 31:38]
  wire  _T_111 = 32'h105073 == io_d2c_instr; // @[Lookup.scala 31:38]
  wire  _T_113 = 32'h73 == io_d2c_instr; // @[Lookup.scala 31:38]
  wire  _T_115 = 32'h10500073 == io_d2c_instr; // @[Lookup.scala 31:38]
  wire  _T_117 = 32'h10200073 == io_d2c_instr; // @[Lookup.scala 31:38]
  wire  _T_119 = 32'h30200073 == io_d2c_instr; // @[Lookup.scala 31:38]
  wire [31:0] _T_120 = io_d2c_instr & 32'hf00fffff; // @[Lookup.scala 31:38]
  wire  _T_121 = 32'hf == _T_120; // @[Lookup.scala 31:38]
  wire  _T_123 = 32'h100f == io_d2c_instr; // @[Lookup.scala 31:38]
  wire  _T_125 = 32'h2000033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_127 = 32'h2001033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_129 = 32'h2002033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_131 = 32'h2003033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_133 = 32'h200003b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_135 = 32'h2006033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_137 = 32'h2007033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_139 = 32'h200703b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_141 = 32'h200603b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_143 = 32'h2004033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_145 = 32'h2005033 == _T_22; // @[Lookup.scala 31:38]
  wire  _T_147 = 32'h200503b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_149 = 32'h200403b == _T_22; // @[Lookup.scala 31:38]
  wire  _T_151 = _T_147 | _T_149; // @[Lookup.scala 33:37]
  wire  _T_152 = _T_145 | _T_151; // @[Lookup.scala 33:37]
  wire  _T_153 = _T_143 | _T_152; // @[Lookup.scala 33:37]
  wire  _T_154 = _T_141 | _T_153; // @[Lookup.scala 33:37]
  wire  _T_155 = _T_139 | _T_154; // @[Lookup.scala 33:37]
  wire  _T_156 = _T_137 | _T_155; // @[Lookup.scala 33:37]
  wire  _T_157 = _T_135 | _T_156; // @[Lookup.scala 33:37]
  wire  _T_158 = _T_133 | _T_157; // @[Lookup.scala 33:37]
  wire  _T_159 = _T_131 | _T_158; // @[Lookup.scala 33:37]
  wire  _T_160 = _T_129 | _T_159; // @[Lookup.scala 33:37]
  wire  _T_161 = _T_127 | _T_160; // @[Lookup.scala 33:37]
  wire  _T_162 = _T_125 | _T_161; // @[Lookup.scala 33:37]
  wire  _T_163 = _T_123 | _T_162; // @[Lookup.scala 33:37]
  wire  _T_164 = _T_121 | _T_163; // @[Lookup.scala 33:37]
  wire  _T_165 = _T_119 | _T_164; // @[Lookup.scala 33:37]
  wire  _T_166 = _T_117 | _T_165; // @[Lookup.scala 33:37]
  wire  _T_167 = _T_115 | _T_166; // @[Lookup.scala 33:37]
  wire  _T_168 = _T_113 | _T_167; // @[Lookup.scala 33:37]
  wire  _T_169 = _T_111 | _T_168; // @[Lookup.scala 33:37]
  wire  _T_170 = _T_109 | _T_169; // @[Lookup.scala 33:37]
  wire  _T_171 = _T_107 | _T_170; // @[Lookup.scala 33:37]
  wire  _T_172 = _T_105 | _T_171; // @[Lookup.scala 33:37]
  wire  _T_173 = _T_103 | _T_172; // @[Lookup.scala 33:37]
  wire  _T_174 = _T_101 | _T_173; // @[Lookup.scala 33:37]
  wire  _T_175 = _T_99 | _T_174; // @[Lookup.scala 33:37]
  wire  _T_176 = _T_97 | _T_175; // @[Lookup.scala 33:37]
  wire  _T_177 = _T_95 | _T_176; // @[Lookup.scala 33:37]
  wire  _T_178 = _T_93 | _T_177; // @[Lookup.scala 33:37]
  wire  _T_179 = _T_91 | _T_178; // @[Lookup.scala 33:37]
  wire  _T_180 = _T_89 | _T_179; // @[Lookup.scala 33:37]
  wire  _T_181 = _T_87 | _T_180; // @[Lookup.scala 33:37]
  wire  _T_182 = _T_85 | _T_181; // @[Lookup.scala 33:37]
  wire  _T_183 = _T_83 | _T_182; // @[Lookup.scala 33:37]
  wire  _T_184 = _T_81 | _T_183; // @[Lookup.scala 33:37]
  wire  _T_185 = _T_79 | _T_184; // @[Lookup.scala 33:37]
  wire  _T_186 = _T_77 | _T_185; // @[Lookup.scala 33:37]
  wire  _T_187 = _T_75 | _T_186; // @[Lookup.scala 33:37]
  wire  _T_188 = _T_73 | _T_187; // @[Lookup.scala 33:37]
  wire  _T_189 = _T_71 | _T_188; // @[Lookup.scala 33:37]
  wire  _T_190 = _T_69 | _T_189; // @[Lookup.scala 33:37]
  wire  _T_191 = _T_67 | _T_190; // @[Lookup.scala 33:37]
  wire  _T_192 = _T_65 | _T_191; // @[Lookup.scala 33:37]
  wire  _T_193 = _T_63 | _T_192; // @[Lookup.scala 33:37]
  wire  _T_194 = _T_61 | _T_193; // @[Lookup.scala 33:37]
  wire  _T_195 = _T_59 | _T_194; // @[Lookup.scala 33:37]
  wire  _T_196 = _T_57 | _T_195; // @[Lookup.scala 33:37]
  wire  _T_197 = _T_55 | _T_196; // @[Lookup.scala 33:37]
  wire  _T_198 = _T_53 | _T_197; // @[Lookup.scala 33:37]
  wire  _T_199 = _T_51 | _T_198; // @[Lookup.scala 33:37]
  wire  _T_200 = _T_49 | _T_199; // @[Lookup.scala 33:37]
  wire  _T_201 = _T_47 | _T_200; // @[Lookup.scala 33:37]
  wire  _T_202 = _T_45 | _T_201; // @[Lookup.scala 33:37]
  wire  _T_203 = _T_43 | _T_202; // @[Lookup.scala 33:37]
  wire  _T_204 = _T_41 | _T_203; // @[Lookup.scala 33:37]
  wire  _T_205 = _T_39 | _T_204; // @[Lookup.scala 33:37]
  wire  _T_206 = _T_37 | _T_205; // @[Lookup.scala 33:37]
  wire  _T_207 = _T_35 | _T_206; // @[Lookup.scala 33:37]
  wire  _T_208 = _T_33 | _T_207; // @[Lookup.scala 33:37]
  wire  _T_209 = _T_31 | _T_208; // @[Lookup.scala 33:37]
  wire  _T_210 = _T_29 | _T_209; // @[Lookup.scala 33:37]
  wire  _T_211 = _T_27 | _T_210; // @[Lookup.scala 33:37]
  wire  _T_212 = _T_25 | _T_211; // @[Lookup.scala 33:37]
  wire  _T_213 = _T_23 | _T_212; // @[Lookup.scala 33:37]
  wire  _T_214 = _T_21 | _T_213; // @[Lookup.scala 33:37]
  wire  _T_215 = _T_19 | _T_214; // @[Lookup.scala 33:37]
  wire  _T_216 = _T_17 | _T_215; // @[Lookup.scala 33:37]
  wire  _T_217 = _T_15 | _T_216; // @[Lookup.scala 33:37]
  wire  _T_218 = _T_13 | _T_217; // @[Lookup.scala 33:37]
  wire  _T_219 = _T_11 | _T_218; // @[Lookup.scala 33:37]
  wire  _T_220 = _T_9 | _T_219; // @[Lookup.scala 33:37]
  wire  _T_221 = _T_7 | _T_220; // @[Lookup.scala 33:37]
  wire  _T_222 = _T_5 | _T_221; // @[Lookup.scala 33:37]
  wire  _T_223 = _T_3 | _T_222; // @[Lookup.scala 33:37]
  wire  cs_valid_inst = _T_1 | _T_223; // @[Lookup.scala 33:37]
  wire [3:0] _T_250 = _T_97 ? 4'h2 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_251 = _T_95 ? 4'h4 : _T_250; // @[Lookup.scala 33:37]
  wire [3:0] _T_252 = _T_93 ? 4'h3 : _T_251; // @[Lookup.scala 33:37]
  wire [3:0] _T_253 = _T_91 ? 4'h6 : _T_252; // @[Lookup.scala 33:37]
  wire [3:0] _T_254 = _T_89 ? 4'h5 : _T_253; // @[Lookup.scala 33:37]
  wire [3:0] _T_255 = _T_87 ? 4'h1 : _T_254; // @[Lookup.scala 33:37]
  wire [3:0] _T_256 = _T_85 ? 4'h0 : _T_255; // @[Lookup.scala 33:37]
  wire [3:0] _T_257 = _T_83 ? 4'h0 : _T_256; // @[Lookup.scala 33:37]
  wire [3:0] _T_258 = _T_81 ? 4'h0 : _T_257; // @[Lookup.scala 33:37]
  wire [3:0] _T_259 = _T_79 ? 4'h0 : _T_258; // @[Lookup.scala 33:37]
  wire [3:0] _T_260 = _T_77 ? 4'h0 : _T_259; // @[Lookup.scala 33:37]
  wire [3:0] _T_261 = _T_75 ? 4'h0 : _T_260; // @[Lookup.scala 33:37]
  wire [3:0] _T_262 = _T_73 ? 4'h0 : _T_261; // @[Lookup.scala 33:37]
  wire [3:0] _T_263 = _T_71 ? 4'h0 : _T_262; // @[Lookup.scala 33:37]
  wire [3:0] _T_264 = _T_69 ? 4'h0 : _T_263; // @[Lookup.scala 33:37]
  wire [3:0] _T_265 = _T_67 ? 4'h0 : _T_264; // @[Lookup.scala 33:37]
  wire [3:0] _T_266 = _T_65 ? 4'h0 : _T_265; // @[Lookup.scala 33:37]
  wire [3:0] _T_267 = _T_63 ? 4'h0 : _T_266; // @[Lookup.scala 33:37]
  wire [3:0] _T_268 = _T_61 ? 4'h0 : _T_267; // @[Lookup.scala 33:37]
  wire [3:0] _T_269 = _T_59 ? 4'h0 : _T_268; // @[Lookup.scala 33:37]
  wire [3:0] _T_270 = _T_57 ? 4'h0 : _T_269; // @[Lookup.scala 33:37]
  wire [3:0] _T_271 = _T_55 ? 4'h0 : _T_270; // @[Lookup.scala 33:37]
  wire [3:0] _T_272 = _T_53 ? 4'h0 : _T_271; // @[Lookup.scala 33:37]
  wire [3:0] _T_273 = _T_51 ? 4'h0 : _T_272; // @[Lookup.scala 33:37]
  wire [3:0] _T_274 = _T_49 ? 4'h0 : _T_273; // @[Lookup.scala 33:37]
  wire [3:0] _T_275 = _T_47 ? 4'h0 : _T_274; // @[Lookup.scala 33:37]
  wire [3:0] _T_276 = _T_45 ? 4'h0 : _T_275; // @[Lookup.scala 33:37]
  wire [3:0] _T_277 = _T_43 ? 4'h0 : _T_276; // @[Lookup.scala 33:37]
  wire [3:0] _T_278 = _T_41 ? 4'h0 : _T_277; // @[Lookup.scala 33:37]
  wire [3:0] _T_279 = _T_39 ? 4'h0 : _T_278; // @[Lookup.scala 33:37]
  wire [3:0] _T_280 = _T_37 ? 4'h0 : _T_279; // @[Lookup.scala 33:37]
  wire [3:0] _T_281 = _T_35 ? 4'h0 : _T_280; // @[Lookup.scala 33:37]
  wire [3:0] _T_282 = _T_33 ? 4'h0 : _T_281; // @[Lookup.scala 33:37]
  wire [3:0] _T_283 = _T_31 ? 4'h0 : _T_282; // @[Lookup.scala 33:37]
  wire [3:0] _T_284 = _T_29 ? 4'h0 : _T_283; // @[Lookup.scala 33:37]
  wire [3:0] _T_285 = _T_27 ? 4'h0 : _T_284; // @[Lookup.scala 33:37]
  wire [3:0] _T_286 = _T_25 ? 4'h0 : _T_285; // @[Lookup.scala 33:37]
  wire [3:0] _T_287 = _T_23 ? 4'h0 : _T_286; // @[Lookup.scala 33:37]
  wire [3:0] _T_288 = _T_21 ? 4'h0 : _T_287; // @[Lookup.scala 33:37]
  wire [3:0] _T_289 = _T_19 ? 4'h0 : _T_288; // @[Lookup.scala 33:37]
  wire [3:0] _T_290 = _T_17 ? 4'h0 : _T_289; // @[Lookup.scala 33:37]
  wire [3:0] _T_291 = _T_15 ? 4'h0 : _T_290; // @[Lookup.scala 33:37]
  wire [3:0] _T_292 = _T_13 ? 4'h0 : _T_291; // @[Lookup.scala 33:37]
  wire [3:0] _T_293 = _T_11 ? 4'h0 : _T_292; // @[Lookup.scala 33:37]
  wire [3:0] _T_294 = _T_9 ? 4'h0 : _T_293; // @[Lookup.scala 33:37]
  wire [3:0] _T_295 = _T_7 ? 4'h0 : _T_294; // @[Lookup.scala 33:37]
  wire [3:0] _T_296 = _T_5 ? 4'h0 : _T_295; // @[Lookup.scala 33:37]
  wire [3:0] _T_297 = _T_3 ? 4'h8 : _T_296; // @[Lookup.scala 33:37]
  wire [3:0] cs_branch = _T_1 ? 4'h7 : _T_297; // @[Lookup.scala 33:37]
  wire [1:0] _T_318 = _T_109 ? 2'h1 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _T_319 = _T_107 ? 2'h0 : _T_318; // @[Lookup.scala 33:37]
  wire [1:0] _T_320 = _T_105 ? 2'h1 : _T_319; // @[Lookup.scala 33:37]
  wire [1:0] _T_321 = _T_103 ? 2'h0 : _T_320; // @[Lookup.scala 33:37]
  wire [1:0] _T_322 = _T_101 ? 2'h1 : _T_321; // @[Lookup.scala 33:37]
  wire [1:0] _T_323 = _T_99 ? 2'h0 : _T_322; // @[Lookup.scala 33:37]
  wire [1:0] _T_324 = _T_97 ? 2'h0 : _T_323; // @[Lookup.scala 33:37]
  wire [1:0] _T_325 = _T_95 ? 2'h0 : _T_324; // @[Lookup.scala 33:37]
  wire [1:0] _T_326 = _T_93 ? 2'h0 : _T_325; // @[Lookup.scala 33:37]
  wire [1:0] _T_327 = _T_91 ? 2'h0 : _T_326; // @[Lookup.scala 33:37]
  wire [1:0] _T_328 = _T_89 ? 2'h0 : _T_327; // @[Lookup.scala 33:37]
  wire [1:0] _T_329 = _T_87 ? 2'h0 : _T_328; // @[Lookup.scala 33:37]
  wire [1:0] _T_330 = _T_85 ? 2'h0 : _T_329; // @[Lookup.scala 33:37]
  wire [1:0] _T_331 = _T_83 ? 2'h0 : _T_330; // @[Lookup.scala 33:37]
  wire [1:0] _T_332 = _T_81 ? 2'h0 : _T_331; // @[Lookup.scala 33:37]
  wire [1:0] _T_333 = _T_79 ? 2'h0 : _T_332; // @[Lookup.scala 33:37]
  wire [1:0] _T_334 = _T_77 ? 2'h0 : _T_333; // @[Lookup.scala 33:37]
  wire [1:0] _T_335 = _T_75 ? 2'h0 : _T_334; // @[Lookup.scala 33:37]
  wire [1:0] _T_336 = _T_73 ? 2'h0 : _T_335; // @[Lookup.scala 33:37]
  wire [1:0] _T_337 = _T_71 ? 2'h0 : _T_336; // @[Lookup.scala 33:37]
  wire [1:0] _T_338 = _T_69 ? 2'h0 : _T_337; // @[Lookup.scala 33:37]
  wire [1:0] _T_339 = _T_67 ? 2'h0 : _T_338; // @[Lookup.scala 33:37]
  wire [1:0] _T_340 = _T_65 ? 2'h0 : _T_339; // @[Lookup.scala 33:37]
  wire [1:0] _T_341 = _T_63 ? 2'h0 : _T_340; // @[Lookup.scala 33:37]
  wire [1:0] _T_342 = _T_61 ? 2'h0 : _T_341; // @[Lookup.scala 33:37]
  wire [1:0] _T_343 = _T_59 ? 2'h0 : _T_342; // @[Lookup.scala 33:37]
  wire [1:0] _T_344 = _T_57 ? 2'h0 : _T_343; // @[Lookup.scala 33:37]
  wire [1:0] _T_345 = _T_55 ? 2'h0 : _T_344; // @[Lookup.scala 33:37]
  wire [1:0] _T_346 = _T_53 ? 2'h0 : _T_345; // @[Lookup.scala 33:37]
  wire [1:0] _T_347 = _T_51 ? 2'h0 : _T_346; // @[Lookup.scala 33:37]
  wire [1:0] _T_348 = _T_49 ? 2'h0 : _T_347; // @[Lookup.scala 33:37]
  wire [1:0] _T_349 = _T_47 ? 2'h0 : _T_348; // @[Lookup.scala 33:37]
  wire [1:0] _T_350 = _T_45 ? 2'h0 : _T_349; // @[Lookup.scala 33:37]
  wire [1:0] _T_351 = _T_43 ? 2'h0 : _T_350; // @[Lookup.scala 33:37]
  wire [1:0] _T_352 = _T_41 ? 2'h0 : _T_351; // @[Lookup.scala 33:37]
  wire [1:0] _T_353 = _T_39 ? 2'h0 : _T_352; // @[Lookup.scala 33:37]
  wire [1:0] _T_354 = _T_37 ? 2'h0 : _T_353; // @[Lookup.scala 33:37]
  wire [1:0] _T_355 = _T_35 ? 2'h0 : _T_354; // @[Lookup.scala 33:37]
  wire [1:0] _T_356 = _T_33 ? 2'h0 : _T_355; // @[Lookup.scala 33:37]
  wire [1:0] _T_357 = _T_31 ? 2'h0 : _T_356; // @[Lookup.scala 33:37]
  wire [1:0] _T_358 = _T_29 ? 2'h0 : _T_357; // @[Lookup.scala 33:37]
  wire [1:0] _T_359 = _T_27 ? 2'h0 : _T_358; // @[Lookup.scala 33:37]
  wire [1:0] _T_360 = _T_25 ? 2'h0 : _T_359; // @[Lookup.scala 33:37]
  wire [1:0] _T_361 = _T_23 ? 2'h0 : _T_360; // @[Lookup.scala 33:37]
  wire [1:0] _T_362 = _T_21 ? 2'h2 : _T_361; // @[Lookup.scala 33:37]
  wire [1:0] _T_363 = _T_19 ? 2'h2 : _T_362; // @[Lookup.scala 33:37]
  wire [1:0] _T_364 = _T_17 ? 2'h0 : _T_363; // @[Lookup.scala 33:37]
  wire [1:0] _T_365 = _T_15 ? 2'h0 : _T_364; // @[Lookup.scala 33:37]
  wire [1:0] _T_366 = _T_13 ? 2'h0 : _T_365; // @[Lookup.scala 33:37]
  wire [1:0] _T_367 = _T_11 ? 2'h0 : _T_366; // @[Lookup.scala 33:37]
  wire [1:0] _T_368 = _T_9 ? 2'h0 : _T_367; // @[Lookup.scala 33:37]
  wire [1:0] _T_369 = _T_7 ? 2'h0 : _T_368; // @[Lookup.scala 33:37]
  wire [1:0] _T_370 = _T_5 ? 2'h0 : _T_369; // @[Lookup.scala 33:37]
  wire [1:0] _T_371 = _T_3 ? 2'h0 : _T_370; // @[Lookup.scala 33:37]
  wire [1:0] _T_404 = _T_85 ? 2'h3 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _T_405 = _T_83 ? 2'h3 : _T_404; // @[Lookup.scala 33:37]
  wire [1:0] _T_406 = _T_81 ? 2'h3 : _T_405; // @[Lookup.scala 33:37]
  wire [1:0] _T_407 = _T_79 ? 2'h3 : _T_406; // @[Lookup.scala 33:37]
  wire [1:0] _T_408 = _T_77 ? 2'h2 : _T_407; // @[Lookup.scala 33:37]
  wire [1:0] _T_409 = _T_75 ? 2'h0 : _T_408; // @[Lookup.scala 33:37]
  wire [1:0] _T_410 = _T_73 ? 2'h0 : _T_409; // @[Lookup.scala 33:37]
  wire [1:0] _T_411 = _T_71 ? 2'h2 : _T_410; // @[Lookup.scala 33:37]
  wire [1:0] _T_412 = _T_69 ? 2'h2 : _T_411; // @[Lookup.scala 33:37]
  wire [1:0] _T_413 = _T_67 ? 2'h0 : _T_412; // @[Lookup.scala 33:37]
  wire [1:0] _T_414 = _T_65 ? 2'h2 : _T_413; // @[Lookup.scala 33:37]
  wire [1:0] _T_415 = _T_63 ? 2'h0 : _T_414; // @[Lookup.scala 33:37]
  wire [1:0] _T_416 = _T_61 ? 2'h2 : _T_415; // @[Lookup.scala 33:37]
  wire [1:0] _T_417 = _T_59 ? 2'h0 : _T_416; // @[Lookup.scala 33:37]
  wire [1:0] _T_418 = _T_57 ? 2'h0 : _T_417; // @[Lookup.scala 33:37]
  wire [1:0] _T_419 = _T_55 ? 2'h0 : _T_418; // @[Lookup.scala 33:37]
  wire [1:0] _T_420 = _T_53 ? 2'h0 : _T_419; // @[Lookup.scala 33:37]
  wire [1:0] _T_421 = _T_51 ? 2'h2 : _T_420; // @[Lookup.scala 33:37]
  wire [1:0] _T_422 = _T_49 ? 2'h2 : _T_421; // @[Lookup.scala 33:37]
  wire [1:0] _T_423 = _T_47 ? 2'h0 : _T_422; // @[Lookup.scala 33:37]
  wire [1:0] _T_424 = _T_45 ? 2'h0 : _T_423; // @[Lookup.scala 33:37]
  wire [1:0] _T_425 = _T_43 ? 2'h2 : _T_424; // @[Lookup.scala 33:37]
  wire [1:0] _T_426 = _T_41 ? 2'h2 : _T_425; // @[Lookup.scala 33:37]
  wire [1:0] _T_427 = _T_39 ? 2'h0 : _T_426; // @[Lookup.scala 33:37]
  wire [1:0] _T_428 = _T_37 ? 2'h0 : _T_427; // @[Lookup.scala 33:37]
  wire [1:0] _T_429 = _T_35 ? 2'h2 : _T_428; // @[Lookup.scala 33:37]
  wire [1:0] _T_430 = _T_33 ? 2'h2 : _T_429; // @[Lookup.scala 33:37]
  wire [1:0] _T_431 = _T_31 ? 2'h0 : _T_430; // @[Lookup.scala 33:37]
  wire [1:0] _T_432 = _T_29 ? 2'h0 : _T_431; // @[Lookup.scala 33:37]
  wire [1:0] _T_433 = _T_27 ? 2'h2 : _T_432; // @[Lookup.scala 33:37]
  wire [1:0] _T_434 = _T_25 ? 2'h2 : _T_433; // @[Lookup.scala 33:37]
  wire [1:0] _T_435 = _T_23 ? 2'h0 : _T_434; // @[Lookup.scala 33:37]
  wire [1:0] _T_436 = _T_21 ? 2'h1 : _T_435; // @[Lookup.scala 33:37]
  wire [1:0] _T_437 = _T_19 ? 2'h0 : _T_436; // @[Lookup.scala 33:37]
  wire [1:0] _T_438 = _T_17 ? 2'h2 : _T_437; // @[Lookup.scala 33:37]
  wire [1:0] _T_439 = _T_15 ? 2'h2 : _T_438; // @[Lookup.scala 33:37]
  wire [1:0] _T_440 = _T_13 ? 2'h2 : _T_439; // @[Lookup.scala 33:37]
  wire [1:0] _T_441 = _T_11 ? 2'h2 : _T_440; // @[Lookup.scala 33:37]
  wire [1:0] _T_442 = _T_9 ? 2'h2 : _T_441; // @[Lookup.scala 33:37]
  wire [1:0] _T_443 = _T_7 ? 2'h2 : _T_442; // @[Lookup.scala 33:37]
  wire [1:0] _T_444 = _T_5 ? 2'h2 : _T_443; // @[Lookup.scala 33:37]
  wire [1:0] _T_445 = _T_3 ? 2'h0 : _T_444; // @[Lookup.scala 33:37]
  wire [4:0] _T_446 = _T_149 ? 5'h18 : 5'h0; // @[Lookup.scala 33:37]
  wire [4:0] _T_447 = _T_147 ? 5'h17 : _T_446; // @[Lookup.scala 33:37]
  wire [4:0] _T_448 = _T_145 ? 5'h16 : _T_447; // @[Lookup.scala 33:37]
  wire [4:0] _T_449 = _T_143 ? 5'h15 : _T_448; // @[Lookup.scala 33:37]
  wire [4:0] _T_450 = _T_141 ? 5'h14 : _T_449; // @[Lookup.scala 33:37]
  wire [4:0] _T_451 = _T_139 ? 5'h13 : _T_450; // @[Lookup.scala 33:37]
  wire [4:0] _T_452 = _T_137 ? 5'h12 : _T_451; // @[Lookup.scala 33:37]
  wire [4:0] _T_453 = _T_135 ? 5'h11 : _T_452; // @[Lookup.scala 33:37]
  wire [4:0] _T_454 = _T_133 ? 5'hd : _T_453; // @[Lookup.scala 33:37]
  wire [4:0] _T_455 = _T_131 ? 5'h10 : _T_454; // @[Lookup.scala 33:37]
  wire [4:0] _T_456 = _T_129 ? 5'hf : _T_455; // @[Lookup.scala 33:37]
  wire [4:0] _T_457 = _T_127 ? 5'he : _T_456; // @[Lookup.scala 33:37]
  wire [4:0] _T_458 = _T_125 ? 5'hd : _T_457; // @[Lookup.scala 33:37]
  wire [4:0] _T_459 = _T_123 ? 5'h0 : _T_458; // @[Lookup.scala 33:37]
  wire [4:0] _T_460 = _T_121 ? 5'h0 : _T_459; // @[Lookup.scala 33:37]
  wire [4:0] _T_461 = _T_119 ? 5'h0 : _T_460; // @[Lookup.scala 33:37]
  wire [4:0] _T_462 = _T_117 ? 5'h0 : _T_461; // @[Lookup.scala 33:37]
  wire [4:0] _T_463 = _T_115 ? 5'h0 : _T_462; // @[Lookup.scala 33:37]
  wire [4:0] _T_464 = _T_113 ? 5'h0 : _T_463; // @[Lookup.scala 33:37]
  wire [4:0] _T_465 = _T_111 ? 5'h0 : _T_464; // @[Lookup.scala 33:37]
  wire [4:0] _T_466 = _T_109 ? 5'hc : _T_465; // @[Lookup.scala 33:37]
  wire [4:0] _T_467 = _T_107 ? 5'hc : _T_466; // @[Lookup.scala 33:37]
  wire [4:0] _T_468 = _T_105 ? 5'hc : _T_467; // @[Lookup.scala 33:37]
  wire [4:0] _T_469 = _T_103 ? 5'hc : _T_468; // @[Lookup.scala 33:37]
  wire [4:0] _T_470 = _T_101 ? 5'hc : _T_469; // @[Lookup.scala 33:37]
  wire [4:0] _T_471 = _T_99 ? 5'hc : _T_470; // @[Lookup.scala 33:37]
  wire [4:0] _T_472 = _T_97 ? 5'h0 : _T_471; // @[Lookup.scala 33:37]
  wire [4:0] _T_473 = _T_95 ? 5'h0 : _T_472; // @[Lookup.scala 33:37]
  wire [4:0] _T_474 = _T_93 ? 5'h0 : _T_473; // @[Lookup.scala 33:37]
  wire [4:0] _T_475 = _T_91 ? 5'h0 : _T_474; // @[Lookup.scala 33:37]
  wire [4:0] _T_476 = _T_89 ? 5'h0 : _T_475; // @[Lookup.scala 33:37]
  wire [4:0] _T_477 = _T_87 ? 5'h0 : _T_476; // @[Lookup.scala 33:37]
  wire [4:0] _T_478 = _T_85 ? 5'h0 : _T_477; // @[Lookup.scala 33:37]
  wire [4:0] _T_479 = _T_83 ? 5'h0 : _T_478; // @[Lookup.scala 33:37]
  wire [4:0] _T_480 = _T_81 ? 5'h0 : _T_479; // @[Lookup.scala 33:37]
  wire [4:0] _T_481 = _T_79 ? 5'h0 : _T_480; // @[Lookup.scala 33:37]
  wire [4:0] _T_482 = _T_77 ? 5'h2 : _T_481; // @[Lookup.scala 33:37]
  wire [4:0] _T_483 = _T_75 ? 5'h2 : _T_482; // @[Lookup.scala 33:37]
  wire [4:0] _T_484 = _T_73 ? 5'h0 : _T_483; // @[Lookup.scala 33:37]
  wire [4:0] _T_485 = _T_71 ? 5'h0 : _T_484; // @[Lookup.scala 33:37]
  wire [4:0] _T_486 = _T_69 ? 5'h0 : _T_485; // @[Lookup.scala 33:37]
  wire [4:0] _T_487 = _T_67 ? 5'h0 : _T_486; // @[Lookup.scala 33:37]
  wire [4:0] _T_488 = _T_65 ? 5'h3 : _T_487; // @[Lookup.scala 33:37]
  wire [4:0] _T_489 = _T_63 ? 5'h3 : _T_488; // @[Lookup.scala 33:37]
  wire [4:0] _T_490 = _T_61 ? 5'h4 : _T_489; // @[Lookup.scala 33:37]
  wire [4:0] _T_491 = _T_59 ? 5'h4 : _T_490; // @[Lookup.scala 33:37]
  wire [4:0] _T_492 = _T_57 ? 5'h1 : _T_491; // @[Lookup.scala 33:37]
  wire [4:0] _T_493 = _T_55 ? 5'h1 : _T_492; // @[Lookup.scala 33:37]
  wire [4:0] _T_494 = _T_53 ? 5'hb : _T_493; // @[Lookup.scala 33:37]
  wire [4:0] _T_495 = _T_51 ? 5'hb : _T_494; // @[Lookup.scala 33:37]
  wire [4:0] _T_496 = _T_49 ? 5'ha : _T_495; // @[Lookup.scala 33:37]
  wire [4:0] _T_497 = _T_47 ? 5'ha : _T_496; // @[Lookup.scala 33:37]
  wire [4:0] _T_498 = _T_45 ? 5'h9 : _T_497; // @[Lookup.scala 33:37]
  wire [4:0] _T_499 = _T_43 ? 5'h9 : _T_498; // @[Lookup.scala 33:37]
  wire [4:0] _T_500 = _T_41 ? 5'h8 : _T_499; // @[Lookup.scala 33:37]
  wire [4:0] _T_501 = _T_39 ? 5'h8 : _T_500; // @[Lookup.scala 33:37]
  wire [4:0] _T_502 = _T_37 ? 5'h7 : _T_501; // @[Lookup.scala 33:37]
  wire [4:0] _T_503 = _T_35 ? 5'h7 : _T_502; // @[Lookup.scala 33:37]
  wire [4:0] _T_504 = _T_33 ? 5'h6 : _T_503; // @[Lookup.scala 33:37]
  wire [4:0] _T_505 = _T_31 ? 5'h6 : _T_504; // @[Lookup.scala 33:37]
  wire [4:0] _T_506 = _T_29 ? 5'h5 : _T_505; // @[Lookup.scala 33:37]
  wire [4:0] _T_507 = _T_27 ? 5'h5 : _T_506; // @[Lookup.scala 33:37]
  wire [4:0] _T_508 = _T_25 ? 5'h5 : _T_507; // @[Lookup.scala 33:37]
  wire [4:0] _T_509 = _T_23 ? 5'h5 : _T_508; // @[Lookup.scala 33:37]
  wire [4:0] _T_510 = _T_21 ? 5'h0 : _T_509; // @[Lookup.scala 33:37]
  wire [4:0] _T_511 = _T_19 ? 5'hc : _T_510; // @[Lookup.scala 33:37]
  wire [4:0] _T_512 = _T_17 ? 5'h0 : _T_511; // @[Lookup.scala 33:37]
  wire [4:0] _T_513 = _T_15 ? 5'h0 : _T_512; // @[Lookup.scala 33:37]
  wire [4:0] _T_514 = _T_13 ? 5'h0 : _T_513; // @[Lookup.scala 33:37]
  wire [4:0] _T_515 = _T_11 ? 5'h0 : _T_514; // @[Lookup.scala 33:37]
  wire [4:0] _T_516 = _T_9 ? 5'h0 : _T_515; // @[Lookup.scala 33:37]
  wire [4:0] _T_517 = _T_7 ? 5'h0 : _T_516; // @[Lookup.scala 33:37]
  wire [4:0] _T_518 = _T_5 ? 5'h0 : _T_517; // @[Lookup.scala 33:37]
  wire [4:0] _T_519 = _T_3 ? 5'h0 : _T_518; // @[Lookup.scala 33:37]
  wire  _T_533 = _T_123 ? 1'h0 : _T_162; // @[Lookup.scala 33:37]
  wire  _T_534 = _T_121 ? 1'h0 : _T_533; // @[Lookup.scala 33:37]
  wire  _T_535 = _T_119 ? 1'h0 : _T_534; // @[Lookup.scala 33:37]
  wire  _T_536 = _T_117 ? 1'h0 : _T_535; // @[Lookup.scala 33:37]
  wire  _T_537 = _T_115 ? 1'h0 : _T_536; // @[Lookup.scala 33:37]
  wire  _T_538 = _T_113 ? 1'h0 : _T_537; // @[Lookup.scala 33:37]
  wire  _T_539 = _T_111 ? 1'h0 : _T_538; // @[Lookup.scala 33:37]
  wire  _T_540 = _T_109 | _T_539; // @[Lookup.scala 33:37]
  wire  _T_541 = _T_107 | _T_540; // @[Lookup.scala 33:37]
  wire  _T_542 = _T_105 | _T_541; // @[Lookup.scala 33:37]
  wire  _T_543 = _T_103 | _T_542; // @[Lookup.scala 33:37]
  wire  _T_544 = _T_101 | _T_543; // @[Lookup.scala 33:37]
  wire  _T_545 = _T_99 | _T_544; // @[Lookup.scala 33:37]
  wire  _T_546 = _T_97 ? 1'h0 : _T_545; // @[Lookup.scala 33:37]
  wire  _T_547 = _T_95 ? 1'h0 : _T_546; // @[Lookup.scala 33:37]
  wire  _T_548 = _T_93 ? 1'h0 : _T_547; // @[Lookup.scala 33:37]
  wire  _T_549 = _T_91 ? 1'h0 : _T_548; // @[Lookup.scala 33:37]
  wire  _T_550 = _T_89 ? 1'h0 : _T_549; // @[Lookup.scala 33:37]
  wire  _T_551 = _T_87 ? 1'h0 : _T_550; // @[Lookup.scala 33:37]
  wire  _T_552 = _T_85 ? 1'h0 : _T_551; // @[Lookup.scala 33:37]
  wire  _T_553 = _T_83 ? 1'h0 : _T_552; // @[Lookup.scala 33:37]
  wire  _T_554 = _T_81 ? 1'h0 : _T_553; // @[Lookup.scala 33:37]
  wire  _T_555 = _T_79 ? 1'h0 : _T_554; // @[Lookup.scala 33:37]
  wire  _T_556 = _T_77 | _T_555; // @[Lookup.scala 33:37]
  wire  _T_557 = _T_75 | _T_556; // @[Lookup.scala 33:37]
  wire  _T_558 = _T_73 | _T_557; // @[Lookup.scala 33:37]
  wire  _T_559 = _T_71 | _T_558; // @[Lookup.scala 33:37]
  wire  _T_560 = _T_69 | _T_559; // @[Lookup.scala 33:37]
  wire  _T_561 = _T_67 | _T_560; // @[Lookup.scala 33:37]
  wire  _T_562 = _T_65 | _T_561; // @[Lookup.scala 33:37]
  wire  _T_563 = _T_63 | _T_562; // @[Lookup.scala 33:37]
  wire  _T_564 = _T_61 | _T_563; // @[Lookup.scala 33:37]
  wire  _T_565 = _T_59 | _T_564; // @[Lookup.scala 33:37]
  wire  _T_566 = _T_57 | _T_565; // @[Lookup.scala 33:37]
  wire  _T_567 = _T_55 | _T_566; // @[Lookup.scala 33:37]
  wire  _T_568 = _T_53 | _T_567; // @[Lookup.scala 33:37]
  wire  _T_569 = _T_51 | _T_568; // @[Lookup.scala 33:37]
  wire  _T_570 = _T_49 | _T_569; // @[Lookup.scala 33:37]
  wire  _T_571 = _T_47 | _T_570; // @[Lookup.scala 33:37]
  wire  _T_572 = _T_45 | _T_571; // @[Lookup.scala 33:37]
  wire  _T_573 = _T_43 | _T_572; // @[Lookup.scala 33:37]
  wire  _T_574 = _T_41 | _T_573; // @[Lookup.scala 33:37]
  wire  _T_575 = _T_39 | _T_574; // @[Lookup.scala 33:37]
  wire  _T_576 = _T_37 | _T_575; // @[Lookup.scala 33:37]
  wire  _T_577 = _T_35 | _T_576; // @[Lookup.scala 33:37]
  wire  _T_578 = _T_33 | _T_577; // @[Lookup.scala 33:37]
  wire  _T_579 = _T_31 | _T_578; // @[Lookup.scala 33:37]
  wire  _T_580 = _T_29 | _T_579; // @[Lookup.scala 33:37]
  wire  _T_581 = _T_27 | _T_580; // @[Lookup.scala 33:37]
  wire  _T_582 = _T_25 | _T_581; // @[Lookup.scala 33:37]
  wire  _T_583 = _T_23 | _T_582; // @[Lookup.scala 33:37]
  wire  _T_584 = _T_21 | _T_583; // @[Lookup.scala 33:37]
  wire  _T_585 = _T_19 | _T_584; // @[Lookup.scala 33:37]
  wire  _T_586 = _T_17 | _T_585; // @[Lookup.scala 33:37]
  wire  _T_587 = _T_15 | _T_586; // @[Lookup.scala 33:37]
  wire  _T_588 = _T_13 | _T_587; // @[Lookup.scala 33:37]
  wire  _T_589 = _T_11 | _T_588; // @[Lookup.scala 33:37]
  wire  _T_590 = _T_9 | _T_589; // @[Lookup.scala 33:37]
  wire  _T_591 = _T_7 | _T_590; // @[Lookup.scala 33:37]
  wire  _T_592 = _T_5 | _T_591; // @[Lookup.scala 33:37]
  wire  _T_593 = _T_3 | _T_592; // @[Lookup.scala 33:37]
  wire  _T_627 = _T_83 | _T_85; // @[Lookup.scala 33:37]
  wire  _T_628 = _T_81 | _T_627; // @[Lookup.scala 33:37]
  wire  _T_629 = _T_79 | _T_628; // @[Lookup.scala 33:37]
  wire  _T_630 = _T_77 ? 1'h0 : _T_629; // @[Lookup.scala 33:37]
  wire  _T_631 = _T_75 ? 1'h0 : _T_630; // @[Lookup.scala 33:37]
  wire  _T_632 = _T_73 ? 1'h0 : _T_631; // @[Lookup.scala 33:37]
  wire  _T_633 = _T_71 ? 1'h0 : _T_632; // @[Lookup.scala 33:37]
  wire  _T_634 = _T_69 ? 1'h0 : _T_633; // @[Lookup.scala 33:37]
  wire  _T_635 = _T_67 ? 1'h0 : _T_634; // @[Lookup.scala 33:37]
  wire  _T_636 = _T_65 ? 1'h0 : _T_635; // @[Lookup.scala 33:37]
  wire  _T_637 = _T_63 ? 1'h0 : _T_636; // @[Lookup.scala 33:37]
  wire  _T_638 = _T_61 ? 1'h0 : _T_637; // @[Lookup.scala 33:37]
  wire  _T_639 = _T_59 ? 1'h0 : _T_638; // @[Lookup.scala 33:37]
  wire  _T_640 = _T_57 ? 1'h0 : _T_639; // @[Lookup.scala 33:37]
  wire  _T_641 = _T_55 ? 1'h0 : _T_640; // @[Lookup.scala 33:37]
  wire  _T_642 = _T_53 ? 1'h0 : _T_641; // @[Lookup.scala 33:37]
  wire  _T_643 = _T_51 ? 1'h0 : _T_642; // @[Lookup.scala 33:37]
  wire  _T_644 = _T_49 ? 1'h0 : _T_643; // @[Lookup.scala 33:37]
  wire  _T_645 = _T_47 ? 1'h0 : _T_644; // @[Lookup.scala 33:37]
  wire  _T_646 = _T_45 ? 1'h0 : _T_645; // @[Lookup.scala 33:37]
  wire  _T_647 = _T_43 ? 1'h0 : _T_646; // @[Lookup.scala 33:37]
  wire  _T_648 = _T_41 ? 1'h0 : _T_647; // @[Lookup.scala 33:37]
  wire  _T_649 = _T_39 ? 1'h0 : _T_648; // @[Lookup.scala 33:37]
  wire  _T_650 = _T_37 ? 1'h0 : _T_649; // @[Lookup.scala 33:37]
  wire  _T_651 = _T_35 ? 1'h0 : _T_650; // @[Lookup.scala 33:37]
  wire  _T_652 = _T_33 ? 1'h0 : _T_651; // @[Lookup.scala 33:37]
  wire  _T_653 = _T_31 ? 1'h0 : _T_652; // @[Lookup.scala 33:37]
  wire  _T_654 = _T_29 ? 1'h0 : _T_653; // @[Lookup.scala 33:37]
  wire  _T_655 = _T_27 ? 1'h0 : _T_654; // @[Lookup.scala 33:37]
  wire  _T_656 = _T_25 ? 1'h0 : _T_655; // @[Lookup.scala 33:37]
  wire  _T_657 = _T_23 ? 1'h0 : _T_656; // @[Lookup.scala 33:37]
  wire  _T_658 = _T_21 ? 1'h0 : _T_657; // @[Lookup.scala 33:37]
  wire  _T_659 = _T_19 ? 1'h0 : _T_658; // @[Lookup.scala 33:37]
  wire  _T_660 = _T_17 | _T_659; // @[Lookup.scala 33:37]
  wire  _T_661 = _T_15 | _T_660; // @[Lookup.scala 33:37]
  wire  _T_662 = _T_13 | _T_661; // @[Lookup.scala 33:37]
  wire  _T_663 = _T_11 | _T_662; // @[Lookup.scala 33:37]
  wire  _T_664 = _T_9 | _T_663; // @[Lookup.scala 33:37]
  wire  _T_665 = _T_7 | _T_664; // @[Lookup.scala 33:37]
  wire  _T_666 = _T_5 | _T_665; // @[Lookup.scala 33:37]
  wire  _T_667 = _T_3 ? 1'h0 : _T_666; // @[Lookup.scala 33:37]
  wire  cs_mem_valid = _T_1 ? 1'h0 : _T_667; // @[Lookup.scala 33:37]
  wire [2:0] _T_734 = _T_17 ? 3'h5 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_735 = _T_15 ? 3'h4 : _T_734; // @[Lookup.scala 33:37]
  wire [2:0] _T_736 = _T_13 ? 3'h3 : _T_735; // @[Lookup.scala 33:37]
  wire [2:0] _T_737 = _T_11 ? 3'h2 : _T_736; // @[Lookup.scala 33:37]
  wire [2:0] _T_738 = _T_9 ? 3'h6 : _T_737; // @[Lookup.scala 33:37]
  wire [2:0] _T_739 = _T_7 ? 3'h1 : _T_738; // @[Lookup.scala 33:37]
  wire [2:0] _T_740 = _T_5 ? 3'h0 : _T_739; // @[Lookup.scala 33:37]
  wire [2:0] _T_741 = _T_3 ? 3'h0 : _T_740; // @[Lookup.scala 33:37]
  wire [7:0] _T_774 = _T_85 ? 8'hf : 8'h1; // @[Lookup.scala 33:37]
  wire [7:0] _T_775 = _T_83 ? 8'h3 : _T_774; // @[Lookup.scala 33:37]
  wire [7:0] _T_776 = _T_81 ? 8'hff : _T_775; // @[Lookup.scala 33:37]
  wire [7:0] _T_777 = _T_79 ? 8'h1 : _T_776; // @[Lookup.scala 33:37]
  wire [7:0] _T_778 = _T_77 ? 8'h1 : _T_777; // @[Lookup.scala 33:37]
  wire [7:0] _T_779 = _T_75 ? 8'h1 : _T_778; // @[Lookup.scala 33:37]
  wire [7:0] _T_780 = _T_73 ? 8'h1 : _T_779; // @[Lookup.scala 33:37]
  wire [7:0] _T_781 = _T_71 ? 8'h1 : _T_780; // @[Lookup.scala 33:37]
  wire [7:0] _T_782 = _T_69 ? 8'h1 : _T_781; // @[Lookup.scala 33:37]
  wire [7:0] _T_783 = _T_67 ? 8'h1 : _T_782; // @[Lookup.scala 33:37]
  wire [7:0] _T_784 = _T_65 ? 8'h1 : _T_783; // @[Lookup.scala 33:37]
  wire [7:0] _T_785 = _T_63 ? 8'h1 : _T_784; // @[Lookup.scala 33:37]
  wire [7:0] _T_786 = _T_61 ? 8'h1 : _T_785; // @[Lookup.scala 33:37]
  wire [7:0] _T_787 = _T_59 ? 8'h1 : _T_786; // @[Lookup.scala 33:37]
  wire [7:0] _T_788 = _T_57 ? 8'h1 : _T_787; // @[Lookup.scala 33:37]
  wire [7:0] _T_789 = _T_55 ? 8'h1 : _T_788; // @[Lookup.scala 33:37]
  wire [7:0] _T_790 = _T_53 ? 8'h1 : _T_789; // @[Lookup.scala 33:37]
  wire [7:0] _T_791 = _T_51 ? 8'h1 : _T_790; // @[Lookup.scala 33:37]
  wire [7:0] _T_792 = _T_49 ? 8'h1 : _T_791; // @[Lookup.scala 33:37]
  wire [7:0] _T_793 = _T_47 ? 8'h1 : _T_792; // @[Lookup.scala 33:37]
  wire [7:0] _T_794 = _T_45 ? 8'h1 : _T_793; // @[Lookup.scala 33:37]
  wire [7:0] _T_795 = _T_43 ? 8'h1 : _T_794; // @[Lookup.scala 33:37]
  wire [7:0] _T_796 = _T_41 ? 8'h1 : _T_795; // @[Lookup.scala 33:37]
  wire [7:0] _T_797 = _T_39 ? 8'h1 : _T_796; // @[Lookup.scala 33:37]
  wire [7:0] _T_798 = _T_37 ? 8'h1 : _T_797; // @[Lookup.scala 33:37]
  wire [7:0] _T_799 = _T_35 ? 8'h1 : _T_798; // @[Lookup.scala 33:37]
  wire [7:0] _T_800 = _T_33 ? 8'h1 : _T_799; // @[Lookup.scala 33:37]
  wire [7:0] _T_801 = _T_31 ? 8'h1 : _T_800; // @[Lookup.scala 33:37]
  wire [7:0] _T_802 = _T_29 ? 8'h1 : _T_801; // @[Lookup.scala 33:37]
  wire [7:0] _T_803 = _T_27 ? 8'h1 : _T_802; // @[Lookup.scala 33:37]
  wire [7:0] _T_804 = _T_25 ? 8'h1 : _T_803; // @[Lookup.scala 33:37]
  wire [7:0] _T_805 = _T_23 ? 8'h1 : _T_804; // @[Lookup.scala 33:37]
  wire [7:0] _T_806 = _T_21 ? 8'h1 : _T_805; // @[Lookup.scala 33:37]
  wire [7:0] _T_807 = _T_19 ? 8'h1 : _T_806; // @[Lookup.scala 33:37]
  wire [7:0] _T_808 = _T_17 ? 8'h1 : _T_807; // @[Lookup.scala 33:37]
  wire [7:0] _T_809 = _T_15 ? 8'h1 : _T_808; // @[Lookup.scala 33:37]
  wire [7:0] _T_810 = _T_13 ? 8'h1 : _T_809; // @[Lookup.scala 33:37]
  wire [7:0] _T_811 = _T_11 ? 8'h1 : _T_810; // @[Lookup.scala 33:37]
  wire [7:0] _T_812 = _T_9 ? 8'h1 : _T_811; // @[Lookup.scala 33:37]
  wire [7:0] _T_813 = _T_7 ? 8'h1 : _T_812; // @[Lookup.scala 33:37]
  wire [7:0] _T_814 = _T_5 ? 8'h1 : _T_813; // @[Lookup.scala 33:37]
  wire [7:0] _T_815 = _T_3 ? 8'h1 : _T_814; // @[Lookup.scala 33:37]
  wire  _T_882 = _T_17 ? 1'h0 : _T_659; // @[Lookup.scala 33:37]
  wire  _T_883 = _T_15 ? 1'h0 : _T_882; // @[Lookup.scala 33:37]
  wire  _T_884 = _T_13 ? 1'h0 : _T_883; // @[Lookup.scala 33:37]
  wire  _T_885 = _T_11 ? 1'h0 : _T_884; // @[Lookup.scala 33:37]
  wire  _T_886 = _T_9 ? 1'h0 : _T_885; // @[Lookup.scala 33:37]
  wire  _T_887 = _T_7 ? 1'h0 : _T_886; // @[Lookup.scala 33:37]
  wire  _T_888 = _T_5 ? 1'h0 : _T_887; // @[Lookup.scala 33:37]
  wire  _T_889 = _T_3 ? 1'h0 : _T_888; // @[Lookup.scala 33:37]
  wire [1:0] _T_910 = _T_109 ? 2'h3 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _T_911 = _T_107 ? 2'h3 : _T_910; // @[Lookup.scala 33:37]
  wire [1:0] _T_912 = _T_105 ? 2'h3 : _T_911; // @[Lookup.scala 33:37]
  wire [1:0] _T_913 = _T_103 ? 2'h3 : _T_912; // @[Lookup.scala 33:37]
  wire [1:0] _T_914 = _T_101 ? 2'h3 : _T_913; // @[Lookup.scala 33:37]
  wire [1:0] _T_915 = _T_99 ? 2'h3 : _T_914; // @[Lookup.scala 33:37]
  wire [1:0] _T_916 = _T_97 ? 2'h0 : _T_915; // @[Lookup.scala 33:37]
  wire [1:0] _T_917 = _T_95 ? 2'h0 : _T_916; // @[Lookup.scala 33:37]
  wire [1:0] _T_918 = _T_93 ? 2'h0 : _T_917; // @[Lookup.scala 33:37]
  wire [1:0] _T_919 = _T_91 ? 2'h0 : _T_918; // @[Lookup.scala 33:37]
  wire [1:0] _T_920 = _T_89 ? 2'h0 : _T_919; // @[Lookup.scala 33:37]
  wire [1:0] _T_921 = _T_87 ? 2'h0 : _T_920; // @[Lookup.scala 33:37]
  wire [1:0] _T_922 = _T_85 ? 2'h0 : _T_921; // @[Lookup.scala 33:37]
  wire [1:0] _T_923 = _T_83 ? 2'h0 : _T_922; // @[Lookup.scala 33:37]
  wire [1:0] _T_924 = _T_81 ? 2'h0 : _T_923; // @[Lookup.scala 33:37]
  wire [1:0] _T_925 = _T_79 ? 2'h0 : _T_924; // @[Lookup.scala 33:37]
  wire [1:0] _T_926 = _T_77 ? 2'h0 : _T_925; // @[Lookup.scala 33:37]
  wire [1:0] _T_927 = _T_75 ? 2'h0 : _T_926; // @[Lookup.scala 33:37]
  wire [1:0] _T_928 = _T_73 ? 2'h0 : _T_927; // @[Lookup.scala 33:37]
  wire [1:0] _T_929 = _T_71 ? 2'h0 : _T_928; // @[Lookup.scala 33:37]
  wire [1:0] _T_930 = _T_69 ? 2'h0 : _T_929; // @[Lookup.scala 33:37]
  wire [1:0] _T_931 = _T_67 ? 2'h0 : _T_930; // @[Lookup.scala 33:37]
  wire [1:0] _T_932 = _T_65 ? 2'h0 : _T_931; // @[Lookup.scala 33:37]
  wire [1:0] _T_933 = _T_63 ? 2'h0 : _T_932; // @[Lookup.scala 33:37]
  wire [1:0] _T_934 = _T_61 ? 2'h0 : _T_933; // @[Lookup.scala 33:37]
  wire [1:0] _T_935 = _T_59 ? 2'h0 : _T_934; // @[Lookup.scala 33:37]
  wire [1:0] _T_936 = _T_57 ? 2'h0 : _T_935; // @[Lookup.scala 33:37]
  wire [1:0] _T_937 = _T_55 ? 2'h0 : _T_936; // @[Lookup.scala 33:37]
  wire [1:0] _T_938 = _T_53 ? 2'h0 : _T_937; // @[Lookup.scala 33:37]
  wire [1:0] _T_939 = _T_51 ? 2'h0 : _T_938; // @[Lookup.scala 33:37]
  wire [1:0] _T_940 = _T_49 ? 2'h0 : _T_939; // @[Lookup.scala 33:37]
  wire [1:0] _T_941 = _T_47 ? 2'h0 : _T_940; // @[Lookup.scala 33:37]
  wire [1:0] _T_942 = _T_45 ? 2'h0 : _T_941; // @[Lookup.scala 33:37]
  wire [1:0] _T_943 = _T_43 ? 2'h0 : _T_942; // @[Lookup.scala 33:37]
  wire [1:0] _T_944 = _T_41 ? 2'h0 : _T_943; // @[Lookup.scala 33:37]
  wire [1:0] _T_945 = _T_39 ? 2'h0 : _T_944; // @[Lookup.scala 33:37]
  wire [1:0] _T_946 = _T_37 ? 2'h0 : _T_945; // @[Lookup.scala 33:37]
  wire [1:0] _T_947 = _T_35 ? 2'h0 : _T_946; // @[Lookup.scala 33:37]
  wire [1:0] _T_948 = _T_33 ? 2'h0 : _T_947; // @[Lookup.scala 33:37]
  wire [1:0] _T_949 = _T_31 ? 2'h0 : _T_948; // @[Lookup.scala 33:37]
  wire [1:0] _T_950 = _T_29 ? 2'h0 : _T_949; // @[Lookup.scala 33:37]
  wire [1:0] _T_951 = _T_27 ? 2'h0 : _T_950; // @[Lookup.scala 33:37]
  wire [1:0] _T_952 = _T_25 ? 2'h0 : _T_951; // @[Lookup.scala 33:37]
  wire [1:0] _T_953 = _T_23 ? 2'h0 : _T_952; // @[Lookup.scala 33:37]
  wire [1:0] _T_954 = _T_21 ? 2'h0 : _T_953; // @[Lookup.scala 33:37]
  wire [1:0] _T_955 = _T_19 ? 2'h0 : _T_954; // @[Lookup.scala 33:37]
  wire [1:0] _T_956 = _T_17 ? 2'h1 : _T_955; // @[Lookup.scala 33:37]
  wire [1:0] _T_957 = _T_15 ? 2'h1 : _T_956; // @[Lookup.scala 33:37]
  wire [1:0] _T_958 = _T_13 ? 2'h1 : _T_957; // @[Lookup.scala 33:37]
  wire [1:0] _T_959 = _T_11 ? 2'h1 : _T_958; // @[Lookup.scala 33:37]
  wire [1:0] _T_960 = _T_9 ? 2'h1 : _T_959; // @[Lookup.scala 33:37]
  wire [1:0] _T_961 = _T_7 ? 2'h1 : _T_960; // @[Lookup.scala 33:37]
  wire [1:0] _T_962 = _T_5 ? 2'h1 : _T_961; // @[Lookup.scala 33:37]
  wire [1:0] _T_963 = _T_3 ? 2'h2 : _T_962; // @[Lookup.scala 33:37]
  wire [2:0] _T_1038 = _T_149 ? 3'h5 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_1039 = _T_147 ? 3'h5 : _T_1038; // @[Lookup.scala 33:37]
  wire [2:0] _T_1040 = _T_145 ? 3'h0 : _T_1039; // @[Lookup.scala 33:37]
  wire [2:0] _T_1041 = _T_143 ? 3'h0 : _T_1040; // @[Lookup.scala 33:37]
  wire [2:0] _T_1042 = _T_141 ? 3'h5 : _T_1041; // @[Lookup.scala 33:37]
  wire [2:0] _T_1043 = _T_139 ? 3'h5 : _T_1042; // @[Lookup.scala 33:37]
  wire [2:0] _T_1044 = _T_137 ? 3'h0 : _T_1043; // @[Lookup.scala 33:37]
  wire [2:0] _T_1045 = _T_135 ? 3'h0 : _T_1044; // @[Lookup.scala 33:37]
  wire [2:0] _T_1046 = _T_133 ? 3'h5 : _T_1045; // @[Lookup.scala 33:37]
  wire [2:0] _T_1047 = _T_131 ? 3'h0 : _T_1046; // @[Lookup.scala 33:37]
  wire [2:0] _T_1048 = _T_129 ? 3'h0 : _T_1047; // @[Lookup.scala 33:37]
  wire [2:0] _T_1049 = _T_127 ? 3'h0 : _T_1048; // @[Lookup.scala 33:37]
  wire [2:0] _T_1050 = _T_125 ? 3'h0 : _T_1049; // @[Lookup.scala 33:37]
  wire [2:0] _T_1051 = _T_123 ? 3'h0 : _T_1050; // @[Lookup.scala 33:37]
  wire [2:0] _T_1052 = _T_121 ? 3'h0 : _T_1051; // @[Lookup.scala 33:37]
  wire [2:0] _T_1053 = _T_119 ? 3'h0 : _T_1052; // @[Lookup.scala 33:37]
  wire [2:0] _T_1054 = _T_117 ? 3'h0 : _T_1053; // @[Lookup.scala 33:37]
  wire [2:0] _T_1055 = _T_115 ? 3'h0 : _T_1054; // @[Lookup.scala 33:37]
  wire [2:0] _T_1056 = _T_113 ? 3'h0 : _T_1055; // @[Lookup.scala 33:37]
  wire [2:0] _T_1057 = _T_111 ? 3'h0 : _T_1056; // @[Lookup.scala 33:37]
  wire [2:0] _T_1058 = _T_109 ? 3'h0 : _T_1057; // @[Lookup.scala 33:37]
  wire [2:0] _T_1059 = _T_107 ? 3'h0 : _T_1058; // @[Lookup.scala 33:37]
  wire [2:0] _T_1060 = _T_105 ? 3'h0 : _T_1059; // @[Lookup.scala 33:37]
  wire [2:0] _T_1061 = _T_103 ? 3'h0 : _T_1060; // @[Lookup.scala 33:37]
  wire [2:0] _T_1062 = _T_101 ? 3'h0 : _T_1061; // @[Lookup.scala 33:37]
  wire [2:0] _T_1063 = _T_99 ? 3'h0 : _T_1062; // @[Lookup.scala 33:37]
  wire [2:0] _T_1064 = _T_97 ? 3'h0 : _T_1063; // @[Lookup.scala 33:37]
  wire [2:0] _T_1065 = _T_95 ? 3'h0 : _T_1064; // @[Lookup.scala 33:37]
  wire [2:0] _T_1066 = _T_93 ? 3'h0 : _T_1065; // @[Lookup.scala 33:37]
  wire [2:0] _T_1067 = _T_91 ? 3'h0 : _T_1066; // @[Lookup.scala 33:37]
  wire [2:0] _T_1068 = _T_89 ? 3'h0 : _T_1067; // @[Lookup.scala 33:37]
  wire [2:0] _T_1069 = _T_87 ? 3'h0 : _T_1068; // @[Lookup.scala 33:37]
  wire [2:0] _T_1070 = _T_85 ? 3'h0 : _T_1069; // @[Lookup.scala 33:37]
  wire [2:0] _T_1071 = _T_83 ? 3'h0 : _T_1070; // @[Lookup.scala 33:37]
  wire [2:0] _T_1072 = _T_81 ? 3'h0 : _T_1071; // @[Lookup.scala 33:37]
  wire [2:0] _T_1073 = _T_79 ? 3'h0 : _T_1072; // @[Lookup.scala 33:37]
  wire [2:0] _T_1074 = _T_77 ? 3'h0 : _T_1073; // @[Lookup.scala 33:37]
  wire [2:0] _T_1075 = _T_75 ? 3'h0 : _T_1074; // @[Lookup.scala 33:37]
  wire [2:0] _T_1076 = _T_73 ? 3'h5 : _T_1075; // @[Lookup.scala 33:37]
  wire [2:0] _T_1077 = _T_71 ? 3'h5 : _T_1076; // @[Lookup.scala 33:37]
  wire [2:0] _T_1078 = _T_69 ? 3'h0 : _T_1077; // @[Lookup.scala 33:37]
  wire [2:0] _T_1079 = _T_67 ? 3'h0 : _T_1078; // @[Lookup.scala 33:37]
  wire [2:0] _T_1080 = _T_65 ? 3'h0 : _T_1079; // @[Lookup.scala 33:37]
  wire [2:0] _T_1081 = _T_63 ? 3'h0 : _T_1080; // @[Lookup.scala 33:37]
  wire [2:0] _T_1082 = _T_61 ? 3'h0 : _T_1081; // @[Lookup.scala 33:37]
  wire [2:0] _T_1083 = _T_59 ? 3'h0 : _T_1082; // @[Lookup.scala 33:37]
  wire [2:0] _T_1084 = _T_57 ? 3'h5 : _T_1083; // @[Lookup.scala 33:37]
  wire [2:0] _T_1085 = _T_55 ? 3'h0 : _T_1084; // @[Lookup.scala 33:37]
  wire [2:0] _T_1086 = _T_53 ? 3'h5 : _T_1085; // @[Lookup.scala 33:37]
  wire [2:0] _T_1087 = _T_51 ? 3'h5 : _T_1086; // @[Lookup.scala 33:37]
  wire [2:0] _T_1088 = _T_49 ? 3'h0 : _T_1087; // @[Lookup.scala 33:37]
  wire [2:0] _T_1089 = _T_47 ? 3'h0 : _T_1088; // @[Lookup.scala 33:37]
  wire [2:0] _T_1090 = _T_45 ? 3'h5 : _T_1089; // @[Lookup.scala 33:37]
  wire [2:0] _T_1091 = _T_43 ? 3'h5 : _T_1090; // @[Lookup.scala 33:37]
  wire [2:0] _T_1092 = _T_41 ? 3'h0 : _T_1091; // @[Lookup.scala 33:37]
  wire [2:0] _T_1093 = _T_39 ? 3'h0 : _T_1092; // @[Lookup.scala 33:37]
  wire [2:0] _T_1094 = _T_37 ? 3'h0 : _T_1093; // @[Lookup.scala 33:37]
  wire [2:0] _T_1095 = _T_35 ? 3'h0 : _T_1094; // @[Lookup.scala 33:37]
  wire [2:0] _T_1096 = _T_33 ? 3'h0 : _T_1095; // @[Lookup.scala 33:37]
  wire [2:0] _T_1097 = _T_31 ? 3'h0 : _T_1096; // @[Lookup.scala 33:37]
  wire [2:0] _T_1098 = _T_29 ? 3'h5 : _T_1097; // @[Lookup.scala 33:37]
  wire [2:0] _T_1099 = _T_27 ? 3'h5 : _T_1098; // @[Lookup.scala 33:37]
  wire [2:0] _T_1100 = _T_25 ? 3'h0 : _T_1099; // @[Lookup.scala 33:37]
  wire [2:0] _T_1101 = _T_23 ? 3'h0 : _T_1100; // @[Lookup.scala 33:37]
  wire [2:0] _T_1102 = _T_21 ? 3'h0 : _T_1101; // @[Lookup.scala 33:37]
  wire [2:0] _T_1103 = _T_19 ? 3'h0 : _T_1102; // @[Lookup.scala 33:37]
  wire [2:0] _T_1104 = _T_17 ? 3'h0 : _T_1103; // @[Lookup.scala 33:37]
  wire [2:0] _T_1105 = _T_15 ? 3'h0 : _T_1104; // @[Lookup.scala 33:37]
  wire [2:0] _T_1106 = _T_13 ? 3'h0 : _T_1105; // @[Lookup.scala 33:37]
  wire [2:0] _T_1107 = _T_11 ? 3'h0 : _T_1106; // @[Lookup.scala 33:37]
  wire [2:0] _T_1108 = _T_9 ? 3'h0 : _T_1107; // @[Lookup.scala 33:37]
  wire [2:0] _T_1109 = _T_7 ? 3'h0 : _T_1108; // @[Lookup.scala 33:37]
  wire [2:0] _T_1110 = _T_5 ? 3'h0 : _T_1109; // @[Lookup.scala 33:37]
  wire [2:0] _T_1111 = _T_3 ? 3'h0 : _T_1110; // @[Lookup.scala 33:37]
  wire  temp_exception = ~cs_valid_inst; // @[cpath.scala 169:46]
  wire  _T_1113 = cs_branch == 4'h0; // @[cpath.scala 153:20]
  wire  _T_1114 = cs_branch == 4'h1; // @[cpath.scala 154:20]
  wire [2:0] _T_1115 = io_d2c_iseq ? 3'h2 : 3'h0; // @[cpath.scala 154:38]
  wire  _T_1116 = cs_branch == 4'h2; // @[cpath.scala 155:20]
  wire  _T_1117 = ~io_d2c_iseq; // @[cpath.scala 155:40]
  wire [2:0] _T_1118 = _T_1117 ? 3'h2 : 3'h0; // @[cpath.scala 155:39]
  wire  _T_1119 = cs_branch == 4'h5; // @[cpath.scala 156:20]
  wire  _T_1120 = ~io_d2c_islt; // @[cpath.scala 156:39]
  wire [2:0] _T_1121 = _T_1120 ? 3'h2 : 3'h0; // @[cpath.scala 156:38]
  wire  _T_1122 = cs_branch == 4'h6; // @[cpath.scala 157:20]
  wire  _T_1123 = ~io_d2c_isltu; // @[cpath.scala 157:40]
  wire [2:0] _T_1124 = _T_1123 ? 3'h2 : 3'h0; // @[cpath.scala 157:39]
  wire  _T_1125 = cs_branch == 4'h3; // @[cpath.scala 158:20]
  wire [2:0] _T_1126 = io_d2c_islt ? 3'h2 : 3'h0; // @[cpath.scala 158:38]
  wire  _T_1127 = cs_branch == 4'h4; // @[cpath.scala 159:20]
  wire [2:0] _T_1128 = io_d2c_isltu ? 3'h2 : 3'h0; // @[cpath.scala 159:39]
  wire  _T_1129 = cs_branch == 4'h7; // @[cpath.scala 160:20]
  wire  _T_1130 = cs_branch == 4'h8; // @[cpath.scala 161:20]
  wire [2:0] _T_1131 = _T_1130 ? 3'h3 : 3'h0; // @[Mux.scala 98:16]
  wire [2:0] _T_1132 = _T_1129 ? 3'h1 : _T_1131; // @[Mux.scala 98:16]
  wire [2:0] _T_1133 = _T_1127 ? _T_1128 : _T_1132; // @[Mux.scala 98:16]
  wire [2:0] _T_1134 = _T_1125 ? _T_1126 : _T_1133; // @[Mux.scala 98:16]
  wire [2:0] _T_1135 = _T_1122 ? _T_1124 : _T_1134; // @[Mux.scala 98:16]
  wire [2:0] _T_1136 = _T_1119 ? _T_1121 : _T_1135; // @[Mux.scala 98:16]
  wire [2:0] _T_1137 = _T_1116 ? _T_1118 : _T_1136; // @[Mux.scala 98:16]
  wire [2:0] _T_1138 = _T_1114 ? _T_1115 : _T_1137; // @[Mux.scala 98:16]
  wire [2:0] _T_1139 = _T_1113 ? 3'h0 : _T_1138; // @[Mux.scala 98:16]
  wire [2:0] _T_1140 = temp_exception ? 3'h4 : _T_1139; // @[Mux.scala 98:16]
  wire  _T_1142 = ~cs_mem_valid; // @[cpath.scala 166:45]
  wire  _T_1143 = cs_mem_valid & io_dmem_resp_valid; // @[cpath.scala 166:76]
  wire  _T_1144 = _T_1142 | _T_1143; // @[cpath.scala 166:59]
  wire [1:0] temp_pc_sel = _T_1140[1:0]; // @[cpath.scala 147:27 cpath.scala 151:17]
  assign io_c2d_cp_pc_sel = {{1'd0}, temp_pc_sel}; // @[cpath.scala 185:33]
  assign io_c2d_cp_op1_sel = _T_1 ? 2'h0 : _T_371; // @[cpath.scala 186:33]
  assign io_c2d_cp_op2_sel = _T_1 ? 2'h0 : _T_445; // @[cpath.scala 187:33]
  assign io_c2d_cp_alu_sel = _T_1 ? 5'h0 : _T_519; // @[cpath.scala 188:33]
  assign io_c2d_cp_reg_wen = _T_1 | _T_593; // @[cpath.scala 189:33]
  assign io_c2d_cp_mem_en = _T_1 ? 1'h0 : _T_667; // @[cpath.scala 190:33]
  assign io_c2d_cp_mem_read_op = _T_1 ? 3'h0 : _T_741; // @[cpath.scala 191:33]
  assign io_c2d_cp_mem_write_mask = _T_1 ? 8'h1 : _T_815; // @[cpath.scala 192:33]
  assign io_c2d_cp_mem_wen = _T_1 ? 1'h0 : _T_889; // @[cpath.scala 193:33]
  assign io_c2d_cp_alu_ext_sel = _T_1 ? 3'h0 : _T_1111; // @[cpath.scala 194:33]
  assign io_c2d_cp_wb_sel = _T_1 ? 2'h2 : _T_963; // @[cpath.scala 195:33]
  assign io_c2d_hasexception = ~cs_valid_inst; // @[cpath.scala 198:25]
  assign io_c2d_shouldstall = ~_T_1144; // @[cpath.scala 199:24]
  assign io_c2d_cp_reg_wen_0 = io_c2d_cp_reg_wen;
endmodule
module memorymodule(
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
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [7:0] mem [0:16777215]; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_96_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_96_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_98_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_98_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_100_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_100_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_102_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_102_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_104_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_104_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_106_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_106_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_108_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_108_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_110_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_110_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_112_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_112_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_114_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_114_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_116_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_116_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_118_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_118_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_120_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_120_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_122_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_122_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_124_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_124_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_126_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_126_addr; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_97_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_97_addr; // @[memory_second.scala 64:18]
  wire  mem__T_97_mask; // @[memory_second.scala 64:18]
  wire  mem__T_97_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_99_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_99_addr; // @[memory_second.scala 64:18]
  wire  mem__T_99_mask; // @[memory_second.scala 64:18]
  wire  mem__T_99_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_101_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_101_addr; // @[memory_second.scala 64:18]
  wire  mem__T_101_mask; // @[memory_second.scala 64:18]
  wire  mem__T_101_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_103_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_103_addr; // @[memory_second.scala 64:18]
  wire  mem__T_103_mask; // @[memory_second.scala 64:18]
  wire  mem__T_103_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_105_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_105_addr; // @[memory_second.scala 64:18]
  wire  mem__T_105_mask; // @[memory_second.scala 64:18]
  wire  mem__T_105_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_107_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_107_addr; // @[memory_second.scala 64:18]
  wire  mem__T_107_mask; // @[memory_second.scala 64:18]
  wire  mem__T_107_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_109_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_109_addr; // @[memory_second.scala 64:18]
  wire  mem__T_109_mask; // @[memory_second.scala 64:18]
  wire  mem__T_109_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_111_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_111_addr; // @[memory_second.scala 64:18]
  wire  mem__T_111_mask; // @[memory_second.scala 64:18]
  wire  mem__T_111_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_113_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_113_addr; // @[memory_second.scala 64:18]
  wire  mem__T_113_mask; // @[memory_second.scala 64:18]
  wire  mem__T_113_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_115_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_115_addr; // @[memory_second.scala 64:18]
  wire  mem__T_115_mask; // @[memory_second.scala 64:18]
  wire  mem__T_115_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_117_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_117_addr; // @[memory_second.scala 64:18]
  wire  mem__T_117_mask; // @[memory_second.scala 64:18]
  wire  mem__T_117_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_119_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_119_addr; // @[memory_second.scala 64:18]
  wire  mem__T_119_mask; // @[memory_second.scala 64:18]
  wire  mem__T_119_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_121_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_121_addr; // @[memory_second.scala 64:18]
  wire  mem__T_121_mask; // @[memory_second.scala 64:18]
  wire  mem__T_121_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_123_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_123_addr; // @[memory_second.scala 64:18]
  wire  mem__T_123_mask; // @[memory_second.scala 64:18]
  wire  mem__T_123_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_125_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_125_addr; // @[memory_second.scala 64:18]
  wire  mem__T_125_mask; // @[memory_second.scala 64:18]
  wire  mem__T_125_en; // @[memory_second.scala 64:18]
  wire [7:0] mem__T_127_data; // @[memory_second.scala 64:18]
  wire [23:0] mem__T_127_addr; // @[memory_second.scala 64:18]
  wire  mem__T_127_mask; // @[memory_second.scala 64:18]
  wire  mem__T_127_en; // @[memory_second.scala 64:18]
  wire [24:0] _T_4 = {{1'd0}, io_ports_0_req_bits_addr[23:0]}; // @[memory_second.scala 91:64]
  wire  mask_temp_1_0 = io_ports_1_req_bits_mask[0]; // @[memory_second.scala 90:57]
  wire [24:0] _T_52 = {{1'd0}, io_ports_1_req_bits_addr[23:0]}; // @[memory_second.scala 91:64]
  wire  mask_temp_1_1 = io_ports_1_req_bits_mask[1]; // @[memory_second.scala 90:57]
  wire  mask_temp_1_2 = io_ports_1_req_bits_mask[2]; // @[memory_second.scala 90:57]
  wire  mask_temp_1_3 = io_ports_1_req_bits_mask[3]; // @[memory_second.scala 90:57]
  wire  mask_temp_1_4 = io_ports_1_req_bits_mask[4]; // @[memory_second.scala 90:57]
  wire  mask_temp_1_5 = io_ports_1_req_bits_mask[5]; // @[memory_second.scala 90:57]
  wire  mask_temp_1_6 = io_ports_1_req_bits_mask[6]; // @[memory_second.scala 90:57]
  wire  mask_temp_1_7 = io_ports_1_req_bits_mask[7]; // @[memory_second.scala 90:57]
  wire [7:0] rdata_temp_0_0 = mem__T_96_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_0_1 = mem__T_98_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_0_2 = mem__T_100_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_0_3 = mem__T_102_data; // @[memory_second.scala 100:13]
  wire  _GEN_145 = io_ports_1_req_bits_wen & mask_temp_1_0; // @[memory_second.scala 108:21]
  wire  _GEN_155 = io_ports_1_req_bits_wen & mask_temp_1_1; // @[memory_second.scala 108:21]
  wire  _GEN_165 = io_ports_1_req_bits_wen & mask_temp_1_2; // @[memory_second.scala 108:21]
  wire  _GEN_175 = io_ports_1_req_bits_wen & mask_temp_1_3; // @[memory_second.scala 108:21]
  wire  _GEN_185 = io_ports_1_req_bits_wen & mask_temp_1_4; // @[memory_second.scala 108:21]
  wire  _GEN_195 = io_ports_1_req_bits_wen & mask_temp_1_5; // @[memory_second.scala 108:21]
  wire  _GEN_205 = io_ports_1_req_bits_wen & mask_temp_1_6; // @[memory_second.scala 108:21]
  wire  _GEN_215 = io_ports_1_req_bits_wen & mask_temp_1_7; // @[memory_second.scala 108:21]
  wire [7:0] rdata_temp_1_0 = mem__T_112_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_1_1 = mem__T_114_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_1_2 = mem__T_116_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_1_3 = mem__T_118_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_1_4 = mem__T_120_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_1_5 = mem__T_122_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_1_6 = mem__T_124_data; // @[memory_second.scala 100:13]
  wire [7:0] rdata_temp_1_7 = mem__T_126_data; // @[memory_second.scala 100:13]
  wire [15:0] _T_128 = {rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire [47:0] _T_165 = {32'h0,rdata_temp_0_3,rdata_temp_0_2}; // @[Cat.scala 29:58]
  wire [63:0] _T_179 = {rdata_temp_1_7,rdata_temp_1_6,rdata_temp_1_5,rdata_temp_1_4,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_180 = io_ports_1_req_bits_op == 3'h0; // @[memory_second.scala 127:42]
  wire [55:0] _T_183 = rdata_temp_1_0[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_184 = {_T_183,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_185 = io_ports_1_req_bits_op == 3'h1; // @[memory_second.scala 128:42]
  wire [63:0] _T_187 = {56'h0,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_188 = io_ports_1_req_bits_op == 3'h2; // @[memory_second.scala 129:42]
  wire [47:0] _T_191 = rdata_temp_1_1[7] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_193 = {_T_191,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_194 = io_ports_1_req_bits_op == 3'h3; // @[memory_second.scala 130:42]
  wire [63:0] _T_197 = {48'h0,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_198 = io_ports_1_req_bits_op == 3'h4; // @[memory_second.scala 131:42]
  wire [31:0] _T_201 = rdata_temp_1_3[7] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_205 = {_T_201,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_206 = io_ports_1_req_bits_op == 3'h5; // @[memory_second.scala 132:42]
  wire [63:0] _T_211 = {32'h0,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire [63:0] _T_212 = _T_206 ? _T_211 : _T_179; // @[Mux.scala 98:16]
  wire [63:0] _T_213 = _T_198 ? _T_205 : _T_212; // @[Mux.scala 98:16]
  wire [63:0] _T_214 = _T_194 ? _T_197 : _T_213; // @[Mux.scala 98:16]
  wire [63:0] _T_215 = _T_188 ? _T_193 : _T_214; // @[Mux.scala 98:16]
  wire [63:0] _T_216 = _T_185 ? _T_187 : _T_215; // @[Mux.scala 98:16]
  assign mem__T_96_addr = _T_4[23:0];
  assign mem__T_96_data = mem[mem__T_96_addr]; // @[memory_second.scala 64:18]
  assign mem__T_98_addr = io_ports_0_req_bits_addr[23:0] + 24'h1;
  assign mem__T_98_data = mem[mem__T_98_addr]; // @[memory_second.scala 64:18]
  assign mem__T_100_addr = io_ports_0_req_bits_addr[23:0] + 24'h2;
  assign mem__T_100_data = mem[mem__T_100_addr]; // @[memory_second.scala 64:18]
  assign mem__T_102_addr = io_ports_0_req_bits_addr[23:0] + 24'h3;
  assign mem__T_102_data = mem[mem__T_102_addr]; // @[memory_second.scala 64:18]
  assign mem__T_104_addr = io_ports_0_req_bits_addr[23:0] + 24'h4;
  assign mem__T_104_data = mem[mem__T_104_addr]; // @[memory_second.scala 64:18]
  assign mem__T_106_addr = io_ports_0_req_bits_addr[23:0] + 24'h5;
  assign mem__T_106_data = mem[mem__T_106_addr]; // @[memory_second.scala 64:18]
  assign mem__T_108_addr = io_ports_0_req_bits_addr[23:0] + 24'h6;
  assign mem__T_108_data = mem[mem__T_108_addr]; // @[memory_second.scala 64:18]
  assign mem__T_110_addr = io_ports_0_req_bits_addr[23:0] + 24'h7;
  assign mem__T_110_data = mem[mem__T_110_addr]; // @[memory_second.scala 64:18]
  assign mem__T_112_addr = _T_52[23:0];
  assign mem__T_112_data = mem[mem__T_112_addr]; // @[memory_second.scala 64:18]
  assign mem__T_114_addr = io_ports_1_req_bits_addr[23:0] + 24'h1;
  assign mem__T_114_data = mem[mem__T_114_addr]; // @[memory_second.scala 64:18]
  assign mem__T_116_addr = io_ports_1_req_bits_addr[23:0] + 24'h2;
  assign mem__T_116_data = mem[mem__T_116_addr]; // @[memory_second.scala 64:18]
  assign mem__T_118_addr = io_ports_1_req_bits_addr[23:0] + 24'h3;
  assign mem__T_118_data = mem[mem__T_118_addr]; // @[memory_second.scala 64:18]
  assign mem__T_120_addr = io_ports_1_req_bits_addr[23:0] + 24'h4;
  assign mem__T_120_data = mem[mem__T_120_addr]; // @[memory_second.scala 64:18]
  assign mem__T_122_addr = io_ports_1_req_bits_addr[23:0] + 24'h5;
  assign mem__T_122_data = mem[mem__T_122_addr]; // @[memory_second.scala 64:18]
  assign mem__T_124_addr = io_ports_1_req_bits_addr[23:0] + 24'h6;
  assign mem__T_124_data = mem[mem__T_124_addr]; // @[memory_second.scala 64:18]
  assign mem__T_126_addr = io_ports_1_req_bits_addr[23:0] + 24'h7;
  assign mem__T_126_data = mem[mem__T_126_addr]; // @[memory_second.scala 64:18]
  assign mem__T_97_data = 8'h0;
  assign mem__T_97_addr = _T_4[23:0];
  assign mem__T_97_mask = 1'h1;
  assign mem__T_97_en = 1'h0;
  assign mem__T_99_data = 8'h0;
  assign mem__T_99_addr = io_ports_0_req_bits_addr[23:0] + 24'h1;
  assign mem__T_99_mask = 1'h1;
  assign mem__T_99_en = 1'h0;
  assign mem__T_101_data = 8'h0;
  assign mem__T_101_addr = io_ports_0_req_bits_addr[23:0] + 24'h2;
  assign mem__T_101_mask = 1'h1;
  assign mem__T_101_en = 1'h0;
  assign mem__T_103_data = 8'h0;
  assign mem__T_103_addr = io_ports_0_req_bits_addr[23:0] + 24'h3;
  assign mem__T_103_mask = 1'h1;
  assign mem__T_103_en = 1'h0;
  assign mem__T_105_data = 8'h0;
  assign mem__T_105_addr = io_ports_0_req_bits_addr[23:0] + 24'h4;
  assign mem__T_105_mask = 1'h1;
  assign mem__T_105_en = 1'h0;
  assign mem__T_107_data = 8'h0;
  assign mem__T_107_addr = io_ports_0_req_bits_addr[23:0] + 24'h5;
  assign mem__T_107_mask = 1'h1;
  assign mem__T_107_en = 1'h0;
  assign mem__T_109_data = 8'h0;
  assign mem__T_109_addr = io_ports_0_req_bits_addr[23:0] + 24'h6;
  assign mem__T_109_mask = 1'h1;
  assign mem__T_109_en = 1'h0;
  assign mem__T_111_data = 8'h0;
  assign mem__T_111_addr = io_ports_0_req_bits_addr[23:0] + 24'h7;
  assign mem__T_111_mask = 1'h1;
  assign mem__T_111_en = 1'h0;
  assign mem__T_113_data = io_ports_1_req_bits_wdata[7:0];
  assign mem__T_113_addr = _T_52[23:0];
  assign mem__T_113_mask = 1'h1;
  assign mem__T_113_en = io_ports_1_req_bits_memen & _GEN_145;
  assign mem__T_115_data = io_ports_1_req_bits_wdata[15:8];
  assign mem__T_115_addr = io_ports_1_req_bits_addr[23:0] + 24'h1;
  assign mem__T_115_mask = 1'h1;
  assign mem__T_115_en = io_ports_1_req_bits_memen & _GEN_155;
  assign mem__T_117_data = io_ports_1_req_bits_wdata[23:16];
  assign mem__T_117_addr = io_ports_1_req_bits_addr[23:0] + 24'h2;
  assign mem__T_117_mask = 1'h1;
  assign mem__T_117_en = io_ports_1_req_bits_memen & _GEN_165;
  assign mem__T_119_data = io_ports_1_req_bits_wdata[31:24];
  assign mem__T_119_addr = io_ports_1_req_bits_addr[23:0] + 24'h3;
  assign mem__T_119_mask = 1'h1;
  assign mem__T_119_en = io_ports_1_req_bits_memen & _GEN_175;
  assign mem__T_121_data = io_ports_1_req_bits_wdata[39:32];
  assign mem__T_121_addr = io_ports_1_req_bits_addr[23:0] + 24'h4;
  assign mem__T_121_mask = 1'h1;
  assign mem__T_121_en = io_ports_1_req_bits_memen & _GEN_185;
  assign mem__T_123_data = io_ports_1_req_bits_wdata[47:40];
  assign mem__T_123_addr = io_ports_1_req_bits_addr[23:0] + 24'h5;
  assign mem__T_123_mask = 1'h1;
  assign mem__T_123_en = io_ports_1_req_bits_memen & _GEN_195;
  assign mem__T_125_data = io_ports_1_req_bits_wdata[55:48];
  assign mem__T_125_addr = io_ports_1_req_bits_addr[23:0] + 24'h6;
  assign mem__T_125_mask = 1'h1;
  assign mem__T_125_en = io_ports_1_req_bits_memen & _GEN_205;
  assign mem__T_127_data = io_ports_1_req_bits_wdata[63:56];
  assign mem__T_127_addr = io_ports_1_req_bits_addr[23:0] + 24'h7;
  assign mem__T_127_mask = 1'h1;
  assign mem__T_127_en = io_ports_1_req_bits_memen & _GEN_215;
  assign io_ports_0_resp_bits_rdata = {_T_165,_T_128}; // @[memory_second.scala 126:45]
  assign io_ports_1_resp_valid = io_ports_1_req_valid; // @[memory_second.scala 73:32]
  assign io_ports_1_resp_bits_rdata = _T_180 ? _T_184 : _T_216; // @[memory_second.scala 126:45]
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
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 16777216; initvar = initvar+1)
    mem[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if(mem__T_97_en & mem__T_97_mask) begin
      mem[mem__T_97_addr] <= mem__T_97_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_99_en & mem__T_99_mask) begin
      mem[mem__T_99_addr] <= mem__T_99_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_101_en & mem__T_101_mask) begin
      mem[mem__T_101_addr] <= mem__T_101_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_103_en & mem__T_103_mask) begin
      mem[mem__T_103_addr] <= mem__T_103_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_105_en & mem__T_105_mask) begin
      mem[mem__T_105_addr] <= mem__T_105_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_107_en & mem__T_107_mask) begin
      mem[mem__T_107_addr] <= mem__T_107_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_109_en & mem__T_109_mask) begin
      mem[mem__T_109_addr] <= mem__T_109_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_111_en & mem__T_111_mask) begin
      mem[mem__T_111_addr] <= mem__T_111_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_113_en & mem__T_113_mask) begin
      mem[mem__T_113_addr] <= mem__T_113_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_115_en & mem__T_115_mask) begin
      mem[mem__T_115_addr] <= mem__T_115_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_117_en & mem__T_117_mask) begin
      mem[mem__T_117_addr] <= mem__T_117_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_119_en & mem__T_119_mask) begin
      mem[mem__T_119_addr] <= mem__T_119_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_121_en & mem__T_121_mask) begin
      mem[mem__T_121_addr] <= mem__T_121_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_123_en & mem__T_123_mask) begin
      mem[mem__T_123_addr] <= mem__T_123_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_125_en & mem__T_125_mask) begin
      mem[mem__T_125_addr] <= mem__T_125_data; // @[memory_second.scala 64:18]
    end
    if(mem__T_127_en & mem__T_127_mask) begin
      mem[mem__T_127_addr] <= mem__T_127_data; // @[memory_second.scala 64:18]
    end
  end
endmodule
module core(
  input         clock,
  input         reset,
  output        io_c2d_cp_reg_wen,
  output [63:0] reg_pc,
  output        io_c2d_cp_reg_wen_0,
  output [63:0] _T_41_0,
  output [63:0] _T_41_1,
  output [63:0] _T_41_2,
  output [63:0] _T_41_3,
  output [63:0] _T_41_4,
  output [63:0] _T_41_5,
  output [63:0] _T_41_6,
  output [63:0] _T_41_7,
  output [63:0] _T_41_8,
  output [63:0] _T_41_9,
  output [63:0] _T_41_10,
  output [63:0] _T_41_11,
  output [63:0] _T_41_12,
  output [63:0] _T_41_13,
  output [63:0] _T_41_14,
  output [63:0] _T_41_15,
  output [63:0] _T_41_16,
  output [63:0] _T_41_17,
  output [63:0] _T_41_18,
  output [63:0] _T_41_19,
  output [63:0] _T_41_20,
  output [63:0] _T_41_21,
  output [63:0] _T_41_22,
  output [63:0] _T_41_23,
  output [63:0] _T_41_24,
  output [63:0] _T_41_25,
  output [63:0] _T_41_26,
  output [63:0] _T_41_27,
  output [63:0] _T_41_28,
  output [63:0] _T_41_29,
  output [63:0] _T_41_30,
  output [63:0] _T_41_31
);
  wire  dpath_clock; // @[core.scala 20:23]
  wire  dpath_reset; // @[core.scala 20:23]
  wire [2:0] dpath_io__c2d_cp_pc_sel; // @[core.scala 20:23]
  wire [1:0] dpath_io__c2d_cp_op1_sel; // @[core.scala 20:23]
  wire [1:0] dpath_io__c2d_cp_op2_sel; // @[core.scala 20:23]
  wire [4:0] dpath_io__c2d_cp_alu_sel; // @[core.scala 20:23]
  wire  dpath_io__c2d_cp_reg_wen; // @[core.scala 20:23]
  wire  dpath_io__c2d_cp_mem_en; // @[core.scala 20:23]
  wire [2:0] dpath_io__c2d_cp_mem_read_op; // @[core.scala 20:23]
  wire [7:0] dpath_io__c2d_cp_mem_write_mask; // @[core.scala 20:23]
  wire  dpath_io__c2d_cp_mem_wen; // @[core.scala 20:23]
  wire [2:0] dpath_io__c2d_cp_alu_ext_sel; // @[core.scala 20:23]
  wire [1:0] dpath_io__c2d_cp_wb_sel; // @[core.scala 20:23]
  wire  dpath_io__c2d_hasexception; // @[core.scala 20:23]
  wire  dpath_io__c2d_shouldstall; // @[core.scala 20:23]
  wire [31:0] dpath_io__d2c_instr; // @[core.scala 20:23]
  wire  dpath_io__d2c_islt; // @[core.scala 20:23]
  wire  dpath_io__d2c_isltu; // @[core.scala 20:23]
  wire  dpath_io__d2c_iseq; // @[core.scala 20:23]
  wire [31:0] dpath_io__imem_req_bits_addr; // @[core.scala 20:23]
  wire [63:0] dpath_io__imem_resp_bits_rdata; // @[core.scala 20:23]
  wire  dpath_io__dmem_req_valid; // @[core.scala 20:23]
  wire [31:0] dpath_io__dmem_req_bits_addr; // @[core.scala 20:23]
  wire [7:0] dpath_io__dmem_req_bits_mask; // @[core.scala 20:23]
  wire [2:0] dpath_io__dmem_req_bits_op; // @[core.scala 20:23]
  wire [63:0] dpath_io__dmem_req_bits_wdata; // @[core.scala 20:23]
  wire  dpath_io__dmem_req_bits_memen; // @[core.scala 20:23]
  wire  dpath_io__dmem_req_bits_wen; // @[core.scala 20:23]
  wire [63:0] dpath_io__dmem_resp_bits_rdata; // @[core.scala 20:23]
  wire  dpath_io_c2d_cp_reg_wen; // @[core.scala 20:23]
  wire [63:0] dpath_reg_pc_0; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_0; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_1; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_2; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_3; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_4; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_5; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_6; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_7; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_8; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_9; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_10; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_11; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_12; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_13; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_14; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_15; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_16; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_17; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_18; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_19; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_20; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_21; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_22; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_23; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_24; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_25; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_26; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_27; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_28; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_29; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_30; // @[core.scala 20:23]
  wire [63:0] dpath__T_41_0_31; // @[core.scala 20:23]
  wire [2:0] cpath_io_c2d_cp_pc_sel; // @[core.scala 21:23]
  wire [1:0] cpath_io_c2d_cp_op1_sel; // @[core.scala 21:23]
  wire [1:0] cpath_io_c2d_cp_op2_sel; // @[core.scala 21:23]
  wire [4:0] cpath_io_c2d_cp_alu_sel; // @[core.scala 21:23]
  wire  cpath_io_c2d_cp_reg_wen; // @[core.scala 21:23]
  wire  cpath_io_c2d_cp_mem_en; // @[core.scala 21:23]
  wire [2:0] cpath_io_c2d_cp_mem_read_op; // @[core.scala 21:23]
  wire [7:0] cpath_io_c2d_cp_mem_write_mask; // @[core.scala 21:23]
  wire  cpath_io_c2d_cp_mem_wen; // @[core.scala 21:23]
  wire [2:0] cpath_io_c2d_cp_alu_ext_sel; // @[core.scala 21:23]
  wire [1:0] cpath_io_c2d_cp_wb_sel; // @[core.scala 21:23]
  wire  cpath_io_c2d_hasexception; // @[core.scala 21:23]
  wire  cpath_io_c2d_shouldstall; // @[core.scala 21:23]
  wire [31:0] cpath_io_d2c_instr; // @[core.scala 21:23]
  wire  cpath_io_d2c_islt; // @[core.scala 21:23]
  wire  cpath_io_d2c_isltu; // @[core.scala 21:23]
  wire  cpath_io_d2c_iseq; // @[core.scala 21:23]
  wire  cpath_io_dmem_resp_valid; // @[core.scala 21:23]
  wire  cpath_io_c2d_cp_reg_wen_0; // @[core.scala 21:23]
  wire  mymem_clock; // @[core.scala 22:23]
  wire [31:0] mymem_io_ports_0_req_bits_addr; // @[core.scala 22:23]
  wire [63:0] mymem_io_ports_0_resp_bits_rdata; // @[core.scala 22:23]
  wire  mymem_io_ports_1_req_valid; // @[core.scala 22:23]
  wire [31:0] mymem_io_ports_1_req_bits_addr; // @[core.scala 22:23]
  wire [7:0] mymem_io_ports_1_req_bits_mask; // @[core.scala 22:23]
  wire [2:0] mymem_io_ports_1_req_bits_op; // @[core.scala 22:23]
  wire [63:0] mymem_io_ports_1_req_bits_wdata; // @[core.scala 22:23]
  wire  mymem_io_ports_1_req_bits_memen; // @[core.scala 22:23]
  wire  mymem_io_ports_1_req_bits_wen; // @[core.scala 22:23]
  wire  mymem_io_ports_1_resp_valid; // @[core.scala 22:23]
  wire [63:0] mymem_io_ports_1_resp_bits_rdata; // @[core.scala 22:23]
  Dpath dpath ( // @[core.scala 20:23]
    .clock(dpath_clock),
    .reset(dpath_reset),
    .io__c2d_cp_pc_sel(dpath_io__c2d_cp_pc_sel),
    .io__c2d_cp_op1_sel(dpath_io__c2d_cp_op1_sel),
    .io__c2d_cp_op2_sel(dpath_io__c2d_cp_op2_sel),
    .io__c2d_cp_alu_sel(dpath_io__c2d_cp_alu_sel),
    .io__c2d_cp_reg_wen(dpath_io__c2d_cp_reg_wen),
    .io__c2d_cp_mem_en(dpath_io__c2d_cp_mem_en),
    .io__c2d_cp_mem_read_op(dpath_io__c2d_cp_mem_read_op),
    .io__c2d_cp_mem_write_mask(dpath_io__c2d_cp_mem_write_mask),
    .io__c2d_cp_mem_wen(dpath_io__c2d_cp_mem_wen),
    .io__c2d_cp_alu_ext_sel(dpath_io__c2d_cp_alu_ext_sel),
    .io__c2d_cp_wb_sel(dpath_io__c2d_cp_wb_sel),
    .io__c2d_hasexception(dpath_io__c2d_hasexception),
    .io__c2d_shouldstall(dpath_io__c2d_shouldstall),
    .io__d2c_instr(dpath_io__d2c_instr),
    .io__d2c_islt(dpath_io__d2c_islt),
    .io__d2c_isltu(dpath_io__d2c_isltu),
    .io__d2c_iseq(dpath_io__d2c_iseq),
    .io__imem_req_bits_addr(dpath_io__imem_req_bits_addr),
    .io__imem_resp_bits_rdata(dpath_io__imem_resp_bits_rdata),
    .io__dmem_req_valid(dpath_io__dmem_req_valid),
    .io__dmem_req_bits_addr(dpath_io__dmem_req_bits_addr),
    .io__dmem_req_bits_mask(dpath_io__dmem_req_bits_mask),
    .io__dmem_req_bits_op(dpath_io__dmem_req_bits_op),
    .io__dmem_req_bits_wdata(dpath_io__dmem_req_bits_wdata),
    .io__dmem_req_bits_memen(dpath_io__dmem_req_bits_memen),
    .io__dmem_req_bits_wen(dpath_io__dmem_req_bits_wen),
    .io__dmem_resp_bits_rdata(dpath_io__dmem_resp_bits_rdata),
    .io_c2d_cp_reg_wen(dpath_io_c2d_cp_reg_wen),
    .reg_pc_0(dpath_reg_pc_0),
    ._T_41_0_0(dpath__T_41_0_0),
    ._T_41_0_1(dpath__T_41_0_1),
    ._T_41_0_2(dpath__T_41_0_2),
    ._T_41_0_3(dpath__T_41_0_3),
    ._T_41_0_4(dpath__T_41_0_4),
    ._T_41_0_5(dpath__T_41_0_5),
    ._T_41_0_6(dpath__T_41_0_6),
    ._T_41_0_7(dpath__T_41_0_7),
    ._T_41_0_8(dpath__T_41_0_8),
    ._T_41_0_9(dpath__T_41_0_9),
    ._T_41_0_10(dpath__T_41_0_10),
    ._T_41_0_11(dpath__T_41_0_11),
    ._T_41_0_12(dpath__T_41_0_12),
    ._T_41_0_13(dpath__T_41_0_13),
    ._T_41_0_14(dpath__T_41_0_14),
    ._T_41_0_15(dpath__T_41_0_15),
    ._T_41_0_16(dpath__T_41_0_16),
    ._T_41_0_17(dpath__T_41_0_17),
    ._T_41_0_18(dpath__T_41_0_18),
    ._T_41_0_19(dpath__T_41_0_19),
    ._T_41_0_20(dpath__T_41_0_20),
    ._T_41_0_21(dpath__T_41_0_21),
    ._T_41_0_22(dpath__T_41_0_22),
    ._T_41_0_23(dpath__T_41_0_23),
    ._T_41_0_24(dpath__T_41_0_24),
    ._T_41_0_25(dpath__T_41_0_25),
    ._T_41_0_26(dpath__T_41_0_26),
    ._T_41_0_27(dpath__T_41_0_27),
    ._T_41_0_28(dpath__T_41_0_28),
    ._T_41_0_29(dpath__T_41_0_29),
    ._T_41_0_30(dpath__T_41_0_30),
    ._T_41_0_31(dpath__T_41_0_31)
  );
  Cpath cpath ( // @[core.scala 21:23]
    .io_c2d_cp_pc_sel(cpath_io_c2d_cp_pc_sel),
    .io_c2d_cp_op1_sel(cpath_io_c2d_cp_op1_sel),
    .io_c2d_cp_op2_sel(cpath_io_c2d_cp_op2_sel),
    .io_c2d_cp_alu_sel(cpath_io_c2d_cp_alu_sel),
    .io_c2d_cp_reg_wen(cpath_io_c2d_cp_reg_wen),
    .io_c2d_cp_mem_en(cpath_io_c2d_cp_mem_en),
    .io_c2d_cp_mem_read_op(cpath_io_c2d_cp_mem_read_op),
    .io_c2d_cp_mem_write_mask(cpath_io_c2d_cp_mem_write_mask),
    .io_c2d_cp_mem_wen(cpath_io_c2d_cp_mem_wen),
    .io_c2d_cp_alu_ext_sel(cpath_io_c2d_cp_alu_ext_sel),
    .io_c2d_cp_wb_sel(cpath_io_c2d_cp_wb_sel),
    .io_c2d_hasexception(cpath_io_c2d_hasexception),
    .io_c2d_shouldstall(cpath_io_c2d_shouldstall),
    .io_d2c_instr(cpath_io_d2c_instr),
    .io_d2c_islt(cpath_io_d2c_islt),
    .io_d2c_isltu(cpath_io_d2c_isltu),
    .io_d2c_iseq(cpath_io_d2c_iseq),
    .io_dmem_resp_valid(cpath_io_dmem_resp_valid),
    .io_c2d_cp_reg_wen_0(cpath_io_c2d_cp_reg_wen_0)
  );
  memorymodule mymem ( // @[core.scala 22:23]
    .clock(mymem_clock),
    .io_ports_0_req_bits_addr(mymem_io_ports_0_req_bits_addr),
    .io_ports_0_resp_bits_rdata(mymem_io_ports_0_resp_bits_rdata),
    .io_ports_1_req_valid(mymem_io_ports_1_req_valid),
    .io_ports_1_req_bits_addr(mymem_io_ports_1_req_bits_addr),
    .io_ports_1_req_bits_mask(mymem_io_ports_1_req_bits_mask),
    .io_ports_1_req_bits_op(mymem_io_ports_1_req_bits_op),
    .io_ports_1_req_bits_wdata(mymem_io_ports_1_req_bits_wdata),
    .io_ports_1_req_bits_memen(mymem_io_ports_1_req_bits_memen),
    .io_ports_1_req_bits_wen(mymem_io_ports_1_req_bits_wen),
    .io_ports_1_resp_valid(mymem_io_ports_1_resp_valid),
    .io_ports_1_resp_bits_rdata(mymem_io_ports_1_resp_bits_rdata)
  );
  assign io_c2d_cp_reg_wen = dpath_io_c2d_cp_reg_wen;
  assign reg_pc = dpath_reg_pc_0;
  assign io_c2d_cp_reg_wen_0 = cpath_io_c2d_cp_reg_wen_0;
  assign _T_41_0 = dpath__T_41_0_0;
  assign _T_41_1 = dpath__T_41_0_1;
  assign _T_41_2 = dpath__T_41_0_2;
  assign _T_41_3 = dpath__T_41_0_3;
  assign _T_41_4 = dpath__T_41_0_4;
  assign _T_41_5 = dpath__T_41_0_5;
  assign _T_41_6 = dpath__T_41_0_6;
  assign _T_41_7 = dpath__T_41_0_7;
  assign _T_41_8 = dpath__T_41_0_8;
  assign _T_41_9 = dpath__T_41_0_9;
  assign _T_41_10 = dpath__T_41_0_10;
  assign _T_41_11 = dpath__T_41_0_11;
  assign _T_41_12 = dpath__T_41_0_12;
  assign _T_41_13 = dpath__T_41_0_13;
  assign _T_41_14 = dpath__T_41_0_14;
  assign _T_41_15 = dpath__T_41_0_15;
  assign _T_41_16 = dpath__T_41_0_16;
  assign _T_41_17 = dpath__T_41_0_17;
  assign _T_41_18 = dpath__T_41_0_18;
  assign _T_41_19 = dpath__T_41_0_19;
  assign _T_41_20 = dpath__T_41_0_20;
  assign _T_41_21 = dpath__T_41_0_21;
  assign _T_41_22 = dpath__T_41_0_22;
  assign _T_41_23 = dpath__T_41_0_23;
  assign _T_41_24 = dpath__T_41_0_24;
  assign _T_41_25 = dpath__T_41_0_25;
  assign _T_41_26 = dpath__T_41_0_26;
  assign _T_41_27 = dpath__T_41_0_27;
  assign _T_41_28 = dpath__T_41_0_28;
  assign _T_41_29 = dpath__T_41_0_29;
  assign _T_41_30 = dpath__T_41_0_30;
  assign _T_41_31 = dpath__T_41_0_31;
  assign dpath_clock = clock;
  assign dpath_reset = reset;
  assign dpath_io__c2d_cp_pc_sel = cpath_io_c2d_cp_pc_sel; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_op1_sel = cpath_io_c2d_cp_op1_sel; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_op2_sel = cpath_io_c2d_cp_op2_sel; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_alu_sel = cpath_io_c2d_cp_alu_sel; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_reg_wen = cpath_io_c2d_cp_reg_wen; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_mem_en = cpath_io_c2d_cp_mem_en; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_mem_read_op = cpath_io_c2d_cp_mem_read_op; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_mem_write_mask = cpath_io_c2d_cp_mem_write_mask; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_mem_wen = cpath_io_c2d_cp_mem_wen; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_alu_ext_sel = cpath_io_c2d_cp_alu_ext_sel; // @[core.scala 25:18]
  assign dpath_io__c2d_cp_wb_sel = cpath_io_c2d_cp_wb_sel; // @[core.scala 25:18]
  assign dpath_io__c2d_hasexception = cpath_io_c2d_hasexception; // @[core.scala 25:18]
  assign dpath_io__c2d_shouldstall = cpath_io_c2d_shouldstall; // @[core.scala 25:18]
  assign dpath_io__imem_resp_bits_rdata = mymem_io_ports_0_resp_bits_rdata; // @[core.scala 41:23]
  assign dpath_io__dmem_resp_bits_rdata = mymem_io_ports_1_resp_bits_rdata; // @[core.scala 44:23]
  assign cpath_io_d2c_instr = dpath_io__d2c_instr; // @[core.scala 26:18]
  assign cpath_io_d2c_islt = dpath_io__d2c_islt; // @[core.scala 26:18]
  assign cpath_io_d2c_isltu = dpath_io__d2c_isltu; // @[core.scala 26:18]
  assign cpath_io_d2c_iseq = dpath_io__d2c_iseq; // @[core.scala 26:18]
  assign cpath_io_dmem_resp_valid = mymem_io_ports_1_resp_valid; // @[core.scala 45:30]
  assign mymem_clock = clock;
  assign mymem_io_ports_0_req_bits_addr = dpath_io__imem_req_bits_addr; // @[core.scala 41:23]
  assign mymem_io_ports_1_req_valid = dpath_io__dmem_req_valid; // @[core.scala 44:23]
  assign mymem_io_ports_1_req_bits_addr = dpath_io__dmem_req_bits_addr; // @[core.scala 44:23]
  assign mymem_io_ports_1_req_bits_mask = dpath_io__dmem_req_bits_mask; // @[core.scala 44:23]
  assign mymem_io_ports_1_req_bits_op = dpath_io__dmem_req_bits_op; // @[core.scala 44:23]
  assign mymem_io_ports_1_req_bits_wdata = dpath_io__dmem_req_bits_wdata; // @[core.scala 44:23]
  assign mymem_io_ports_1_req_bits_memen = dpath_io__dmem_req_bits_memen; // @[core.scala 44:23]
  assign mymem_io_ports_1_req_bits_wen = dpath_io__dmem_req_bits_wen; // @[core.scala 44:23]
endmodule
module top(
  input         clock,
  input         reset,
  output [63:0] io_diff_r_0,
  output [63:0] io_diff_r_1,
  output [63:0] io_diff_r_2,
  output [63:0] io_diff_r_3,
  output [63:0] io_diff_r_4,
  output [63:0] io_diff_r_5,
  output [63:0] io_diff_r_6,
  output [63:0] io_diff_r_7,
  output [63:0] io_diff_r_8,
  output [63:0] io_diff_r_9,
  output [63:0] io_diff_r_10,
  output [63:0] io_diff_r_11,
  output [63:0] io_diff_r_12,
  output [63:0] io_diff_r_13,
  output [63:0] io_diff_r_14,
  output [63:0] io_diff_r_15,
  output [63:0] io_diff_r_16,
  output [63:0] io_diff_r_17,
  output [63:0] io_diff_r_18,
  output [63:0] io_diff_r_19,
  output [63:0] io_diff_r_20,
  output [63:0] io_diff_r_21,
  output [63:0] io_diff_r_22,
  output [63:0] io_diff_r_23,
  output [63:0] io_diff_r_24,
  output [63:0] io_diff_r_25,
  output [63:0] io_diff_r_26,
  output [63:0] io_diff_r_27,
  output [63:0] io_diff_r_28,
  output [63:0] io_diff_r_29,
  output [63:0] io_diff_r_30,
  output [63:0] io_diff_r_31,
  output [63:0] io_diff_pc_data,
  output        io_diff_rf_wen,
  output        io_diff_rf_cp_wen
);
  wire  mycore_clock; // @[top.scala 20:24]
  wire  mycore_reset; // @[top.scala 20:24]
  wire  mycore_io_c2d_cp_reg_wen; // @[top.scala 20:24]
  wire [63:0] mycore_reg_pc; // @[top.scala 20:24]
  wire  mycore_io_c2d_cp_reg_wen_0; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_0; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_1; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_2; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_3; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_4; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_5; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_6; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_7; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_8; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_9; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_10; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_11; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_12; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_13; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_14; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_15; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_16; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_17; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_18; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_19; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_20; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_21; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_22; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_23; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_24; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_25; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_26; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_27; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_28; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_29; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_30; // @[top.scala 20:24]
  wire [63:0] mycore__T_41_31; // @[top.scala 20:24]
  core mycore ( // @[top.scala 20:24]
    .clock(mycore_clock),
    .reset(mycore_reset),
    .io_c2d_cp_reg_wen(mycore_io_c2d_cp_reg_wen),
    .reg_pc(mycore_reg_pc),
    .io_c2d_cp_reg_wen_0(mycore_io_c2d_cp_reg_wen_0),
    ._T_41_0(mycore__T_41_0),
    ._T_41_1(mycore__T_41_1),
    ._T_41_2(mycore__T_41_2),
    ._T_41_3(mycore__T_41_3),
    ._T_41_4(mycore__T_41_4),
    ._T_41_5(mycore__T_41_5),
    ._T_41_6(mycore__T_41_6),
    ._T_41_7(mycore__T_41_7),
    ._T_41_8(mycore__T_41_8),
    ._T_41_9(mycore__T_41_9),
    ._T_41_10(mycore__T_41_10),
    ._T_41_11(mycore__T_41_11),
    ._T_41_12(mycore__T_41_12),
    ._T_41_13(mycore__T_41_13),
    ._T_41_14(mycore__T_41_14),
    ._T_41_15(mycore__T_41_15),
    ._T_41_16(mycore__T_41_16),
    ._T_41_17(mycore__T_41_17),
    ._T_41_18(mycore__T_41_18),
    ._T_41_19(mycore__T_41_19),
    ._T_41_20(mycore__T_41_20),
    ._T_41_21(mycore__T_41_21),
    ._T_41_22(mycore__T_41_22),
    ._T_41_23(mycore__T_41_23),
    ._T_41_24(mycore__T_41_24),
    ._T_41_25(mycore__T_41_25),
    ._T_41_26(mycore__T_41_26),
    ._T_41_27(mycore__T_41_27),
    ._T_41_28(mycore__T_41_28),
    ._T_41_29(mycore__T_41_29),
    ._T_41_30(mycore__T_41_30),
    ._T_41_31(mycore__T_41_31)
  );
  assign io_diff_r_0 = mycore__T_41_0; // @[top.scala 29:13]
  assign io_diff_r_1 = mycore__T_41_1; // @[top.scala 29:13]
  assign io_diff_r_2 = mycore__T_41_2; // @[top.scala 29:13]
  assign io_diff_r_3 = mycore__T_41_3; // @[top.scala 29:13]
  assign io_diff_r_4 = mycore__T_41_4; // @[top.scala 29:13]
  assign io_diff_r_5 = mycore__T_41_5; // @[top.scala 29:13]
  assign io_diff_r_6 = mycore__T_41_6; // @[top.scala 29:13]
  assign io_diff_r_7 = mycore__T_41_7; // @[top.scala 29:13]
  assign io_diff_r_8 = mycore__T_41_8; // @[top.scala 29:13]
  assign io_diff_r_9 = mycore__T_41_9; // @[top.scala 29:13]
  assign io_diff_r_10 = mycore__T_41_10; // @[top.scala 29:13]
  assign io_diff_r_11 = mycore__T_41_11; // @[top.scala 29:13]
  assign io_diff_r_12 = mycore__T_41_12; // @[top.scala 29:13]
  assign io_diff_r_13 = mycore__T_41_13; // @[top.scala 29:13]
  assign io_diff_r_14 = mycore__T_41_14; // @[top.scala 29:13]
  assign io_diff_r_15 = mycore__T_41_15; // @[top.scala 29:13]
  assign io_diff_r_16 = mycore__T_41_16; // @[top.scala 29:13]
  assign io_diff_r_17 = mycore__T_41_17; // @[top.scala 29:13]
  assign io_diff_r_18 = mycore__T_41_18; // @[top.scala 29:13]
  assign io_diff_r_19 = mycore__T_41_19; // @[top.scala 29:13]
  assign io_diff_r_20 = mycore__T_41_20; // @[top.scala 29:13]
  assign io_diff_r_21 = mycore__T_41_21; // @[top.scala 29:13]
  assign io_diff_r_22 = mycore__T_41_22; // @[top.scala 29:13]
  assign io_diff_r_23 = mycore__T_41_23; // @[top.scala 29:13]
  assign io_diff_r_24 = mycore__T_41_24; // @[top.scala 29:13]
  assign io_diff_r_25 = mycore__T_41_25; // @[top.scala 29:13]
  assign io_diff_r_26 = mycore__T_41_26; // @[top.scala 29:13]
  assign io_diff_r_27 = mycore__T_41_27; // @[top.scala 29:13]
  assign io_diff_r_28 = mycore__T_41_28; // @[top.scala 29:13]
  assign io_diff_r_29 = mycore__T_41_29; // @[top.scala 29:13]
  assign io_diff_r_30 = mycore__T_41_30; // @[top.scala 29:13]
  assign io_diff_r_31 = mycore__T_41_31; // @[top.scala 29:13]
  assign io_diff_pc_data = mycore_reg_pc; // @[top.scala 29:13]
  assign io_diff_rf_wen = mycore_io_c2d_cp_reg_wen; // @[top.scala 29:13]
  assign io_diff_rf_cp_wen = mycore_io_c2d_cp_reg_wen_0; // @[top.scala 29:13]
  assign mycore_clock = clock;
  assign mycore_reset = reset;
endmodule

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
  $readmemh("./test1.txt", memorymodule.mem);
end
                      endmodule

bind memorymodule BindsTo_0_memorymodule BindsTo_0_memorymodule_Inst(.*);