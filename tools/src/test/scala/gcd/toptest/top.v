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
module MDU(
  input         clock,
  input         reset,
  input  [63:0] io__op1,
  input  [63:0] io__op2,
  input  [4:0]  io__op,
  input         io__en,
  input         io__result_got,
  output [63:0] io__result,
  output        io__finish,
  output        io__exe_stall,
  output [63:0] _T_111_0,
  output [63:0] abs_op1_0,
  output        io_exe_stall,
  output        io_exe_stall_0,
  output [63:0] _T_110_0,
  output [63:0] abs_op2_0
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [127:0] _RAND_3;
  reg [127:0] _RAND_4;
  reg [63:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  wire  _T = io__op == 5'hd; // @[alu.scala 143:28]
  wire  _T_1 = io__op == 5'he; // @[alu.scala 143:49]
  wire  _T_2 = _T | _T_1; // @[alu.scala 143:40]
  wire  _T_3 = io__op == 5'hf; // @[alu.scala 143:71]
  wire  _T_4 = _T_2 | _T_3; // @[alu.scala 143:62]
  wire  _T_5 = io__op == 5'h10; // @[alu.scala 143:95]
  wire  _T_6 = _T_4 | _T_5; // @[alu.scala 143:86]
  wire  _T_7 = io__op == 5'h14; // @[alu.scala 143:118]
  wire  _T_8 = _T_6 | _T_7; // @[alu.scala 143:109]
  wire  _T_9 = io__op == 5'h11; // @[alu.scala 143:140]
  wire  _T_10 = _T_8 | _T_9; // @[alu.scala 143:131]
  wire  _T_11 = io__op == 5'h12; // @[alu.scala 143:161]
  wire  _T_12 = _T_10 | _T_11; // @[alu.scala 143:152]
  wire  _T_13 = io__op == 5'h13; // @[alu.scala 143:183]
  wire  _T_14 = _T_12 | _T_13; // @[alu.scala 143:174]
  wire  _T_15 = io__op == 5'h15; // @[alu.scala 143:206]
  wire  _T_16 = _T_14 | _T_15; // @[alu.scala 143:197]
  wire  _T_17 = io__op == 5'h16; // @[alu.scala 143:227]
  wire  _T_18 = _T_16 | _T_17; // @[alu.scala 143:218]
  wire  _T_19 = io__op == 5'h17; // @[alu.scala 143:249]
  wire  _T_20 = _T_18 | _T_19; // @[alu.scala 143:240]
  wire  _T_21 = io__op == 5'h18; // @[alu.scala 143:272]
  wire  is_mdu_op = _T_20 | _T_21; // @[alu.scala 143:263]
  wire  _T_24 = _T_7 | _T_13; // @[alu.scala 145:43]
  wire  _T_27 = _T_21 | _T_19; // @[alu.scala 145:90]
  wire  op1_is_word = _T_24 | _T_27; // @[alu.scala 145:67]
  wire  _T_41 = _T_9 | _T_7; // @[alu.scala 151:113]
  wire  _T_42 = _T_4 | _T_41; // @[alu.scala 151:91]
  wire  _T_45 = _T_15 | _T_21; // @[alu.scala 151:158]
  wire  op1_is_signed = _T_42 | _T_45; // @[alu.scala 151:136]
  wire  _T_52 = _T_2 | _T_41; // @[alu.scala 154:67]
  wire  op2_is_signed = _T_52 | _T_45; // @[alu.scala 154:112]
  wire  _T_56 = ~op1_is_word; // @[alu.scala 157:27]
  wire  _T_59 = op1_is_signed & io__op1[63]; // @[alu.scala 158:26]
  wire  _T_62 = op1_is_signed & io__op1[31]; // @[alu.scala 159:26]
  wire  op1_is_neg = _T_56 ? _T_59 : _T_62; // @[alu.scala 157:26]
  wire  _T_66 = op2_is_signed & io__op2[63]; // @[alu.scala 163:26]
  wire  _T_69 = op2_is_signed & io__op2[31]; // @[alu.scala 164:26]
  wire  op2_is_neg = _T_56 ? _T_66 : _T_69; // @[alu.scala 162:26]
  wire  _T_70 = op1_is_neg == op2_is_neg; // @[alu.scala 166:36]
  wire  sign_change = ~_T_70; // @[alu.scala 166:23]
  wire [63:0] _T_72 = ~io__op1; // @[alu.scala 169:52]
  wire [63:0] _T_74 = _T_72 + 64'h1; // @[alu.scala 169:63]
  wire [63:0] _T_77 = op1_is_neg ? _T_74 : io__op1; // @[alu.scala 169:39]
  wire [31:0] _T_79 = ~io__op1[31:0]; // @[alu.scala 169:120]
  wire [31:0] _T_81 = _T_79 + 32'h1; // @[alu.scala 169:137]
  wire [63:0] _T_83 = {32'h0,_T_81}; // @[Cat.scala 29:58]
  wire [63:0] _T_85 = {32'h0,io__op1[31:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_86 = op1_is_neg ? _T_83 : _T_85; // @[alu.scala 169:93]
  wire [63:0] abs_op1 = _T_56 ? _T_77 : _T_86; // @[alu.scala 169:22]
  wire [63:0] _T_88 = ~io__op2; // @[alu.scala 171:52]
  wire [63:0] _T_90 = _T_88 + 64'h1; // @[alu.scala 171:63]
  wire [63:0] _T_93 = op2_is_neg ? _T_90 : io__op2; // @[alu.scala 171:39]
  wire [31:0] _T_95 = ~io__op2[31:0]; // @[alu.scala 171:120]
  wire [31:0] _T_97 = _T_95 + 32'h1; // @[alu.scala 171:137]
  wire [63:0] _T_99 = {32'h0,_T_97}; // @[Cat.scala 29:58]
  wire [63:0] _T_101 = {32'h0,io__op2[31:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_102 = op2_is_neg ? _T_99 : _T_101; // @[alu.scala 171:93]
  wire [63:0] abs_op2 = _T_56 ? _T_93 : _T_102; // @[alu.scala 171:22]
  wire  _T_109 = ~_T_6; // @[alu.scala 174:34]
  wire  is_div_op = is_mdu_op & _T_109; // @[alu.scala 174:31]
  reg [1:0] mdu_state; // @[alu.scala 178:28]
  reg [6:0] exe_cycles; // @[alu.scala 179:29]
  reg [127:0] mul_result; // @[alu.scala 181:29]
  reg [127:0] rem_result; // @[alu.scala 182:29]
  reg [127:0] div_op2; // @[alu.scala 183:26]
  reg [63:0] div_result; // @[alu.scala 184:29]
  wire [63:0] _T_110 = mul_result[127:64]; // @[alu.scala 187:37]
  wire [63:0] _T_111 = mul_result[63:0]; // @[alu.scala 188:37]
  wire  _T_112 = ~io__finish; // @[alu.scala 192:30]
  wire  _T_114 = 2'h0 == mdu_state; // @[Conditional.scala 37:30]
  wire [127:0] _T_115 = {64'h0,abs_op2}; // @[Cat.scala 29:58]
  wire [127:0] _T_116 = {64'h0,abs_op1}; // @[Cat.scala 29:58]
  wire [127:0] _T_117 = {abs_op2,64'h0}; // @[Cat.scala 29:58]
  wire [63:0] _GEN_5 = io__en ? 64'h0 : div_result; // @[alu.scala 227:13]
  wire  _T_118 = 2'h1 == mdu_state; // @[Conditional.scala 37:30]
  wire [6:0] _T_120 = exe_cycles - 7'h1; // @[alu.scala 242:38]
  wire [64:0] _T_124 = abs_op1 + mul_result[127:64]; // @[alu.scala 197:40]
  wire [127:0] _T_126 = {_T_124,mul_result[63:1]}; // @[Cat.scala 29:58]
  wire [127:0] _T_129 = {1'h0,mul_result[127:1]}; // @[Cat.scala 29:58]
  wire  _T_130 = rem_result >= div_op2; // @[alu.scala 208:25]
  wire [127:0] _T_132 = rem_result - div_op2; // @[alu.scala 210:38]
  wire [64:0] _T_133 = {div_result, 1'h0}; // @[alu.scala 211:39]
  wire [64:0] _T_135 = _T_133 + 65'h1; // @[alu.scala 211:45]
  wire [64:0] _GEN_8 = _T_130 ? _T_135 : _T_133; // @[alu.scala 209:9]
  wire [127:0] _T_138 = {1'h0,div_op2[127:1]}; // @[Cat.scala 29:58]
  wire [64:0] _GEN_10 = is_div_op ? _GEN_8 : {{1'd0}, div_result}; // @[alu.scala 248:13]
  wire [64:0] _GEN_14 = _T_6 ? {{1'd0}, div_result} : _GEN_10; // @[alu.scala 245:13]
  wire  _T_139 = exe_cycles == 7'h1; // @[alu.scala 252:29]
  wire  _T_140 = _T_139 & _T_6; // @[alu.scala 252:37]
  wire  _T_141 = exe_cycles == 7'h0; // @[alu.scala 257:29]
  wire  _T_142 = _T_141 & is_div_op; // @[alu.scala 257:37]
  wire  _T_143 = 2'h2 == mdu_state; // @[Conditional.scala 37:30]
  wire [127:0] _T_146 = ~mul_result; // @[alu.scala 267:61]
  wire [127:0] _T_148 = _T_146 + 128'h1; // @[alu.scala 267:73]
  wire [63:0] _T_151 = sign_change ? _T_148[63:0] : mul_result[63:0]; // @[alu.scala 267:47]
  wire [63:0] _T_158 = sign_change ? _T_148[127:64] : mul_result[127:64]; // @[alu.scala 268:47]
  wire [63:0] _T_183 = ~div_result; // @[alu.scala 282:61]
  wire [63:0] _T_185 = _T_183 + 64'h1; // @[alu.scala 282:80]
  wire [63:0] _T_187 = sign_change ? _T_185 : div_result; // @[alu.scala 282:47]
  wire [63:0] _T_209 = _T_21 ? _T_187 : mul_result[63:0]; // @[Mux.scala 98:16]
  wire [63:0] _T_210 = _T_19 ? _T_187 : _T_209; // @[Mux.scala 98:16]
  wire [63:0] _T_211 = _T_17 ? _T_187 : _T_210; // @[Mux.scala 98:16]
  wire [63:0] _T_212 = _T_15 ? _T_187 : _T_211; // @[Mux.scala 98:16]
  wire [63:0] _T_213 = _T_7 ? rem_result[63:0] : _T_212; // @[Mux.scala 98:16]
  wire [63:0] _T_214 = _T_13 ? rem_result[63:0] : _T_213; // @[Mux.scala 98:16]
  wire [63:0] _T_215 = _T_11 ? rem_result[63:0] : _T_214; // @[Mux.scala 98:16]
  wire [63:0] _T_216 = _T_9 ? rem_result[63:0] : _T_215; // @[Mux.scala 98:16]
  wire [63:0] _T_217 = _T_5 ? _T_158 : _T_216; // @[Mux.scala 98:16]
  wire [63:0] _T_218 = _T_3 ? _T_158 : _T_217; // @[Mux.scala 98:16]
  wire [63:0] _T_219 = _T_1 ? _T_158 : _T_218; // @[Mux.scala 98:16]
  wire [63:0] _T_220 = _T ? _T_151 : _T_219; // @[Mux.scala 98:16]
  wire [63:0] _GEN_20 = _T_143 ? _T_220 : 64'h0; // @[Conditional.scala 39:67]
  wire [63:0] _GEN_30 = _T_118 ? 64'h0 : _GEN_20; // @[Conditional.scala 39:67]
  wire  _GEN_23 = _T_118 ? 1'h0 : 1'h1; // @[Conditional.scala 39:67]
  wire [64:0] _GEN_27 = _T_118 ? _GEN_14 : {{1'd0}, div_result}; // @[Conditional.scala 39:67]
  wire [64:0] _GEN_38 = _T_114 ? {{1'd0}, _GEN_5} : _GEN_27; // @[Conditional.scala 40:58]
  assign io__result = _T_114 ? 64'h0 : _GEN_30; // @[alu.scala 288:23]
  assign io__finish = _T_114 ? 1'h0 : _GEN_23; // @[alu.scala 224:23 alu.scala 240:23 alu.scala 264:23]
  assign io__exe_stall = io__en & _T_112; // @[alu.scala 192:18]
  assign _T_111_0 = mul_result[63:0];
  assign abs_op1_0 = abs_op1;
  assign io_exe_stall = io__exe_stall;
  assign io_exe_stall_0 = io__exe_stall;
  assign _T_110_0 = mul_result[127:64];
  assign abs_op2_0 = abs_op2;
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
  _RAND_0 = {1{`RANDOM}};
  mdu_state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  exe_cycles = _RAND_1[6:0];
  _RAND_2 = {4{`RANDOM}};
  mul_result = _RAND_2[127:0];
  _RAND_3 = {4{`RANDOM}};
  rem_result = _RAND_3[127:0];
  _RAND_4 = {4{`RANDOM}};
  div_op2 = _RAND_4[127:0];
  _RAND_5 = {2{`RANDOM}};
  div_result = _RAND_5[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      mdu_state <= 2'h0;
    end else if (_T_114) begin
      if (io__en) begin
        mdu_state <= 2'h1;
      end
    end else if (_T_118) begin
      if (_T_142) begin
        mdu_state <= 2'h2;
      end else if (_T_140) begin
        mdu_state <= 2'h2;
      end
    end else if (_T_143) begin
      if (io__result_got) begin
        mdu_state <= 2'h0;
      end
    end
    if (reset) begin
      exe_cycles <= 7'h40;
    end else if (_T_114) begin
      if (io__en) begin
        exe_cycles <= 7'h40;
      end
    end else if (_T_118) begin
      exe_cycles <= _T_120;
    end
    if (reset) begin
      mul_result <= 128'h0;
    end else if (_T_114) begin
      if (io__en) begin
        mul_result <= _T_115;
      end
    end else if (_T_118) begin
      if (_T_6) begin
        if (mul_result[0]) begin
          mul_result <= _T_126;
        end else begin
          mul_result <= _T_129;
        end
      end
    end
    if (reset) begin
      rem_result <= 128'h0;
    end else if (_T_114) begin
      if (io__en) begin
        rem_result <= _T_116;
      end
    end else if (_T_118) begin
      if (!(_T_6)) begin
        if (is_div_op) begin
          if (_T_130) begin
            rem_result <= _T_132;
          end
        end
      end
    end
    if (reset) begin
      div_op2 <= 128'h0;
    end else if (_T_114) begin
      if (io__en) begin
        div_op2 <= _T_117;
      end
    end else if (_T_118) begin
      if (!(_T_6)) begin
        if (is_div_op) begin
          div_op2 <= _T_138;
        end
      end
    end
    if (reset) begin
      div_result <= 64'h0;
    end else begin
      div_result <= _GEN_38[63:0];
    end
  end
endmodule
module alu_module(
  input         clock,
  input         reset,
  input  [63:0] io_input1,
  input  [63:0] io_input2,
  input  [4:0]  io_op,
  input  [2:0]  io_res_ext_op,
  input         io_pipeline_stall,
  output [63:0] io_res,
  output [63:0] _T_111_0,
  output [63:0] abs_op1,
  output        io_exe_stall,
  output        io_exe_stall_0,
  output [63:0] _T_110_0,
  output [63:0] abs_op2
);
  wire  mdu_clock; // @[alu.scala 35:21]
  wire  mdu_reset; // @[alu.scala 35:21]
  wire [63:0] mdu_io__op1; // @[alu.scala 35:21]
  wire [63:0] mdu_io__op2; // @[alu.scala 35:21]
  wire [4:0] mdu_io__op; // @[alu.scala 35:21]
  wire  mdu_io__en; // @[alu.scala 35:21]
  wire  mdu_io__result_got; // @[alu.scala 35:21]
  wire [63:0] mdu_io__result; // @[alu.scala 35:21]
  wire  mdu_io__finish; // @[alu.scala 35:21]
  wire  mdu_io__exe_stall; // @[alu.scala 35:21]
  wire [63:0] mdu__T_111_0; // @[alu.scala 35:21]
  wire [63:0] mdu_abs_op1_0; // @[alu.scala 35:21]
  wire  mdu_io_exe_stall; // @[alu.scala 35:21]
  wire  mdu_io_exe_stall_0; // @[alu.scala 35:21]
  wire [63:0] mdu__T_110_0; // @[alu.scala 35:21]
  wire [63:0] mdu_abs_op2_0; // @[alu.scala 35:21]
  wire [63:0] add_res = io_input1 + io_input2; // @[alu.scala 31:26]
  wire [5:0] sham = io_input2[5:0]; // @[alu.scala 33:25]
  wire [63:0] sub_res = io_input1 - io_input2; // @[alu.scala 53:27]
  wire [63:0] and_res = io_input1 & io_input2; // @[alu.scala 54:27]
  wire [63:0] or_res = io_input1 | io_input2; // @[alu.scala 55:26]
  wire [63:0] xor_res = io_input1 ^ io_input2; // @[alu.scala 56:27]
  wire [126:0] _GEN_0 = {{63'd0}, io_input1}; // @[alu.scala 57:28]
  wire [126:0] _T_7 = _GEN_0 << sham; // @[alu.scala 57:28]
  wire [63:0] sll_res = _T_7[63:0]; // @[alu.scala 57:36]
  wire [94:0] _GEN_1 = {{31'd0}, io_input1}; // @[alu.scala 58:29]
  wire [94:0] _T_10 = _GEN_1 << sham[4:0]; // @[alu.scala 58:29]
  wire [63:0] sllw_res = _T_10[63:0]; // @[alu.scala 58:42]
  wire  _T_14 = $signed(io_input1) < $signed(io_input2); // @[alu.scala 59:36]
  wire  _T_15 = io_input1 < io_input2; // @[alu.scala 60:37]
  wire [63:0] sra_res = $signed(io_input1) >>> sham; // @[alu.scala 61:52]
  wire [31:0] _T_20 = io_input1[31:0]; // @[alu.scala 62:41]
  wire [31:0] _T_23 = $signed(_T_20) >>> sham[4:0]; // @[alu.scala 62:64]
  wire [63:0] srl_res = io_input1 >> sham; // @[alu.scala 63:37]
  wire [31:0] _T_27 = io_input1[31:0] >> sham[4:0]; // @[alu.scala 64:44]
  wire  _T_28 = io_op == 5'hd; // @[alu.scala 69:25]
  wire  _T_29 = io_op == 5'he; // @[alu.scala 69:46]
  wire  _T_30 = _T_28 | _T_29; // @[alu.scala 69:37]
  wire  _T_31 = io_op == 5'hf; // @[alu.scala 69:68]
  wire  _T_32 = _T_30 | _T_31; // @[alu.scala 69:59]
  wire  _T_33 = io_op == 5'h10; // @[alu.scala 69:92]
  wire  _T_34 = _T_32 | _T_33; // @[alu.scala 69:83]
  wire  _T_35 = io_op == 5'h11; // @[alu.scala 69:115]
  wire  _T_36 = _T_34 | _T_35; // @[alu.scala 69:106]
  wire  _T_37 = io_op == 5'h12; // @[alu.scala 69:136]
  wire  _T_38 = _T_36 | _T_37; // @[alu.scala 69:127]
  wire  _T_39 = io_op == 5'h13; // @[alu.scala 69:158]
  wire  _T_40 = _T_38 | _T_39; // @[alu.scala 69:149]
  wire  _T_41 = io_op == 5'h14; // @[alu.scala 69:181]
  wire  _T_42 = _T_40 | _T_41; // @[alu.scala 69:172]
  wire  _T_43 = io_op == 5'h15; // @[alu.scala 69:203]
  wire  _T_44 = _T_42 | _T_43; // @[alu.scala 69:194]
  wire  _T_45 = io_op == 5'h16; // @[alu.scala 69:224]
  wire  _T_46 = _T_44 | _T_45; // @[alu.scala 69:215]
  wire  _T_47 = io_op == 5'h17; // @[alu.scala 69:246]
  wire  _T_48 = _T_46 | _T_47; // @[alu.scala 69:237]
  wire  _T_49 = io_op == 5'h18; // @[alu.scala 69:269]
  wire  _T_51 = mdu_io__en & mdu_io__finish; // @[alu.scala 78:36]
  wire  _T_52 = ~io_pipeline_stall; // @[alu.scala 78:56]
  wire  _T_54 = io_op == 5'h0; // @[alu.scala 81:16]
  wire  _T_55 = io_op == 5'h1; // @[alu.scala 82:16]
  wire  _T_56 = io_op == 5'h2; // @[alu.scala 83:16]
  wire  _T_57 = io_op == 5'h3; // @[alu.scala 84:16]
  wire  _T_58 = io_op == 5'h4; // @[alu.scala 85:16]
  wire  _T_59 = io_op == 5'h5; // @[alu.scala 86:16]
  wire  _T_60 = io_op == 5'h19; // @[alu.scala 87:16]
  wire  _T_61 = io_op == 5'h6; // @[alu.scala 88:16]
  wire  _T_62 = io_op == 5'h7; // @[alu.scala 89:16]
  wire  _T_63 = io_op == 5'h8; // @[alu.scala 90:16]
  wire  _T_64 = io_op == 5'h9; // @[alu.scala 91:16]
  wire  _T_65 = io_op == 5'ha; // @[alu.scala 92:16]
  wire  _T_66 = io_op == 5'hb; // @[alu.scala 93:16]
  wire  _T_67 = io_op == 5'hc; // @[alu.scala 94:16]
  wire [63:0] _T_80 = _T_49 ? mdu_io__result : add_res; // @[Mux.scala 98:16]
  wire [63:0] _T_81 = _T_47 ? mdu_io__result : _T_80; // @[Mux.scala 98:16]
  wire [63:0] _T_82 = _T_45 ? mdu_io__result : _T_81; // @[Mux.scala 98:16]
  wire [63:0] _T_83 = _T_43 ? mdu_io__result : _T_82; // @[Mux.scala 98:16]
  wire [63:0] _T_84 = _T_41 ? mdu_io__result : _T_83; // @[Mux.scala 98:16]
  wire [63:0] _T_85 = _T_39 ? mdu_io__result : _T_84; // @[Mux.scala 98:16]
  wire [63:0] _T_86 = _T_37 ? mdu_io__result : _T_85; // @[Mux.scala 98:16]
  wire [63:0] _T_87 = _T_35 ? mdu_io__result : _T_86; // @[Mux.scala 98:16]
  wire [63:0] _T_88 = _T_33 ? mdu_io__result : _T_87; // @[Mux.scala 98:16]
  wire [63:0] _T_89 = _T_31 ? mdu_io__result : _T_88; // @[Mux.scala 98:16]
  wire [63:0] _T_90 = _T_29 ? mdu_io__result : _T_89; // @[Mux.scala 98:16]
  wire [63:0] _T_91 = _T_28 ? mdu_io__result : _T_90; // @[Mux.scala 98:16]
  wire [63:0] _T_92 = _T_67 ? io_input1 : _T_91; // @[Mux.scala 98:16]
  wire [63:0] srlw_res = {{32'd0}, _T_27}; // @[alu.scala 50:24 alu.scala 64:14]
  wire [63:0] _T_93 = _T_66 ? srlw_res : _T_92; // @[Mux.scala 98:16]
  wire [63:0] _T_94 = _T_65 ? srl_res : _T_93; // @[Mux.scala 98:16]
  wire [63:0] sraw_res = {{32'd0}, _T_23}; // @[alu.scala 48:24 alu.scala 62:14]
  wire [63:0] _T_95 = _T_64 ? sraw_res : _T_94; // @[Mux.scala 98:16]
  wire [63:0] _T_96 = _T_63 ? sra_res : _T_95; // @[Mux.scala 98:16]
  wire [63:0] sltu_res = {{63'd0}, _T_15}; // @[alu.scala 46:24 alu.scala 60:14]
  wire [63:0] _T_97 = _T_62 ? sltu_res : _T_96; // @[Mux.scala 98:16]
  wire [63:0] slt_res = {{63'd0}, _T_14}; // @[alu.scala 45:23 alu.scala 59:13]
  wire [63:0] _T_98 = _T_61 ? slt_res : _T_97; // @[Mux.scala 98:16]
  wire [63:0] _T_99 = _T_60 ? sllw_res : _T_98; // @[Mux.scala 98:16]
  wire [63:0] _T_100 = _T_59 ? sll_res : _T_99; // @[Mux.scala 98:16]
  wire [63:0] _T_101 = _T_58 ? xor_res : _T_100; // @[Mux.scala 98:16]
  wire [63:0] _T_102 = _T_57 ? or_res : _T_101; // @[Mux.scala 98:16]
  wire [63:0] _T_103 = _T_56 ? and_res : _T_102; // @[Mux.scala 98:16]
  wire [63:0] _T_104 = _T_55 ? sub_res : _T_103; // @[Mux.scala 98:16]
  wire [63:0] res_temp = _T_54 ? add_res : _T_104; // @[Mux.scala 98:16]
  wire  _T_106 = io_res_ext_op == 3'h0; // @[alu.scala 111:24]
  wire  _T_107 = io_res_ext_op == 3'h1; // @[alu.scala 112:24]
  wire [55:0] _T_110 = res_temp[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_112 = {_T_110,res_temp[7:0]}; // @[Cat.scala 29:58]
  wire  _T_113 = io_res_ext_op == 3'h2; // @[alu.scala 113:24]
  wire [63:0] _T_116 = {56'h0,res_temp[7:0]}; // @[Cat.scala 29:58]
  wire  _T_117 = io_res_ext_op == 3'h3; // @[alu.scala 114:24]
  wire [47:0] _T_120 = res_temp[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_122 = {_T_120,res_temp[15:0]}; // @[Cat.scala 29:58]
  wire  _T_123 = io_res_ext_op == 3'h4; // @[alu.scala 115:24]
  wire [63:0] _T_126 = {48'h0,res_temp[15:0]}; // @[Cat.scala 29:58]
  wire  _T_127 = io_res_ext_op == 3'h5; // @[alu.scala 116:24]
  wire [31:0] _T_130 = res_temp[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_132 = {_T_130,res_temp[31:0]}; // @[Cat.scala 29:58]
  wire  _T_133 = io_res_ext_op == 3'h6; // @[alu.scala 117:24]
  wire [63:0] _T_136 = {32'h0,res_temp[31:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_137 = _T_133 ? _T_136 : res_temp; // @[Mux.scala 98:16]
  wire [63:0] _T_138 = _T_127 ? _T_132 : _T_137; // @[Mux.scala 98:16]
  wire [63:0] _T_139 = _T_123 ? _T_126 : _T_138; // @[Mux.scala 98:16]
  wire [63:0] _T_140 = _T_117 ? _T_122 : _T_139; // @[Mux.scala 98:16]
  wire [63:0] _T_141 = _T_113 ? _T_116 : _T_140; // @[Mux.scala 98:16]
  wire [63:0] _T_142 = _T_107 ? _T_112 : _T_141; // @[Mux.scala 98:16]
  MDU mdu ( // @[alu.scala 35:21]
    .clock(mdu_clock),
    .reset(mdu_reset),
    .io__op1(mdu_io__op1),
    .io__op2(mdu_io__op2),
    .io__op(mdu_io__op),
    .io__en(mdu_io__en),
    .io__result_got(mdu_io__result_got),
    .io__result(mdu_io__result),
    .io__finish(mdu_io__finish),
    .io__exe_stall(mdu_io__exe_stall),
    ._T_111_0(mdu__T_111_0),
    .abs_op1_0(mdu_abs_op1_0),
    .io_exe_stall(mdu_io_exe_stall),
    .io_exe_stall_0(mdu_io_exe_stall_0),
    ._T_110_0(mdu__T_110_0),
    .abs_op2_0(mdu_abs_op2_0)
  );
  assign io_res = _T_106 ? res_temp : _T_142; // @[alu.scala 110:12]
  assign _T_111_0 = mdu__T_111_0;
  assign abs_op1 = mdu_abs_op1_0;
  assign io_exe_stall = mdu_io_exe_stall;
  assign io_exe_stall_0 = mdu_io_exe_stall_0;
  assign _T_110_0 = mdu__T_110_0;
  assign abs_op2 = mdu_abs_op2_0;
  assign mdu_clock = clock;
  assign mdu_reset = reset;
  assign mdu_io__op1 = io_input1; // @[alu.scala 71:16]
  assign mdu_io__op2 = io_input2; // @[alu.scala 72:16]
  assign mdu_io__op = io_op; // @[alu.scala 73:16]
  assign mdu_io__en = _T_48 | _T_49; // @[alu.scala 74:16]
  assign mdu_io__result_got = _T_51 & _T_52; // @[alu.scala 78:23]
endmodule
module CSRfile(
  input         clock,
  input         reset,
  input  [31:0] io__instruction,
  input  [2:0]  io__csr_op,
  input  [63:0] io__data_in,
  input         io__hasException,
  input         io__hasStall,
  input  [63:0] io__in_mem_pc,
  input  [63:0] io__in_exe_pc,
  input  [63:0] io__in_dec_pc,
  input  [63:0] io__in_if_pc,
  input         io__is_retire,
  output [63:0] io__redir_target,
  output [63:0] io__csr_info,
  output        io__isredir,
  output        io__csr_illegal_ins_exception,
  output        io_is_retire,
  output        io_isredir,
  output [63:0] _T_17772_0,
  input         time_interrupt
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
  reg [63:0] _RAND_32;
  reg [63:0] _RAND_33;
  reg [63:0] _RAND_34;
  reg [63:0] _RAND_35;
  reg [63:0] _RAND_36;
  reg [63:0] _RAND_37;
  reg [63:0] _RAND_38;
  reg [63:0] _RAND_39;
  reg [63:0] _RAND_40;
  reg [63:0] _RAND_41;
  reg [63:0] _RAND_42;
  reg [63:0] _RAND_43;
  reg [63:0] _RAND_44;
  reg [63:0] _RAND_45;
  reg [63:0] _RAND_46;
  reg [63:0] _RAND_47;
  reg [63:0] _RAND_48;
  reg [63:0] _RAND_49;
  reg [63:0] _RAND_50;
  reg [63:0] _RAND_51;
  reg [63:0] _RAND_52;
  reg [63:0] _RAND_53;
  reg [63:0] _RAND_54;
  reg [63:0] _RAND_55;
  reg [63:0] _RAND_56;
  reg [63:0] _RAND_57;
  reg [63:0] _RAND_58;
  reg [63:0] _RAND_59;
  reg [63:0] _RAND_60;
  reg [63:0] _RAND_61;
  reg [63:0] _RAND_62;
  reg [63:0] _RAND_63;
  reg [63:0] _RAND_64;
  reg [63:0] _RAND_65;
  reg [63:0] _RAND_66;
  reg [63:0] _RAND_67;
  reg [63:0] _RAND_68;
  reg [63:0] _RAND_69;
  reg [63:0] _RAND_70;
  reg [63:0] _RAND_71;
  reg [63:0] _RAND_72;
  reg [63:0] _RAND_73;
  reg [63:0] _RAND_74;
  reg [63:0] _RAND_75;
  reg [63:0] _RAND_76;
  reg [63:0] _RAND_77;
  reg [63:0] _RAND_78;
  reg [63:0] _RAND_79;
  reg [63:0] _RAND_80;
  reg [63:0] _RAND_81;
  reg [63:0] _RAND_82;
  reg [63:0] _RAND_83;
  reg [63:0] _RAND_84;
  reg [63:0] _RAND_85;
  reg [63:0] _RAND_86;
  reg [63:0] _RAND_87;
  reg [63:0] _RAND_88;
  reg [63:0] _RAND_89;
  reg [63:0] _RAND_90;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] reg_mtvec; // @[csr.scala 86:28]
  reg [63:0] reg_mepc; // @[csr.scala 87:27]
  reg [63:0] reg_mcause; // @[csr.scala 88:29]
  reg  reg_mie_mti; // @[csr.scala 89:26]
  reg  reg_mie_msi; // @[csr.scala 89:26]
  reg  reg_mip_mti; // @[csr.scala 90:26]
  reg  reg_mip_msi; // @[csr.scala 90:26]
  reg [63:0] reg_mtval; // @[csr.scala 91:28]
  reg [63:0] reg_mscratch; // @[csr.scala 92:31]
  reg [1:0] reg_mstatus_mpp; // @[csr.scala 93:30]
  reg  reg_mstatus_mpie; // @[csr.scala 93:30]
  reg  reg_mstatus_mie; // @[csr.scala 93:30]
  reg [63:0] reg_pmpcfg0; // @[csr.scala 99:30]
  reg [63:0] reg_pmpcfg1; // @[csr.scala 100:30]
  reg [63:0] regs_pmpaddr_0; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_1; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_2; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_3; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_4; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_5; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_6; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_7; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_8; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_9; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_10; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_11; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_12; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_13; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_14; // @[csr.scala 102:31]
  reg [63:0] regs_pmpaddr_15; // @[csr.scala 102:31]
  reg [63:0] reg_mcycle; // @[csr.scala 104:29]
  reg [63:0] reg_minstret; // @[csr.scala 105:31]
  reg [63:0] regs_mhpmcounter_0; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_1; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_2; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_3; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_4; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_5; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_6; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_7; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_8; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_9; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_10; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_11; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_12; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_13; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_14; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_15; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_16; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_17; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_18; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_19; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_20; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_21; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_22; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_23; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_24; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_25; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_26; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_27; // @[csr.scala 106:35]
  reg [63:0] regs_mhpmcounter_28; // @[csr.scala 106:35]
  reg [63:0] reg_mcounterinhibit; // @[csr.scala 107:38]
  reg [63:0] regs_mhpmevet_0; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_1; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_2; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_3; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_4; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_5; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_6; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_7; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_8; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_9; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_10; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_11; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_12; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_13; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_14; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_15; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_16; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_17; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_18; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_19; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_20; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_21; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_22; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_23; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_24; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_25; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_26; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_27; // @[csr.scala 108:32]
  reg [63:0] regs_mhpmevet_28; // @[csr.scala 108:32]
  wire [11:0] wire_csr_index = io__instruction[31:20]; // @[csr.scala 114:49]
  wire  _T_7 = io__csr_op == 3'h3; // @[csr.scala 117:21]
  wire  _T_8 = io__csr_op == 3'h4; // @[csr.scala 117:44]
  wire  _T_9 = _T_7 | _T_8; // @[csr.scala 117:31]
  wire  _T_11 = io__instruction[19:15] == 5'h0; // @[csr.scala 117:90]
  wire  _T_12 = _T_9 & _T_11; // @[csr.scala 117:55]
  wire [2:0] wire_csr_op = _T_12 ? 3'h1 : io__csr_op; // @[csr.scala 118:5]
  wire  csr_read_only = &wire_csr_index[11:10]; // @[csr.scala 130:47]
  wire  _T_14 = wire_csr_op == 3'h2; // @[csr.scala 131:38]
  wire  _T_15 = wire_csr_op == 3'h3; // @[csr.scala 131:63]
  wire  _T_16 = _T_14 | _T_15; // @[csr.scala 131:48]
  wire  _T_17 = wire_csr_op == 3'h4; // @[csr.scala 131:88]
  wire  _T_18 = _T_16 | _T_17; // @[csr.scala 131:73]
  wire  write_illgal = _T_18 & csr_read_only; // @[csr.scala 131:99]
  wire [10:0] _T_28 = {3'h0,reg_mstatus_mpie,2'h0,1'h0,reg_mstatus_mie,1'h0,2'h0}; // @[csr.scala 140:42]
  wire [63:0] _T_39 = {45'h0,4'h0,2'h0,reg_mstatus_mpp,_T_28}; // @[csr.scala 140:42]
  wire [15:0] _T_52 = {7'h0,1'h0,reg_mie_mti,1'h0,2'h0,reg_mie_msi,3'h0}; // @[csr.scala 144:38]
  wire [15:0] _T_65 = {7'h0,1'h0,reg_mip_mti,1'h0,2'h0,reg_mip_msi,3'h0}; // @[csr.scala 145:38]
  wire  _T_66 = wire_csr_index == 12'hf11; // @[csr.scala 178:94]
  wire  _T_67 = wire_csr_index == 12'hf12; // @[csr.scala 178:94]
  wire  _T_68 = wire_csr_index == 12'hf13; // @[csr.scala 178:94]
  wire  _T_69 = wire_csr_index == 12'hf14; // @[csr.scala 178:94]
  wire  _T_70 = wire_csr_index == 12'h300; // @[csr.scala 178:94]
  wire  _T_71 = wire_csr_index == 12'h301; // @[csr.scala 178:94]
  wire  _T_72 = wire_csr_index == 12'h302; // @[csr.scala 178:94]
  wire  _T_73 = wire_csr_index == 12'h303; // @[csr.scala 178:94]
  wire  _T_74 = wire_csr_index == 12'h304; // @[csr.scala 178:94]
  wire  _T_75 = wire_csr_index == 12'h344; // @[csr.scala 178:94]
  wire  _T_76 = wire_csr_index == 12'h305; // @[csr.scala 178:94]
  wire  _T_77 = wire_csr_index == 12'h306; // @[csr.scala 178:94]
  wire  _T_78 = wire_csr_index == 12'h340; // @[csr.scala 178:94]
  wire  _T_79 = wire_csr_index == 12'h341; // @[csr.scala 178:94]
  wire  _T_80 = wire_csr_index == 12'h342; // @[csr.scala 178:94]
  wire  _T_81 = wire_csr_index == 12'h343; // @[csr.scala 178:94]
  wire  _T_82 = wire_csr_index == 12'h3a0; // @[csr.scala 178:94]
  wire  _T_83 = wire_csr_index == 12'h3a1; // @[csr.scala 178:94]
  wire  _T_84 = wire_csr_index == 12'hb00; // @[csr.scala 178:94]
  wire  _T_85 = wire_csr_index == 12'hb02; // @[csr.scala 178:94]
  wire  _T_86 = wire_csr_index == 12'h320; // @[csr.scala 178:94]
  wire  _T_87 = wire_csr_index == 12'h3b0; // @[csr.scala 178:94]
  wire  _T_88 = wire_csr_index == 12'h3b1; // @[csr.scala 178:94]
  wire  _T_89 = wire_csr_index == 12'h3b2; // @[csr.scala 178:94]
  wire  _T_90 = wire_csr_index == 12'h3b3; // @[csr.scala 178:94]
  wire  _T_91 = wire_csr_index == 12'h3b4; // @[csr.scala 178:94]
  wire  _T_92 = wire_csr_index == 12'h3b5; // @[csr.scala 178:94]
  wire  _T_93 = wire_csr_index == 12'h3b6; // @[csr.scala 178:94]
  wire  _T_94 = wire_csr_index == 12'h3b7; // @[csr.scala 178:94]
  wire  _T_95 = wire_csr_index == 12'h3b8; // @[csr.scala 178:94]
  wire  _T_96 = wire_csr_index == 12'h3b9; // @[csr.scala 178:94]
  wire  _T_97 = wire_csr_index == 12'h3ba; // @[csr.scala 178:94]
  wire  _T_98 = wire_csr_index == 12'h3bb; // @[csr.scala 178:94]
  wire  _T_99 = wire_csr_index == 12'h3bc; // @[csr.scala 178:94]
  wire  _T_100 = wire_csr_index == 12'h3bd; // @[csr.scala 178:94]
  wire  _T_101 = wire_csr_index == 12'h3be; // @[csr.scala 178:94]
  wire  _T_102 = wire_csr_index == 12'h3bf; // @[csr.scala 178:94]
  wire  _T_103 = wire_csr_index == 12'hb03; // @[csr.scala 178:94]
  wire  _T_104 = wire_csr_index == 12'hb04; // @[csr.scala 178:94]
  wire  _T_105 = wire_csr_index == 12'hb05; // @[csr.scala 178:94]
  wire  _T_106 = wire_csr_index == 12'hb06; // @[csr.scala 178:94]
  wire  _T_107 = wire_csr_index == 12'hb07; // @[csr.scala 178:94]
  wire  _T_108 = wire_csr_index == 12'hb08; // @[csr.scala 178:94]
  wire  _T_109 = wire_csr_index == 12'hb09; // @[csr.scala 178:94]
  wire  _T_110 = wire_csr_index == 12'hb0a; // @[csr.scala 178:94]
  wire  _T_111 = wire_csr_index == 12'hb0b; // @[csr.scala 178:94]
  wire  _T_112 = wire_csr_index == 12'hb0c; // @[csr.scala 178:94]
  wire  _T_113 = wire_csr_index == 12'hb0d; // @[csr.scala 178:94]
  wire  _T_114 = wire_csr_index == 12'hb0e; // @[csr.scala 178:94]
  wire  _T_115 = wire_csr_index == 12'hb0f; // @[csr.scala 178:94]
  wire  _T_116 = wire_csr_index == 12'hb10; // @[csr.scala 178:94]
  wire  _T_117 = wire_csr_index == 12'hb11; // @[csr.scala 178:94]
  wire  _T_118 = wire_csr_index == 12'hb12; // @[csr.scala 178:94]
  wire  _T_119 = wire_csr_index == 12'hb13; // @[csr.scala 178:94]
  wire  _T_120 = wire_csr_index == 12'hb14; // @[csr.scala 178:94]
  wire  _T_121 = wire_csr_index == 12'hb15; // @[csr.scala 178:94]
  wire  _T_122 = wire_csr_index == 12'hb16; // @[csr.scala 178:94]
  wire  _T_123 = wire_csr_index == 12'hb17; // @[csr.scala 178:94]
  wire  _T_124 = wire_csr_index == 12'hb18; // @[csr.scala 178:94]
  wire  _T_125 = wire_csr_index == 12'hb19; // @[csr.scala 178:94]
  wire  _T_126 = wire_csr_index == 12'hb1a; // @[csr.scala 178:94]
  wire  _T_127 = wire_csr_index == 12'hb1b; // @[csr.scala 178:94]
  wire  _T_128 = wire_csr_index == 12'hb1c; // @[csr.scala 178:94]
  wire  _T_129 = wire_csr_index == 12'hb1d; // @[csr.scala 178:94]
  wire  _T_130 = wire_csr_index == 12'hb1e; // @[csr.scala 178:94]
  wire  _T_131 = wire_csr_index == 12'hb1f; // @[csr.scala 178:94]
  wire  _T_132 = wire_csr_index == 12'h323; // @[csr.scala 178:94]
  wire  _T_133 = wire_csr_index == 12'h324; // @[csr.scala 178:94]
  wire  _T_134 = wire_csr_index == 12'h325; // @[csr.scala 178:94]
  wire  _T_135 = wire_csr_index == 12'h326; // @[csr.scala 178:94]
  wire  _T_136 = wire_csr_index == 12'h327; // @[csr.scala 178:94]
  wire  _T_137 = wire_csr_index == 12'h328; // @[csr.scala 178:94]
  wire  _T_138 = wire_csr_index == 12'h329; // @[csr.scala 178:94]
  wire  _T_139 = wire_csr_index == 12'h32a; // @[csr.scala 178:94]
  wire  _T_140 = wire_csr_index == 12'h32b; // @[csr.scala 178:94]
  wire  _T_141 = wire_csr_index == 12'h32c; // @[csr.scala 178:94]
  wire  _T_142 = wire_csr_index == 12'h32d; // @[csr.scala 178:94]
  wire  _T_143 = wire_csr_index == 12'h32e; // @[csr.scala 178:94]
  wire  _T_144 = wire_csr_index == 12'h32f; // @[csr.scala 178:94]
  wire  _T_145 = wire_csr_index == 12'h330; // @[csr.scala 178:94]
  wire  _T_146 = wire_csr_index == 12'h331; // @[csr.scala 178:94]
  wire  _T_147 = wire_csr_index == 12'h332; // @[csr.scala 178:94]
  wire  _T_148 = wire_csr_index == 12'h333; // @[csr.scala 178:94]
  wire  _T_149 = wire_csr_index == 12'h334; // @[csr.scala 178:94]
  wire  _T_150 = wire_csr_index == 12'h335; // @[csr.scala 178:94]
  wire  _T_151 = wire_csr_index == 12'h336; // @[csr.scala 178:94]
  wire  _T_152 = wire_csr_index == 12'h337; // @[csr.scala 178:94]
  wire  _T_153 = wire_csr_index == 12'h338; // @[csr.scala 178:94]
  wire  _T_154 = wire_csr_index == 12'h339; // @[csr.scala 178:94]
  wire  _T_155 = wire_csr_index == 12'h33a; // @[csr.scala 178:94]
  wire  _T_156 = wire_csr_index == 12'h33b; // @[csr.scala 178:94]
  wire  _T_157 = wire_csr_index == 12'h33c; // @[csr.scala 178:94]
  wire  _T_158 = wire_csr_index == 12'h33d; // @[csr.scala 178:94]
  wire  _T_159 = wire_csr_index == 12'h33e; // @[csr.scala 178:94]
  wire  _T_160 = wire_csr_index == 12'h33f; // @[csr.scala 178:94]
  wire  _T_161 = _T_66 | _T_67; // @[csr.scala 178:113]
  wire  _T_162 = _T_161 | _T_68; // @[csr.scala 178:113]
  wire  _T_163 = _T_162 | _T_69; // @[csr.scala 178:113]
  wire  _T_164 = _T_163 | _T_70; // @[csr.scala 178:113]
  wire  _T_165 = _T_164 | _T_71; // @[csr.scala 178:113]
  wire  _T_166 = _T_165 | _T_72; // @[csr.scala 178:113]
  wire  _T_167 = _T_166 | _T_73; // @[csr.scala 178:113]
  wire  _T_168 = _T_167 | _T_74; // @[csr.scala 178:113]
  wire  _T_169 = _T_168 | _T_75; // @[csr.scala 178:113]
  wire  _T_170 = _T_169 | _T_76; // @[csr.scala 178:113]
  wire  _T_171 = _T_170 | _T_77; // @[csr.scala 178:113]
  wire  _T_172 = _T_171 | _T_78; // @[csr.scala 178:113]
  wire  _T_173 = _T_172 | _T_79; // @[csr.scala 178:113]
  wire  _T_174 = _T_173 | _T_80; // @[csr.scala 178:113]
  wire  _T_175 = _T_174 | _T_81; // @[csr.scala 178:113]
  wire  _T_176 = _T_175 | _T_82; // @[csr.scala 178:113]
  wire  _T_177 = _T_176 | _T_83; // @[csr.scala 178:113]
  wire  _T_178 = _T_177 | _T_84; // @[csr.scala 178:113]
  wire  _T_179 = _T_178 | _T_85; // @[csr.scala 178:113]
  wire  _T_180 = _T_179 | _T_86; // @[csr.scala 178:113]
  wire  _T_181 = _T_180 | _T_87; // @[csr.scala 178:113]
  wire  _T_182 = _T_181 | _T_88; // @[csr.scala 178:113]
  wire  _T_183 = _T_182 | _T_89; // @[csr.scala 178:113]
  wire  _T_184 = _T_183 | _T_90; // @[csr.scala 178:113]
  wire  _T_185 = _T_184 | _T_91; // @[csr.scala 178:113]
  wire  _T_186 = _T_185 | _T_92; // @[csr.scala 178:113]
  wire  _T_187 = _T_186 | _T_93; // @[csr.scala 178:113]
  wire  _T_188 = _T_187 | _T_94; // @[csr.scala 178:113]
  wire  _T_189 = _T_188 | _T_95; // @[csr.scala 178:113]
  wire  _T_190 = _T_189 | _T_96; // @[csr.scala 178:113]
  wire  _T_191 = _T_190 | _T_97; // @[csr.scala 178:113]
  wire  _T_192 = _T_191 | _T_98; // @[csr.scala 178:113]
  wire  _T_193 = _T_192 | _T_99; // @[csr.scala 178:113]
  wire  _T_194 = _T_193 | _T_100; // @[csr.scala 178:113]
  wire  _T_195 = _T_194 | _T_101; // @[csr.scala 178:113]
  wire  _T_196 = _T_195 | _T_102; // @[csr.scala 178:113]
  wire  _T_197 = _T_196 | _T_103; // @[csr.scala 178:113]
  wire  _T_198 = _T_197 | _T_104; // @[csr.scala 178:113]
  wire  _T_199 = _T_198 | _T_105; // @[csr.scala 178:113]
  wire  _T_200 = _T_199 | _T_106; // @[csr.scala 178:113]
  wire  _T_201 = _T_200 | _T_107; // @[csr.scala 178:113]
  wire  _T_202 = _T_201 | _T_108; // @[csr.scala 178:113]
  wire  _T_203 = _T_202 | _T_109; // @[csr.scala 178:113]
  wire  _T_204 = _T_203 | _T_110; // @[csr.scala 178:113]
  wire  _T_205 = _T_204 | _T_111; // @[csr.scala 178:113]
  wire  _T_206 = _T_205 | _T_112; // @[csr.scala 178:113]
  wire  _T_207 = _T_206 | _T_113; // @[csr.scala 178:113]
  wire  _T_208 = _T_207 | _T_114; // @[csr.scala 178:113]
  wire  _T_209 = _T_208 | _T_115; // @[csr.scala 178:113]
  wire  _T_210 = _T_209 | _T_116; // @[csr.scala 178:113]
  wire  _T_211 = _T_210 | _T_117; // @[csr.scala 178:113]
  wire  _T_212 = _T_211 | _T_118; // @[csr.scala 178:113]
  wire  _T_213 = _T_212 | _T_119; // @[csr.scala 178:113]
  wire  _T_214 = _T_213 | _T_120; // @[csr.scala 178:113]
  wire  _T_215 = _T_214 | _T_121; // @[csr.scala 178:113]
  wire  _T_216 = _T_215 | _T_122; // @[csr.scala 178:113]
  wire  _T_217 = _T_216 | _T_123; // @[csr.scala 178:113]
  wire  _T_218 = _T_217 | _T_124; // @[csr.scala 178:113]
  wire  _T_219 = _T_218 | _T_125; // @[csr.scala 178:113]
  wire  _T_220 = _T_219 | _T_126; // @[csr.scala 178:113]
  wire  _T_221 = _T_220 | _T_127; // @[csr.scala 178:113]
  wire  _T_222 = _T_221 | _T_128; // @[csr.scala 178:113]
  wire  _T_223 = _T_222 | _T_129; // @[csr.scala 178:113]
  wire  _T_224 = _T_223 | _T_130; // @[csr.scala 178:113]
  wire  _T_225 = _T_224 | _T_131; // @[csr.scala 178:113]
  wire  _T_226 = _T_225 | _T_132; // @[csr.scala 178:113]
  wire  _T_227 = _T_226 | _T_133; // @[csr.scala 178:113]
  wire  _T_228 = _T_227 | _T_134; // @[csr.scala 178:113]
  wire  _T_229 = _T_228 | _T_135; // @[csr.scala 178:113]
  wire  _T_230 = _T_229 | _T_136; // @[csr.scala 178:113]
  wire  _T_231 = _T_230 | _T_137; // @[csr.scala 178:113]
  wire  _T_232 = _T_231 | _T_138; // @[csr.scala 178:113]
  wire  _T_233 = _T_232 | _T_139; // @[csr.scala 178:113]
  wire  _T_234 = _T_233 | _T_140; // @[csr.scala 178:113]
  wire  _T_235 = _T_234 | _T_141; // @[csr.scala 178:113]
  wire  _T_236 = _T_235 | _T_142; // @[csr.scala 178:113]
  wire  _T_237 = _T_236 | _T_143; // @[csr.scala 178:113]
  wire  _T_238 = _T_237 | _T_144; // @[csr.scala 178:113]
  wire  _T_239 = _T_238 | _T_145; // @[csr.scala 178:113]
  wire  _T_240 = _T_239 | _T_146; // @[csr.scala 178:113]
  wire  _T_241 = _T_240 | _T_147; // @[csr.scala 178:113]
  wire  _T_242 = _T_241 | _T_148; // @[csr.scala 178:113]
  wire  _T_243 = _T_242 | _T_149; // @[csr.scala 178:113]
  wire  _T_244 = _T_243 | _T_150; // @[csr.scala 178:113]
  wire  _T_245 = _T_244 | _T_151; // @[csr.scala 178:113]
  wire  _T_246 = _T_245 | _T_152; // @[csr.scala 178:113]
  wire  _T_247 = _T_246 | _T_153; // @[csr.scala 178:113]
  wire  _T_248 = _T_247 | _T_154; // @[csr.scala 178:113]
  wire  _T_249 = _T_248 | _T_155; // @[csr.scala 178:113]
  wire  _T_250 = _T_249 | _T_156; // @[csr.scala 178:113]
  wire  _T_251 = _T_250 | _T_157; // @[csr.scala 178:113]
  wire  _T_252 = _T_251 | _T_158; // @[csr.scala 178:113]
  wire  _T_253 = _T_252 | _T_159; // @[csr.scala 178:113]
  wire  legalcsrnumber = _T_253 | _T_160; // @[csr.scala 178:113]
  wire  _T_254 = io__csr_op != 3'h0; // @[csr.scala 179:35]
  wire  _T_255 = io__csr_op != 3'h5; // @[csr.scala 179:58]
  wire  _T_256 = _T_254 & _T_255; // @[csr.scala 179:45]
  wire  _T_257 = ~legalcsrnumber; // @[csr.scala 179:74]
  wire  read_illegal = _T_256 & _T_257; // @[csr.scala 179:71]
  wire  exception_in_csr = read_illegal | write_illgal; // @[csr.scala 181:41]
  wire  _T_261 = ~read_illegal; // @[csr.scala 183:77]
  wire  csr_read_enable = _T_256 & _T_261; // @[csr.scala 183:74]
  wire  _T_266 = 12'h300 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_267 = 12'h301 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_270 = 12'h304 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_271 = 12'h344 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_272 = 12'h305 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_274 = 12'h340 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_275 = 12'h341 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_276 = 12'h342 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_277 = 12'h343 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_278 = 12'h3a0 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_279 = 12'h3a1 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_280 = 12'hb00 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_281 = 12'hb02 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_282 = 12'h320 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_283 = 12'h3b0 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_284 = 12'h3b1 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_285 = 12'h3b2 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_286 = 12'h3b3 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_287 = 12'h3b4 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_288 = 12'h3b5 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_289 = 12'h3b6 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_290 = 12'h3b7 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_291 = 12'h3b8 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_292 = 12'h3b9 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_293 = 12'h3ba == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_294 = 12'h3bb == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_295 = 12'h3bc == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_296 = 12'h3bd == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_297 = 12'h3be == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_298 = 12'h3bf == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_299 = 12'hb03 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_300 = 12'hb04 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_301 = 12'hb05 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_302 = 12'hb06 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_303 = 12'hb07 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_304 = 12'hb08 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_305 = 12'hb09 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_306 = 12'hb0a == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_307 = 12'hb0b == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_308 = 12'hb0c == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_309 = 12'hb0d == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_310 = 12'hb0e == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_311 = 12'hb0f == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_312 = 12'hb10 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_313 = 12'hb11 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_314 = 12'hb12 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_315 = 12'hb13 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_316 = 12'hb14 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_317 = 12'hb15 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_318 = 12'hb16 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_319 = 12'hb17 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_320 = 12'hb18 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_321 = 12'hb19 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_322 = 12'hb1a == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_323 = 12'hb1b == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_324 = 12'hb1c == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_325 = 12'hb1d == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_326 = 12'hb1e == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_327 = 12'hb1f == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_328 = 12'h323 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_329 = 12'h324 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_330 = 12'h325 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_331 = 12'h326 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_332 = 12'h327 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_333 = 12'h328 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_334 = 12'h329 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_335 = 12'h32a == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_336 = 12'h32b == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_337 = 12'h32c == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_338 = 12'h32d == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_339 = 12'h32e == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_340 = 12'h32f == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_341 = 12'h330 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_342 = 12'h331 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_343 = 12'h332 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_344 = 12'h333 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_345 = 12'h334 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_346 = 12'h335 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_347 = 12'h336 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_348 = 12'h337 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_349 = 12'h338 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_350 = 12'h339 == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_351 = 12'h33a == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_352 = 12'h33b == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_353 = 12'h33c == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_354 = 12'h33d == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_355 = 12'h33e == wire_csr_index; // @[csr.scala 188:61]
  wire  _T_356 = 12'h33f == wire_csr_index; // @[csr.scala 188:61]
  wire [63:0] _T_9291 = _T_266 ? _T_39 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9292 = _T_267 ? 64'h8000000000001100 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_40 = {{48'd0}, _T_52}; // @[csr.scala 144:38 csr.scala 144:38]
  wire [63:0] _T_9295 = _T_270 ? _T_40 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_53 = {{48'd0}, _T_65}; // @[csr.scala 145:38 csr.scala 145:38]
  wire [63:0] _T_9296 = _T_271 ? _T_53 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9297 = _T_272 ? reg_mtvec : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9299 = _T_274 ? reg_mscratch : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9300 = _T_275 ? reg_mepc : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9301 = _T_276 ? reg_mcause : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9302 = _T_277 ? reg_mtval : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9303 = _T_278 ? reg_pmpcfg0 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9304 = _T_279 ? reg_pmpcfg1 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9305 = _T_280 ? reg_mcycle : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9306 = _T_281 ? reg_minstret : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9307 = _T_282 ? reg_mcounterinhibit : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9308 = _T_283 ? regs_pmpaddr_0 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9309 = _T_284 ? regs_pmpaddr_1 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9310 = _T_285 ? regs_pmpaddr_2 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9311 = _T_286 ? regs_pmpaddr_3 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9312 = _T_287 ? regs_pmpaddr_4 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9313 = _T_288 ? regs_pmpaddr_5 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9314 = _T_289 ? regs_pmpaddr_6 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9315 = _T_290 ? regs_pmpaddr_7 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9316 = _T_291 ? regs_pmpaddr_8 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9317 = _T_292 ? regs_pmpaddr_9 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9318 = _T_293 ? regs_pmpaddr_10 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9319 = _T_294 ? regs_pmpaddr_11 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9320 = _T_295 ? regs_pmpaddr_12 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9321 = _T_296 ? regs_pmpaddr_13 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9322 = _T_297 ? regs_pmpaddr_14 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9323 = _T_298 ? regs_pmpaddr_15 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9324 = _T_299 ? regs_mhpmcounter_0 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9325 = _T_300 ? regs_mhpmcounter_1 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9326 = _T_301 ? regs_mhpmcounter_2 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9327 = _T_302 ? regs_mhpmcounter_3 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9328 = _T_303 ? regs_mhpmcounter_4 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9329 = _T_304 ? regs_mhpmcounter_5 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9330 = _T_305 ? regs_mhpmcounter_6 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9331 = _T_306 ? regs_mhpmcounter_7 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9332 = _T_307 ? regs_mhpmcounter_8 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9333 = _T_308 ? regs_mhpmcounter_9 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9334 = _T_309 ? regs_mhpmcounter_10 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9335 = _T_310 ? regs_mhpmcounter_11 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9336 = _T_311 ? regs_mhpmcounter_12 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9337 = _T_312 ? regs_mhpmcounter_13 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9338 = _T_313 ? regs_mhpmcounter_14 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9339 = _T_314 ? regs_mhpmcounter_15 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9340 = _T_315 ? regs_mhpmcounter_16 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9341 = _T_316 ? regs_mhpmcounter_17 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9342 = _T_317 ? regs_mhpmcounter_18 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9343 = _T_318 ? regs_mhpmcounter_19 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9344 = _T_319 ? regs_mhpmcounter_20 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9345 = _T_320 ? regs_mhpmcounter_21 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9346 = _T_321 ? regs_mhpmcounter_22 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9347 = _T_322 ? regs_mhpmcounter_23 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9348 = _T_323 ? regs_mhpmcounter_24 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9349 = _T_324 ? regs_mhpmcounter_25 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9350 = _T_325 ? regs_mhpmcounter_26 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9351 = _T_326 ? regs_mhpmcounter_27 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9352 = _T_327 ? regs_mhpmcounter_28 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9353 = _T_328 ? regs_mhpmevet_0 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9354 = _T_329 ? regs_mhpmevet_1 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9355 = _T_330 ? regs_mhpmevet_2 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9356 = _T_331 ? regs_mhpmevet_3 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9357 = _T_332 ? regs_mhpmevet_4 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9358 = _T_333 ? regs_mhpmevet_5 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9359 = _T_334 ? regs_mhpmevet_6 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9360 = _T_335 ? regs_mhpmevet_7 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9361 = _T_336 ? regs_mhpmevet_8 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9362 = _T_337 ? regs_mhpmevet_9 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9363 = _T_338 ? regs_mhpmevet_10 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9364 = _T_339 ? regs_mhpmevet_11 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9365 = _T_340 ? regs_mhpmevet_12 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9366 = _T_341 ? regs_mhpmevet_13 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9367 = _T_342 ? regs_mhpmevet_14 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9368 = _T_343 ? regs_mhpmevet_15 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9369 = _T_344 ? regs_mhpmevet_16 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9370 = _T_345 ? regs_mhpmevet_17 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9371 = _T_346 ? regs_mhpmevet_18 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9372 = _T_347 ? regs_mhpmevet_19 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9373 = _T_348 ? regs_mhpmevet_20 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9374 = _T_349 ? regs_mhpmevet_21 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9375 = _T_350 ? regs_mhpmevet_22 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9376 = _T_351 ? regs_mhpmevet_23 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9377 = _T_352 ? regs_mhpmevet_24 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9378 = _T_353 ? regs_mhpmevet_25 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9379 = _T_354 ? regs_mhpmevet_26 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9380 = _T_355 ? regs_mhpmevet_27 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9381 = _T_356 ? regs_mhpmevet_28 : 64'h0; // @[Mux.scala 27:72]
  wire [63:0] _T_9386 = _T_9291 | _T_9292; // @[Mux.scala 27:72]
  wire [63:0] _T_9389 = _T_9386 | _T_9295; // @[Mux.scala 27:72]
  wire [63:0] _T_9390 = _T_9389 | _T_9296; // @[Mux.scala 27:72]
  wire [63:0] _T_9391 = _T_9390 | _T_9297; // @[Mux.scala 27:72]
  wire [63:0] _T_9393 = _T_9391 | _T_9299; // @[Mux.scala 27:72]
  wire [63:0] _T_9394 = _T_9393 | _T_9300; // @[Mux.scala 27:72]
  wire [63:0] _T_9395 = _T_9394 | _T_9301; // @[Mux.scala 27:72]
  wire [63:0] _T_9396 = _T_9395 | _T_9302; // @[Mux.scala 27:72]
  wire [63:0] _T_9397 = _T_9396 | _T_9303; // @[Mux.scala 27:72]
  wire [63:0] _T_9398 = _T_9397 | _T_9304; // @[Mux.scala 27:72]
  wire [63:0] _T_9399 = _T_9398 | _T_9305; // @[Mux.scala 27:72]
  wire [63:0] _T_9400 = _T_9399 | _T_9306; // @[Mux.scala 27:72]
  wire [63:0] _T_9401 = _T_9400 | _T_9307; // @[Mux.scala 27:72]
  wire [63:0] _T_9402 = _T_9401 | _T_9308; // @[Mux.scala 27:72]
  wire [63:0] _T_9403 = _T_9402 | _T_9309; // @[Mux.scala 27:72]
  wire [63:0] _T_9404 = _T_9403 | _T_9310; // @[Mux.scala 27:72]
  wire [63:0] _T_9405 = _T_9404 | _T_9311; // @[Mux.scala 27:72]
  wire [63:0] _T_9406 = _T_9405 | _T_9312; // @[Mux.scala 27:72]
  wire [63:0] _T_9407 = _T_9406 | _T_9313; // @[Mux.scala 27:72]
  wire [63:0] _T_9408 = _T_9407 | _T_9314; // @[Mux.scala 27:72]
  wire [63:0] _T_9409 = _T_9408 | _T_9315; // @[Mux.scala 27:72]
  wire [63:0] _T_9410 = _T_9409 | _T_9316; // @[Mux.scala 27:72]
  wire [63:0] _T_9411 = _T_9410 | _T_9317; // @[Mux.scala 27:72]
  wire [63:0] _T_9412 = _T_9411 | _T_9318; // @[Mux.scala 27:72]
  wire [63:0] _T_9413 = _T_9412 | _T_9319; // @[Mux.scala 27:72]
  wire [63:0] _T_9414 = _T_9413 | _T_9320; // @[Mux.scala 27:72]
  wire [63:0] _T_9415 = _T_9414 | _T_9321; // @[Mux.scala 27:72]
  wire [63:0] _T_9416 = _T_9415 | _T_9322; // @[Mux.scala 27:72]
  wire [63:0] _T_9417 = _T_9416 | _T_9323; // @[Mux.scala 27:72]
  wire [63:0] _T_9418 = _T_9417 | _T_9324; // @[Mux.scala 27:72]
  wire [63:0] _T_9419 = _T_9418 | _T_9325; // @[Mux.scala 27:72]
  wire [63:0] _T_9420 = _T_9419 | _T_9326; // @[Mux.scala 27:72]
  wire [63:0] _T_9421 = _T_9420 | _T_9327; // @[Mux.scala 27:72]
  wire [63:0] _T_9422 = _T_9421 | _T_9328; // @[Mux.scala 27:72]
  wire [63:0] _T_9423 = _T_9422 | _T_9329; // @[Mux.scala 27:72]
  wire [63:0] _T_9424 = _T_9423 | _T_9330; // @[Mux.scala 27:72]
  wire [63:0] _T_9425 = _T_9424 | _T_9331; // @[Mux.scala 27:72]
  wire [63:0] _T_9426 = _T_9425 | _T_9332; // @[Mux.scala 27:72]
  wire [63:0] _T_9427 = _T_9426 | _T_9333; // @[Mux.scala 27:72]
  wire [63:0] _T_9428 = _T_9427 | _T_9334; // @[Mux.scala 27:72]
  wire [63:0] _T_9429 = _T_9428 | _T_9335; // @[Mux.scala 27:72]
  wire [63:0] _T_9430 = _T_9429 | _T_9336; // @[Mux.scala 27:72]
  wire [63:0] _T_9431 = _T_9430 | _T_9337; // @[Mux.scala 27:72]
  wire [63:0] _T_9432 = _T_9431 | _T_9338; // @[Mux.scala 27:72]
  wire [63:0] _T_9433 = _T_9432 | _T_9339; // @[Mux.scala 27:72]
  wire [63:0] _T_9434 = _T_9433 | _T_9340; // @[Mux.scala 27:72]
  wire [63:0] _T_9435 = _T_9434 | _T_9341; // @[Mux.scala 27:72]
  wire [63:0] _T_9436 = _T_9435 | _T_9342; // @[Mux.scala 27:72]
  wire [63:0] _T_9437 = _T_9436 | _T_9343; // @[Mux.scala 27:72]
  wire [63:0] _T_9438 = _T_9437 | _T_9344; // @[Mux.scala 27:72]
  wire [63:0] _T_9439 = _T_9438 | _T_9345; // @[Mux.scala 27:72]
  wire [63:0] _T_9440 = _T_9439 | _T_9346; // @[Mux.scala 27:72]
  wire [63:0] _T_9441 = _T_9440 | _T_9347; // @[Mux.scala 27:72]
  wire [63:0] _T_9442 = _T_9441 | _T_9348; // @[Mux.scala 27:72]
  wire [63:0] _T_9443 = _T_9442 | _T_9349; // @[Mux.scala 27:72]
  wire [63:0] _T_9444 = _T_9443 | _T_9350; // @[Mux.scala 27:72]
  wire [63:0] _T_9445 = _T_9444 | _T_9351; // @[Mux.scala 27:72]
  wire [63:0] _T_9446 = _T_9445 | _T_9352; // @[Mux.scala 27:72]
  wire [63:0] _T_9447 = _T_9446 | _T_9353; // @[Mux.scala 27:72]
  wire [63:0] _T_9448 = _T_9447 | _T_9354; // @[Mux.scala 27:72]
  wire [63:0] _T_9449 = _T_9448 | _T_9355; // @[Mux.scala 27:72]
  wire [63:0] _T_9450 = _T_9449 | _T_9356; // @[Mux.scala 27:72]
  wire [63:0] _T_9451 = _T_9450 | _T_9357; // @[Mux.scala 27:72]
  wire [63:0] _T_9452 = _T_9451 | _T_9358; // @[Mux.scala 27:72]
  wire [63:0] _T_9453 = _T_9452 | _T_9359; // @[Mux.scala 27:72]
  wire [63:0] _T_9454 = _T_9453 | _T_9360; // @[Mux.scala 27:72]
  wire [63:0] _T_9455 = _T_9454 | _T_9361; // @[Mux.scala 27:72]
  wire [63:0] _T_9456 = _T_9455 | _T_9362; // @[Mux.scala 27:72]
  wire [63:0] _T_9457 = _T_9456 | _T_9363; // @[Mux.scala 27:72]
  wire [63:0] _T_9458 = _T_9457 | _T_9364; // @[Mux.scala 27:72]
  wire [63:0] _T_9459 = _T_9458 | _T_9365; // @[Mux.scala 27:72]
  wire [63:0] _T_9460 = _T_9459 | _T_9366; // @[Mux.scala 27:72]
  wire [63:0] _T_9461 = _T_9460 | _T_9367; // @[Mux.scala 27:72]
  wire [63:0] _T_9462 = _T_9461 | _T_9368; // @[Mux.scala 27:72]
  wire [63:0] _T_9463 = _T_9462 | _T_9369; // @[Mux.scala 27:72]
  wire [63:0] _T_9464 = _T_9463 | _T_9370; // @[Mux.scala 27:72]
  wire [63:0] _T_9465 = _T_9464 | _T_9371; // @[Mux.scala 27:72]
  wire [63:0] _T_9466 = _T_9465 | _T_9372; // @[Mux.scala 27:72]
  wire [63:0] _T_9467 = _T_9466 | _T_9373; // @[Mux.scala 27:72]
  wire [63:0] _T_9468 = _T_9467 | _T_9374; // @[Mux.scala 27:72]
  wire [63:0] _T_9469 = _T_9468 | _T_9375; // @[Mux.scala 27:72]
  wire [63:0] _T_9470 = _T_9469 | _T_9376; // @[Mux.scala 27:72]
  wire [63:0] _T_9471 = _T_9470 | _T_9377; // @[Mux.scala 27:72]
  wire [63:0] _T_9472 = _T_9471 | _T_9378; // @[Mux.scala 27:72]
  wire [63:0] _T_9473 = _T_9472 | _T_9379; // @[Mux.scala 27:72]
  wire [63:0] _T_9474 = _T_9473 | _T_9380; // @[Mux.scala 27:72]
  wire [63:0] _T_9475 = _T_9474 | _T_9381; // @[Mux.scala 27:72]
  wire [63:0] csr_read_data = csr_read_enable ? _T_9475 : 64'h0; // @[csr.scala 193:5]
  wire  _T_9477 = io__csr_op == 3'h2; // @[csr.scala 202:20]
  wire [63:0] _T_9479 = csr_read_data | io__data_in; // @[csr.scala 203:49]
  wire [63:0] _T_9481 = ~io__data_in; // @[csr.scala 204:52]
  wire [63:0] _T_9482 = csr_read_data & _T_9481; // @[csr.scala 204:49]
  wire [63:0] _T_9483 = _T_7 ? _T_9482 : csr_read_data; // @[Mux.scala 98:16]
  wire [63:0] _T_9484 = _T_8 ? _T_9479 : _T_9483; // @[Mux.scala 98:16]
  wire [63:0] csr_write_data = _T_9477 ? io__data_in : _T_9484; // @[Mux.scala 98:16]
  wire  _T_9485 = ~write_illgal; // @[csr.scala 207:19]
  wire  _T_9486 = _T_9485 & legalcsrnumber; // @[csr.scala 207:33]
  wire  _T_9487 = ~io__hasException; // @[csr.scala 207:54]
  wire  _T_9488 = _T_9486 & _T_9487; // @[csr.scala 207:51]
  wire  _T_9489 = ~io__hasStall; // @[csr.scala 207:74]
  wire  _T_9490 = _T_9488 & _T_9489; // @[csr.scala 207:71]
  wire  _T_9491 = wire_csr_op != 3'h0; // @[csr.scala 207:103]
  wire  _T_9492 = wire_csr_op != 3'h5; // @[csr.scala 207:128]
  wire  _T_9493 = _T_9491 & _T_9492; // @[csr.scala 207:113]
  wire  _T_9494 = wire_csr_op != 3'h1; // @[csr.scala 207:155]
  wire  _T_9495 = _T_9493 & _T_9494; // @[csr.scala 207:140]
  wire  csr_wen = _T_9490 & _T_9495; // @[csr.scala 207:87]
  wire  _GEN_3 = _T_266 ? csr_write_data[7] : reg_mstatus_mpie; // @[csr.scala 213:9]
  wire [63:0] _T_10120 = {csr_write_data[63:2], 2'h0}; // @[csr.scala 233:66]
  wire [63:0] _GEN_10 = _T_275 ? _T_10120 : reg_mepc; // @[csr.scala 233:31]
  wire  _GEN_92 = csr_wen ? _GEN_3 : reg_mstatus_mpie; // @[csr.scala 211:5]
  wire [63:0] _GEN_99 = csr_wen ? _GEN_10 : reg_mepc; // @[csr.scala 211:5]
  wire  csr_illegal_ins_exception = exception_in_csr | io__hasException; // @[csr.scala 267:54]
  wire  _T_17721 = io__csr_op == 3'h5; // @[csr.scala 269:34]
  wire  _T_17722 = wire_csr_index == 12'h0; // @[csr.scala 269:66]
  wire  csr_isecall = _T_17721 & _T_17722; // @[csr.scala 269:47]
  wire  _T_17724 = wire_csr_index == 12'h1; // @[csr.scala 270:67]
  wire  csr_isebreak = _T_17721 & _T_17724; // @[csr.scala 270:48]
  wire  csr_ismret = _T_17721 & _T_72; // @[csr.scala 271:46]
  wire  _T_17727 = csr_illegal_ins_exception | csr_isecall; // @[csr.scala 273:54]
  wire  csr_hasexception = _T_17727 | csr_isebreak; // @[csr.scala 273:69]
  wire [63:0] _T_17729 = reg_mcycle + 64'h1; // @[csr.scala 286:30]
  wire [63:0] _T_17731 = reg_minstret + 64'h1; // @[csr.scala 290:38]
  wire  _T_17732 = reg_mip_mti & reg_mie_mti; // @[csr.scala 295:22]
  wire  _T_17733 = _T_17732 & reg_mstatus_mie; // @[csr.scala 295:37]
  wire  _T_17735 = _T_17733 & _T_9489; // @[csr.scala 295:56]
  wire  _T_17736 = io__in_mem_pc != 64'h0; // @[csr.scala 295:88]
  wire  csr_hasinterrupt = _T_17735 & _T_17736; // @[csr.scala 295:72]
  wire  _T_17741 = csr_ismret | csr_hasexception; // @[csr.scala 322:29]
  wire  _T_17742 = io__in_exe_pc != 64'h0; // @[csr.scala 325:37]
  wire  _T_17743 = io__in_dec_pc != 64'h0; // @[csr.scala 328:37]
  wire  _T_17744 = io__in_if_pc != 64'h0; // @[csr.scala 331:36]
  wire  _GEN_190 = csr_isebreak ? reg_mstatus_mie : reg_mstatus_mpie; // @[csr.scala 384:13]
  wire [1:0] _GEN_292 = csr_ismret ? reg_mstatus_mpp : 2'h3; // @[csr.scala 345:9]
  wire [1:0] _GEN_342 = csr_hasinterrupt ? 2'h3 : _GEN_292; // @[csr.scala 318:9]
  wire [1:0] prv_now = _T_9489 ? _GEN_342 : 2'h3; // @[csr.scala 316:5]
  wire  _GEN_217 = csr_isecall ? reg_mstatus_mie : _GEN_190; // @[csr.scala 372:13]
  wire  _GEN_244 = csr_illegal_ins_exception ? reg_mstatus_mie : _GEN_217; // @[csr.scala 359:13]
  wire  _GEN_199 = csr_isebreak ? _GEN_244 : _GEN_92; // @[csr.scala 384:13]
  wire  _GEN_226 = csr_isecall ? _GEN_244 : _GEN_199; // @[csr.scala 372:13]
  wire  _GEN_253 = csr_illegal_ins_exception ? _GEN_244 : _GEN_226; // @[csr.scala 359:13]
  wire  _GEN_277 = csr_hasexception ? _GEN_253 : _GEN_92; // @[csr.scala 355:9]
  wire  _GEN_300 = csr_ismret | _GEN_277; // @[csr.scala 345:9]
  wire  _T_17750 = csr_hasexception | csr_hasinterrupt; // @[csr.scala 402:27]
  wire [63:0] _T_17772 = {45'h0,4'h0,2'h0,reg_mstatus_mpp,_T_28}; // @[csr.scala 416:45]
  assign io__redir_target = _T_17750 ? reg_mtvec : reg_mepc; // @[csr.scala 348:29 csr.scala 412:25]
  assign io__csr_info = csr_read_enable ? _T_9475 : 64'h0; // @[csr.scala 197:17]
  assign io__isredir = _T_17750 | csr_ismret; // @[csr.scala 404:20 csr.scala 407:20]
  assign io__csr_illegal_ins_exception = exception_in_csr | io__hasException; // @[csr.scala 276:34]
  assign io_is_retire = io__is_retire;
  assign io_isredir = io__isredir;
  assign _T_17772_0 = _T_39;
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
  reg_mtvec = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  reg_mepc = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  reg_mcause = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  reg_mie_mti = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  reg_mie_msi = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  reg_mip_mti = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  reg_mip_msi = _RAND_6[0:0];
  _RAND_7 = {2{`RANDOM}};
  reg_mtval = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  reg_mscratch = _RAND_8[63:0];
  _RAND_9 = {1{`RANDOM}};
  reg_mstatus_mpp = _RAND_9[1:0];
  _RAND_10 = {1{`RANDOM}};
  reg_mstatus_mpie = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  reg_mstatus_mie = _RAND_11[0:0];
  _RAND_12 = {2{`RANDOM}};
  reg_pmpcfg0 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  reg_pmpcfg1 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  regs_pmpaddr_0 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  regs_pmpaddr_1 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  regs_pmpaddr_2 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  regs_pmpaddr_3 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  regs_pmpaddr_4 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  regs_pmpaddr_5 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  regs_pmpaddr_6 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  regs_pmpaddr_7 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  regs_pmpaddr_8 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  regs_pmpaddr_9 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  regs_pmpaddr_10 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  regs_pmpaddr_11 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  regs_pmpaddr_12 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  regs_pmpaddr_13 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  regs_pmpaddr_14 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  regs_pmpaddr_15 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  reg_mcycle = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  reg_minstret = _RAND_31[63:0];
  _RAND_32 = {2{`RANDOM}};
  regs_mhpmcounter_0 = _RAND_32[63:0];
  _RAND_33 = {2{`RANDOM}};
  regs_mhpmcounter_1 = _RAND_33[63:0];
  _RAND_34 = {2{`RANDOM}};
  regs_mhpmcounter_2 = _RAND_34[63:0];
  _RAND_35 = {2{`RANDOM}};
  regs_mhpmcounter_3 = _RAND_35[63:0];
  _RAND_36 = {2{`RANDOM}};
  regs_mhpmcounter_4 = _RAND_36[63:0];
  _RAND_37 = {2{`RANDOM}};
  regs_mhpmcounter_5 = _RAND_37[63:0];
  _RAND_38 = {2{`RANDOM}};
  regs_mhpmcounter_6 = _RAND_38[63:0];
  _RAND_39 = {2{`RANDOM}};
  regs_mhpmcounter_7 = _RAND_39[63:0];
  _RAND_40 = {2{`RANDOM}};
  regs_mhpmcounter_8 = _RAND_40[63:0];
  _RAND_41 = {2{`RANDOM}};
  regs_mhpmcounter_9 = _RAND_41[63:0];
  _RAND_42 = {2{`RANDOM}};
  regs_mhpmcounter_10 = _RAND_42[63:0];
  _RAND_43 = {2{`RANDOM}};
  regs_mhpmcounter_11 = _RAND_43[63:0];
  _RAND_44 = {2{`RANDOM}};
  regs_mhpmcounter_12 = _RAND_44[63:0];
  _RAND_45 = {2{`RANDOM}};
  regs_mhpmcounter_13 = _RAND_45[63:0];
  _RAND_46 = {2{`RANDOM}};
  regs_mhpmcounter_14 = _RAND_46[63:0];
  _RAND_47 = {2{`RANDOM}};
  regs_mhpmcounter_15 = _RAND_47[63:0];
  _RAND_48 = {2{`RANDOM}};
  regs_mhpmcounter_16 = _RAND_48[63:0];
  _RAND_49 = {2{`RANDOM}};
  regs_mhpmcounter_17 = _RAND_49[63:0];
  _RAND_50 = {2{`RANDOM}};
  regs_mhpmcounter_18 = _RAND_50[63:0];
  _RAND_51 = {2{`RANDOM}};
  regs_mhpmcounter_19 = _RAND_51[63:0];
  _RAND_52 = {2{`RANDOM}};
  regs_mhpmcounter_20 = _RAND_52[63:0];
  _RAND_53 = {2{`RANDOM}};
  regs_mhpmcounter_21 = _RAND_53[63:0];
  _RAND_54 = {2{`RANDOM}};
  regs_mhpmcounter_22 = _RAND_54[63:0];
  _RAND_55 = {2{`RANDOM}};
  regs_mhpmcounter_23 = _RAND_55[63:0];
  _RAND_56 = {2{`RANDOM}};
  regs_mhpmcounter_24 = _RAND_56[63:0];
  _RAND_57 = {2{`RANDOM}};
  regs_mhpmcounter_25 = _RAND_57[63:0];
  _RAND_58 = {2{`RANDOM}};
  regs_mhpmcounter_26 = _RAND_58[63:0];
  _RAND_59 = {2{`RANDOM}};
  regs_mhpmcounter_27 = _RAND_59[63:0];
  _RAND_60 = {2{`RANDOM}};
  regs_mhpmcounter_28 = _RAND_60[63:0];
  _RAND_61 = {2{`RANDOM}};
  reg_mcounterinhibit = _RAND_61[63:0];
  _RAND_62 = {2{`RANDOM}};
  regs_mhpmevet_0 = _RAND_62[63:0];
  _RAND_63 = {2{`RANDOM}};
  regs_mhpmevet_1 = _RAND_63[63:0];
  _RAND_64 = {2{`RANDOM}};
  regs_mhpmevet_2 = _RAND_64[63:0];
  _RAND_65 = {2{`RANDOM}};
  regs_mhpmevet_3 = _RAND_65[63:0];
  _RAND_66 = {2{`RANDOM}};
  regs_mhpmevet_4 = _RAND_66[63:0];
  _RAND_67 = {2{`RANDOM}};
  regs_mhpmevet_5 = _RAND_67[63:0];
  _RAND_68 = {2{`RANDOM}};
  regs_mhpmevet_6 = _RAND_68[63:0];
  _RAND_69 = {2{`RANDOM}};
  regs_mhpmevet_7 = _RAND_69[63:0];
  _RAND_70 = {2{`RANDOM}};
  regs_mhpmevet_8 = _RAND_70[63:0];
  _RAND_71 = {2{`RANDOM}};
  regs_mhpmevet_9 = _RAND_71[63:0];
  _RAND_72 = {2{`RANDOM}};
  regs_mhpmevet_10 = _RAND_72[63:0];
  _RAND_73 = {2{`RANDOM}};
  regs_mhpmevet_11 = _RAND_73[63:0];
  _RAND_74 = {2{`RANDOM}};
  regs_mhpmevet_12 = _RAND_74[63:0];
  _RAND_75 = {2{`RANDOM}};
  regs_mhpmevet_13 = _RAND_75[63:0];
  _RAND_76 = {2{`RANDOM}};
  regs_mhpmevet_14 = _RAND_76[63:0];
  _RAND_77 = {2{`RANDOM}};
  regs_mhpmevet_15 = _RAND_77[63:0];
  _RAND_78 = {2{`RANDOM}};
  regs_mhpmevet_16 = _RAND_78[63:0];
  _RAND_79 = {2{`RANDOM}};
  regs_mhpmevet_17 = _RAND_79[63:0];
  _RAND_80 = {2{`RANDOM}};
  regs_mhpmevet_18 = _RAND_80[63:0];
  _RAND_81 = {2{`RANDOM}};
  regs_mhpmevet_19 = _RAND_81[63:0];
  _RAND_82 = {2{`RANDOM}};
  regs_mhpmevet_20 = _RAND_82[63:0];
  _RAND_83 = {2{`RANDOM}};
  regs_mhpmevet_21 = _RAND_83[63:0];
  _RAND_84 = {2{`RANDOM}};
  regs_mhpmevet_22 = _RAND_84[63:0];
  _RAND_85 = {2{`RANDOM}};
  regs_mhpmevet_23 = _RAND_85[63:0];
  _RAND_86 = {2{`RANDOM}};
  regs_mhpmevet_24 = _RAND_86[63:0];
  _RAND_87 = {2{`RANDOM}};
  regs_mhpmevet_25 = _RAND_87[63:0];
  _RAND_88 = {2{`RANDOM}};
  regs_mhpmevet_26 = _RAND_88[63:0];
  _RAND_89 = {2{`RANDOM}};
  regs_mhpmevet_27 = _RAND_89[63:0];
  _RAND_90 = {2{`RANDOM}};
  regs_mhpmevet_28 = _RAND_90[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      reg_mtvec <= 64'h8000c09c;
    end else if (csr_wen) begin
      if (_T_272) begin
        if (_T_9477) begin
          reg_mtvec <= io__data_in;
        end else if (_T_8) begin
          reg_mtvec <= _T_9479;
        end else if (_T_7) begin
          reg_mtvec <= _T_9482;
        end else if (csr_read_enable) begin
          reg_mtvec <= _T_9475;
        end else begin
          reg_mtvec <= 64'h0;
        end
      end
    end
    if (reset) begin
      reg_mepc <= 64'h0;
    end else if (_T_9489) begin
      if (csr_hasinterrupt) begin
        if (_T_17741) begin
          reg_mepc <= io__in_mem_pc;
        end else if (_T_17742) begin
          reg_mepc <= io__in_exe_pc;
        end else if (_T_17743) begin
          reg_mepc <= io__in_dec_pc;
        end else if (_T_17744) begin
          reg_mepc <= io__in_if_pc;
        end else if (csr_wen) begin
          if (_T_275) begin
            reg_mepc <= _T_10120;
          end
        end
      end else if (csr_ismret) begin
        if (csr_wen) begin
          if (_T_275) begin
            reg_mepc <= _T_10120;
          end
        end
      end else if (csr_hasexception) begin
        if (csr_illegal_ins_exception) begin
          reg_mepc <= io__in_mem_pc;
        end else if (csr_isecall) begin
          reg_mepc <= io__in_mem_pc;
        end else if (csr_isebreak) begin
          reg_mepc <= io__in_mem_pc;
        end else if (csr_wen) begin
          if (_T_275) begin
            reg_mepc <= _T_10120;
          end
        end
      end else if (csr_wen) begin
        if (_T_275) begin
          reg_mepc <= _T_10120;
        end
      end
    end else begin
      reg_mepc <= _GEN_99;
    end
    if (reset) begin
      reg_mcause <= 64'h0;
    end else if (_T_9489) begin
      if (csr_hasinterrupt) begin
        reg_mcause <= 64'h8000000000000007;
      end else if (csr_ismret) begin
        if (csr_wen) begin
          if (_T_276) begin
            if (_T_9477) begin
              reg_mcause <= io__data_in;
            end else if (_T_8) begin
              reg_mcause <= _T_9479;
            end else if (_T_7) begin
              reg_mcause <= _T_9482;
            end else if (csr_read_enable) begin
              reg_mcause <= _T_9475;
            end else begin
              reg_mcause <= 64'h0;
            end
          end
        end
      end else if (csr_hasexception) begin
        if (csr_illegal_ins_exception) begin
          reg_mcause <= 64'h2;
        end else if (csr_isecall) begin
          reg_mcause <= 64'hb;
        end else if (csr_isebreak) begin
          reg_mcause <= 64'h3;
        end else if (csr_wen) begin
          if (_T_276) begin
            if (_T_9477) begin
              reg_mcause <= io__data_in;
            end else if (_T_8) begin
              reg_mcause <= _T_9479;
            end else if (_T_7) begin
              reg_mcause <= _T_9482;
            end else if (csr_read_enable) begin
              reg_mcause <= _T_9475;
            end else begin
              reg_mcause <= 64'h0;
            end
          end
        end
      end else if (csr_wen) begin
        if (_T_276) begin
          if (_T_9477) begin
            reg_mcause <= io__data_in;
          end else if (_T_8) begin
            reg_mcause <= _T_9479;
          end else if (_T_7) begin
            reg_mcause <= _T_9482;
          end else if (csr_read_enable) begin
            reg_mcause <= _T_9475;
          end else begin
            reg_mcause <= 64'h0;
          end
        end
      end
    end else if (csr_wen) begin
      if (_T_276) begin
        reg_mcause <= csr_write_data;
      end
    end
    if (reset) begin
      reg_mie_mti <= 1'h0;
    end else if (csr_wen) begin
      if (_T_270) begin
        reg_mie_mti <= csr_write_data[7];
      end
    end
    if (reset) begin
      reg_mie_msi <= 1'h0;
    end else if (csr_wen) begin
      if (_T_270) begin
        reg_mie_msi <= csr_write_data[3];
      end
    end
    if (reset) begin
      reg_mip_mti <= 1'h0;
    end else begin
      reg_mip_mti <= time_interrupt;
    end
    if (reset) begin
      reg_mip_msi <= 1'h0;
    end else if (csr_wen) begin
      if (_T_271) begin
        reg_mip_msi <= csr_write_data[3];
      end
    end
    if (reset) begin
      reg_mtval <= 64'h0;
    end else if (_T_9489) begin
      if (csr_hasinterrupt) begin
        reg_mtval <= io__in_mem_pc;
      end else if (!(csr_ismret)) begin
        if (csr_hasexception) begin
          if (csr_illegal_ins_exception) begin
            reg_mtval <= {{32'd0}, io__instruction};
          end else if (csr_isecall) begin
            reg_mtval <= io__in_mem_pc;
          end else if (csr_isebreak) begin
            reg_mtval <= io__in_mem_pc;
          end
        end
      end
    end
    if (reset) begin
      reg_mscratch <= 64'h0;
    end else if (csr_wen) begin
      if (_T_274) begin
        reg_mscratch <= csr_write_data;
      end
    end
    if (reset) begin
      reg_mstatus_mpp <= 2'h0;
    end else if (_T_9489) begin
      if (csr_hasinterrupt) begin
        if (_T_9489) begin
          if (csr_hasinterrupt) begin
            reg_mstatus_mpp <= 2'h3;
          end else if (!(csr_ismret)) begin
            reg_mstatus_mpp <= 2'h3;
          end
        end else begin
          reg_mstatus_mpp <= 2'h3;
        end
      end else if (!(csr_ismret)) begin
        if (csr_hasexception) begin
          if (csr_illegal_ins_exception) begin
            if (csr_illegal_ins_exception) begin
              if (_T_9489) begin
                if (csr_hasinterrupt) begin
                  reg_mstatus_mpp <= 2'h3;
                end else if (!(csr_ismret)) begin
                  reg_mstatus_mpp <= 2'h3;
                end
              end else begin
                reg_mstatus_mpp <= 2'h3;
              end
            end else if (csr_isecall) begin
              if (_T_9489) begin
                if (csr_hasinterrupt) begin
                  reg_mstatus_mpp <= 2'h3;
                end else if (!(csr_ismret)) begin
                  reg_mstatus_mpp <= 2'h3;
                end
              end else begin
                reg_mstatus_mpp <= 2'h3;
              end
            end else if (csr_isebreak) begin
              if (_T_9489) begin
                if (csr_hasinterrupt) begin
                  reg_mstatus_mpp <= 2'h3;
                end else if (!(csr_ismret)) begin
                  reg_mstatus_mpp <= 2'h3;
                end
              end else begin
                reg_mstatus_mpp <= 2'h3;
              end
            end
          end else if (csr_isecall) begin
            if (csr_illegal_ins_exception) begin
              reg_mstatus_mpp <= prv_now;
            end else if (csr_isecall) begin
              reg_mstatus_mpp <= prv_now;
            end else if (csr_isebreak) begin
              reg_mstatus_mpp <= prv_now;
            end
          end else if (csr_isebreak) begin
            if (csr_illegal_ins_exception) begin
              reg_mstatus_mpp <= prv_now;
            end else if (csr_isecall) begin
              reg_mstatus_mpp <= prv_now;
            end else if (csr_isebreak) begin
              reg_mstatus_mpp <= prv_now;
            end
          end
        end
      end
    end
    if (reset) begin
      reg_mstatus_mpie <= 1'h0;
    end else if (_T_9489) begin
      if (csr_hasinterrupt) begin
        reg_mstatus_mpie <= reg_mstatus_mie;
      end else begin
        reg_mstatus_mpie <= _GEN_300;
      end
    end else if (csr_wen) begin
      if (_T_266) begin
        reg_mstatus_mpie <= csr_write_data[7];
      end
    end
    if (reset) begin
      reg_mstatus_mie <= 1'h0;
    end else if (_T_9489) begin
      if (csr_hasinterrupt) begin
        reg_mstatus_mie <= 1'h0;
      end else if (csr_ismret) begin
        reg_mstatus_mie <= reg_mstatus_mpie;
      end else if (csr_hasexception) begin
        if (csr_illegal_ins_exception) begin
          if (csr_illegal_ins_exception) begin
            reg_mstatus_mie <= 1'h0;
          end else if (csr_isecall) begin
            reg_mstatus_mie <= 1'h0;
          end else if (csr_isebreak) begin
            reg_mstatus_mie <= 1'h0;
          end
        end else if (csr_isecall) begin
          if (csr_illegal_ins_exception) begin
            reg_mstatus_mie <= 1'h0;
          end else if (csr_isecall) begin
            reg_mstatus_mie <= 1'h0;
          end else if (csr_isebreak) begin
            reg_mstatus_mie <= 1'h0;
          end
        end else if (csr_isebreak) begin
          if (csr_illegal_ins_exception) begin
            reg_mstatus_mie <= 1'h0;
          end else if (csr_isecall) begin
            reg_mstatus_mie <= 1'h0;
          end else if (csr_isebreak) begin
            reg_mstatus_mie <= 1'h0;
          end
        end else if (csr_wen) begin
          if (_T_266) begin
            reg_mstatus_mie <= csr_write_data[3];
          end
        end
      end else if (csr_wen) begin
        if (_T_266) begin
          reg_mstatus_mie <= csr_write_data[3];
        end
      end
    end else if (csr_wen) begin
      if (_T_266) begin
        reg_mstatus_mie <= csr_write_data[3];
      end
    end
    if (reset) begin
      reg_pmpcfg0 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_278) begin
        reg_pmpcfg0 <= csr_write_data;
      end
    end
    if (reset) begin
      reg_pmpcfg1 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_279) begin
        reg_pmpcfg1 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_0 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_283) begin
        regs_pmpaddr_0 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_1 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_284) begin
        regs_pmpaddr_1 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_2 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_285) begin
        regs_pmpaddr_2 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_3 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_286) begin
        regs_pmpaddr_3 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_4 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_287) begin
        regs_pmpaddr_4 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_5 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_288) begin
        regs_pmpaddr_5 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_6 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_289) begin
        regs_pmpaddr_6 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_7 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_290) begin
        regs_pmpaddr_7 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_8 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_291) begin
        regs_pmpaddr_8 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_9 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_292) begin
        regs_pmpaddr_9 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_10 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_293) begin
        regs_pmpaddr_10 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_11 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_294) begin
        regs_pmpaddr_11 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_12 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_295) begin
        regs_pmpaddr_12 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_13 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_296) begin
        regs_pmpaddr_13 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_14 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_297) begin
        regs_pmpaddr_14 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_pmpaddr_15 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_298) begin
        regs_pmpaddr_15 <= csr_write_data;
      end
    end
    if (reset) begin
      reg_mcycle <= 64'h0;
    end else begin
      reg_mcycle <= _T_17729;
    end
    if (reset) begin
      reg_minstret <= 64'h0;
    end else if (io__is_retire) begin
      reg_minstret <= _T_17731;
    end else if (csr_wen) begin
      if (_T_281) begin
        reg_minstret <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_0 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_299) begin
        regs_mhpmcounter_0 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_1 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_300) begin
        regs_mhpmcounter_1 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_2 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_301) begin
        regs_mhpmcounter_2 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_3 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_302) begin
        regs_mhpmcounter_3 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_4 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_303) begin
        regs_mhpmcounter_4 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_5 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_304) begin
        regs_mhpmcounter_5 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_6 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_305) begin
        regs_mhpmcounter_6 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_7 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_306) begin
        regs_mhpmcounter_7 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_8 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_307) begin
        regs_mhpmcounter_8 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_9 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_308) begin
        regs_mhpmcounter_9 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_10 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_309) begin
        regs_mhpmcounter_10 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_11 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_310) begin
        regs_mhpmcounter_11 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_12 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_311) begin
        regs_mhpmcounter_12 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_13 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_312) begin
        regs_mhpmcounter_13 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_14 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_313) begin
        regs_mhpmcounter_14 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_15 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_314) begin
        regs_mhpmcounter_15 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_16 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_315) begin
        regs_mhpmcounter_16 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_17 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_316) begin
        regs_mhpmcounter_17 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_18 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_317) begin
        regs_mhpmcounter_18 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_19 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_318) begin
        regs_mhpmcounter_19 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_20 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_319) begin
        regs_mhpmcounter_20 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_21 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_320) begin
        regs_mhpmcounter_21 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_22 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_321) begin
        regs_mhpmcounter_22 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_23 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_322) begin
        regs_mhpmcounter_23 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_24 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_323) begin
        regs_mhpmcounter_24 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_25 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_324) begin
        regs_mhpmcounter_25 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_26 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_325) begin
        regs_mhpmcounter_26 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_27 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_326) begin
        regs_mhpmcounter_27 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmcounter_28 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_327) begin
        regs_mhpmcounter_28 <= csr_write_data;
      end
    end
    if (reset) begin
      reg_mcounterinhibit <= 64'h0;
    end else if (csr_wen) begin
      if (_T_282) begin
        reg_mcounterinhibit <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_0 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_328) begin
        regs_mhpmevet_0 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_1 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_329) begin
        regs_mhpmevet_1 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_2 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_330) begin
        regs_mhpmevet_2 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_3 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_331) begin
        regs_mhpmevet_3 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_4 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_332) begin
        regs_mhpmevet_4 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_5 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_333) begin
        regs_mhpmevet_5 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_6 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_334) begin
        regs_mhpmevet_6 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_7 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_335) begin
        regs_mhpmevet_7 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_8 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_336) begin
        regs_mhpmevet_8 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_9 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_337) begin
        regs_mhpmevet_9 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_10 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_338) begin
        regs_mhpmevet_10 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_11 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_339) begin
        regs_mhpmevet_11 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_12 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_340) begin
        regs_mhpmevet_12 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_13 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_341) begin
        regs_mhpmevet_13 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_14 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_342) begin
        regs_mhpmevet_14 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_15 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_343) begin
        regs_mhpmevet_15 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_16 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_344) begin
        regs_mhpmevet_16 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_17 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_345) begin
        regs_mhpmevet_17 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_18 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_346) begin
        regs_mhpmevet_18 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_19 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_347) begin
        regs_mhpmevet_19 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_20 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_348) begin
        regs_mhpmevet_20 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_21 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_349) begin
        regs_mhpmevet_21 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_22 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_350) begin
        regs_mhpmevet_22 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_23 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_351) begin
        regs_mhpmevet_23 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_24 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_352) begin
        regs_mhpmevet_24 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_25 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_353) begin
        regs_mhpmevet_25 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_26 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_354) begin
        regs_mhpmevet_26 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_27 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_355) begin
        regs_mhpmevet_27 <= csr_write_data;
      end
    end
    if (reset) begin
      regs_mhpmevet_28 <= 64'h0;
    end else if (csr_wen) begin
      if (_T_356) begin
        regs_mhpmevet_28 <= csr_write_data;
      end
    end
  end
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
  input         io_c2d_cp_control_hazard,
  input         io_c2d_cp_if_kill,
  input         io_c2d_cp_data_hazard,
  input         io_c2d_cp_pipeline_kill,
  input         io_c2d_cp_pipeline_stall,
  input         io_c2d_cp_pipeline_data_stall,
  input         io_c2d_cp_pipeline_inst_stall,
  input  [1:0]  io_c2d_cp_if_pc_branch,
  input  [1:0]  io_c2d_cp_exe_actual_branch,
  input         io_c2d_hasexception,
  input         io_c2d_shouldstall,
  output [31:0] io_d2c_instr,
  output        io_d2c_islt,
  output        io_d2c_isltu,
  output        io_d2c_iseq,
  output        io_d2c_isredir,
  output        io_d2c_mem_mem_valid,
  output [31:0] io_d2c_IF_ins,
  output [1:0]  io_d2c_EXE_pc_branch,
  output [63:0] io_imem_addr,
  input  [63:0] io_imem_rdata,
  output [63:0] io_dmem_addr,
  output [7:0]  io_dmem_mask,
  output [2:0]  io_dmem_op,
  output [63:0] io_dmem_wdata,
  output        io_dmem_memen,
  output        io_dmem_wen,
  input  [63:0] io_dmem_rdata,
  output [63:0] _T_111_0,
  output [63:0] abs_op1,
  output        io_is_retire,
  output        io_isredir,
  output [63:0] dp_wb_reg_pc_0,
  output        io_exe_stall,
  output [63:0] _T_17772,
  output [31:0] dp_wb_reg_instr_0,
  output        io_exe_stall_0,
  output [63:0] _T_110_0,
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
  output [63:0] _T_41_0_31,
  input         has_time_interrupt,
  output [63:0] abs_op2
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [63:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [63:0] _RAND_42;
  reg [31:0] _RAND_43;
`endif // RANDOMIZE_REG_INIT
  wire  regfile_clock; // @[dpath.scala 146:25]
  wire [4:0] regfile_io_rp1; // @[dpath.scala 146:25]
  wire [4:0] regfile_io_rp2; // @[dpath.scala 146:25]
  wire [63:0] regfile_io_rp1_data; // @[dpath.scala 146:25]
  wire [63:0] regfile_io_rp2_data; // @[dpath.scala 146:25]
  wire [4:0] regfile_io_wp; // @[dpath.scala 146:25]
  wire [63:0] regfile_io_wp_data; // @[dpath.scala 146:25]
  wire  regfile_io_wp_en; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_0; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_1; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_2; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_3; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_4; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_5; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_6; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_7; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_8; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_9; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_10; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_11; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_12; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_13; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_14; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_15; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_16; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_17; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_18; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_19; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_20; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_21; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_22; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_23; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_24; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_25; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_26; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_27; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_28; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_29; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_30; // @[dpath.scala 146:25]
  wire [63:0] regfile__T_41_0_31; // @[dpath.scala 146:25]
  wire  dp_alu_clock; // @[dpath.scala 389:24]
  wire  dp_alu_reset; // @[dpath.scala 389:24]
  wire [63:0] dp_alu_io_input1; // @[dpath.scala 389:24]
  wire [63:0] dp_alu_io_input2; // @[dpath.scala 389:24]
  wire [4:0] dp_alu_io_op; // @[dpath.scala 389:24]
  wire [2:0] dp_alu_io_res_ext_op; // @[dpath.scala 389:24]
  wire  dp_alu_io_pipeline_stall; // @[dpath.scala 389:24]
  wire [63:0] dp_alu_io_res; // @[dpath.scala 389:24]
  wire [63:0] dp_alu__T_111_0; // @[dpath.scala 389:24]
  wire [63:0] dp_alu_abs_op1; // @[dpath.scala 389:24]
  wire  dp_alu_io_exe_stall; // @[dpath.scala 389:24]
  wire  dp_alu_io_exe_stall_0; // @[dpath.scala 389:24]
  wire [63:0] dp_alu__T_110_0; // @[dpath.scala 389:24]
  wire [63:0] dp_alu_abs_op2; // @[dpath.scala 389:24]
  wire  csr_clock; // @[dpath.scala 483:21]
  wire  csr_reset; // @[dpath.scala 483:21]
  wire [31:0] csr_io__instruction; // @[dpath.scala 483:21]
  wire [2:0] csr_io__csr_op; // @[dpath.scala 483:21]
  wire [63:0] csr_io__data_in; // @[dpath.scala 483:21]
  wire  csr_io__hasException; // @[dpath.scala 483:21]
  wire  csr_io__hasStall; // @[dpath.scala 483:21]
  wire [63:0] csr_io__in_mem_pc; // @[dpath.scala 483:21]
  wire [63:0] csr_io__in_exe_pc; // @[dpath.scala 483:21]
  wire [63:0] csr_io__in_dec_pc; // @[dpath.scala 483:21]
  wire [63:0] csr_io__in_if_pc; // @[dpath.scala 483:21]
  wire  csr_io__is_retire; // @[dpath.scala 483:21]
  wire [63:0] csr_io__redir_target; // @[dpath.scala 483:21]
  wire [63:0] csr_io__csr_info; // @[dpath.scala 483:21]
  wire  csr_io__isredir; // @[dpath.scala 483:21]
  wire  csr_io__csr_illegal_ins_exception; // @[dpath.scala 483:21]
  wire  csr_io_is_retire; // @[dpath.scala 483:21]
  wire  csr_io_isredir; // @[dpath.scala 483:21]
  wire [63:0] csr__T_17772_0; // @[dpath.scala 483:21]
  wire  csr_time_interrupt; // @[dpath.scala 483:21]
  reg [63:0] reg_if_pc; // @[dpath.scala 39:28]
  wire [63:0] wire_pc_next_4 = reg_if_pc + 64'h4; // @[dpath.scala 56:33]
  wire  _T_3 = io_c2d_cp_pc_sel == 3'h0; // @[dpath.scala 60:27]
  wire  _T_4 = io_c2d_cp_pc_sel == 3'h4; // @[dpath.scala 61:27]
  wire  _T_5 = io_c2d_cp_pc_sel == 3'h1; // @[dpath.scala 62:27]
  wire  _T_6 = io_c2d_cp_pc_sel == 3'h3; // @[dpath.scala 63:27]
  wire  _T_7 = io_c2d_cp_pc_sel == 3'h2; // @[dpath.scala 64:27]
  wire  _T_8 = io_c2d_cp_pc_sel == 3'h5; // @[dpath.scala 65:27]
  wire [31:0] wire_if_instr = io_imem_rdata[31:0]; // @[dpath.scala 69:47]
  wire [11:0] if_bim = {wire_if_instr[31],wire_if_instr[7],wire_if_instr[30:25],wire_if_instr[11:8]}; // @[Cat.scala 29:58]
  wire [50:0] _T_24 = if_bim[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] if_bim_ext = {_T_24,wire_if_instr[31],wire_if_instr[7],wire_if_instr[30:25],wire_if_instr[11:8],1'h0}; // @[Cat.scala 29:58]
  wire [63:0] wire_pc_bpu_target = reg_if_pc + if_bim_ext; // @[dpath.scala 74:37]
  wire  _T_139 = io_c2d_cp_exe_actual_branch == 2'h1; // @[dpath.scala 384:62]
  reg [63:0] dp_exe_reg_pc; // @[dpath.scala 239:32]
  reg [63:0] dp_exe_reg_bim_ext; // @[dpath.scala 245:37]
  wire [63:0] _T_145 = $signed(dp_exe_reg_pc) + $signed(dp_exe_reg_bim_ext); // @[dpath.scala 384:136]
  wire [63:0] _T_151 = $signed(dp_exe_reg_pc) + 64'sh4; // @[dpath.scala 384:191]
  reg [63:0] dp_exe_reg_op1_source; // @[dpath.scala 184:36]
  reg [63:0] dp_exe_reg_iim_ext; // @[dpath.scala 244:37]
  wire [63:0] _T_135 = $signed(dp_exe_reg_op1_source) + $signed(dp_exe_reg_iim_ext); // @[dpath.scala 383:60]
  wire [62:0] _T_136 = _T_135[63:1]; // @[dpath.scala 383:91]
  wire [63:0] wire_pc_jr_target = {$signed(_T_136), 1'h0}; // @[dpath.scala 383:109]
  reg [63:0] dp_exe_reg_jim_ext; // @[dpath.scala 243:37]
  wire [63:0] wire_pc_jump_target = $signed(dp_exe_reg_pc) + $signed(dp_exe_reg_jim_ext); // @[dpath.scala 381:89]
  wire [63:0] wire_pc_redirect_target = csr_io__redir_target; // @[dpath.scala 48:39 dpath.scala 495:29]
  reg [31:0] reg_dec_instr; // @[dpath.scala 78:32]
  reg  reg_dec_instr_valid; // @[dpath.scala 79:38]
  reg [63:0] reg_dec_pc; // @[dpath.scala 80:29]
  reg [1:0] reg_dec_pc_branch; // @[dpath.scala 82:36]
  wire  _GEN_2 = io_c2d_cp_if_kill ? 1'h0 : 1'h1; // @[dpath.scala 120:9]
  wire  _GEN_7 = io_c2d_cp_control_hazard ? 1'h0 : _GEN_2; // @[dpath.scala 113:9]
  wire  _GEN_12 = io_c2d_cp_data_hazard | _GEN_7; // @[dpath.scala 106:9]
  wire [4:0] dp_dec_rs1_addr = reg_dec_instr[19:15]; // @[dpath.scala 142:40]
  wire [4:0] dp_dec_rs2_addr = reg_dec_instr[24:20]; // @[dpath.scala 143:40]
  wire [4:0] dp_dec_rd_addr = reg_dec_instr[11:7]; // @[dpath.scala 144:40]
  wire [11:0] dp_dec_iim = reg_dec_instr[31:20]; // @[dpath.scala 154:35]
  wire [19:0] dp_dec_jim = {reg_dec_instr[31],reg_dec_instr[19:12],reg_dec_instr[20],reg_dec_instr[30:21]}; // @[Cat.scala 29:58]
  wire [19:0] dp_dec_uim = reg_dec_instr[31:12]; // @[dpath.scala 156:35]
  wire [11:0] dp_dec_sim = {reg_dec_instr[31:25],dp_dec_rd_addr}; // @[Cat.scala 29:58]
  wire [11:0] dp_dec_bim = {reg_dec_instr[31],reg_dec_instr[7],reg_dec_instr[30:25],reg_dec_instr[11:8]}; // @[Cat.scala 29:58]
  wire [53:0] _T_44 = dp_dec_iim[11] ? 54'h3fffffffffffff : 54'h0; // @[Bitwise.scala 72:12]
  wire [65:0] dp_dec_iim_ext = {_T_44,dp_dec_iim}; // @[Cat.scala 29:58]
  wire [42:0] _T_47 = dp_dec_jim[19] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_dec_jim_ext = {_T_47,reg_dec_instr[31],reg_dec_instr[19:12],reg_dec_instr[20],reg_dec_instr[30:21],1'h0}; // @[Cat.scala 29:58]
  wire [31:0] _T_51 = dp_dec_uim[19] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_dec_uim_ext = {_T_51,dp_dec_uim,12'h0}; // @[Cat.scala 29:58]
  wire [51:0] _T_56 = dp_dec_sim[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_dec_sim_ext = {_T_56,reg_dec_instr[31:25],dp_dec_rd_addr}; // @[Cat.scala 29:58]
  wire [50:0] _T_59 = dp_dec_bim[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] dp_dec_bim_ext = {_T_59,reg_dec_instr[31],reg_dec_instr[7],reg_dec_instr[30:25],reg_dec_instr[11:8],1'h0}; // @[Cat.scala 29:58]
  wire [63:0] dp_dec_zim_ext = {59'h0,dp_dec_rs1_addr}; // @[Cat.scala 29:58]
  reg [4:0] dp_exe_reg_rd_addr; // @[dpath.scala 176:37]
  reg [4:0] dp_mem_reg_rd_addr; // @[dpath.scala 177:37]
  reg [4:0] dp_wb_reg_rd_addr; // @[dpath.scala 178:37]
  reg  dp_exe_reg_rf_wen; // @[dpath.scala 180:36]
  reg  dp_mem_reg_rf_wen; // @[dpath.scala 181:36]
  reg  dp_wb_reg_rf_wen; // @[dpath.scala 182:36]
  reg [63:0] dp_exe_reg_op2_source; // @[dpath.scala 185:36]
  reg [31:0] dp_exe_reg_instr; // @[dpath.scala 190:35]
  reg [63:0] dp_wb_reg_wb_data; // @[dpath.scala 194:36]
  wire  _T_62 = io_c2d_cp_op1_sel == 2'h1; // @[dpath.scala 198:28]
  wire  _T_63 = io_c2d_cp_op1_sel == 2'h2; // @[dpath.scala 199:28]
  wire  _T_64 = dp_dec_rs1_addr == dp_exe_reg_rd_addr; // @[dpath.scala 201:26]
  wire  _T_65 = dp_dec_rs1_addr != 5'h0; // @[dpath.scala 201:68]
  wire  _T_66 = _T_64 & _T_65; // @[dpath.scala 201:49]
  wire  _T_67 = _T_66 & dp_exe_reg_rf_wen; // @[dpath.scala 201:76]
  wire  _T_68 = dp_dec_rs1_addr == dp_mem_reg_rd_addr; // @[dpath.scala 202:26]
  wire  _T_70 = _T_68 & _T_65; // @[dpath.scala 202:49]
  wire  _T_71 = _T_70 & dp_mem_reg_rf_wen; // @[dpath.scala 202:76]
  wire  _T_72 = dp_dec_rs1_addr == dp_wb_reg_rd_addr; // @[dpath.scala 203:26]
  wire  _T_74 = _T_72 & _T_65; // @[dpath.scala 203:48]
  wire  _T_75 = _T_74 & dp_wb_reg_rf_wen; // @[dpath.scala 203:75]
  reg [1:0] dp_mem_reg_wb_sel; // @[dpath.scala 418:46]
  wire  _T_159 = dp_mem_reg_wb_sel == 2'h0; // @[dpath.scala 499:28]
  reg [63:0] dp_mem_reg_alu_out; // @[dpath.scala 417:46]
  wire  _T_160 = dp_mem_reg_wb_sel == 2'h1; // @[dpath.scala 500:28]
  wire  _T_161 = dp_mem_reg_wb_sel == 2'h2; // @[dpath.scala 501:28]
  reg [63:0] dp_mem_reg_pc; // @[dpath.scala 416:46]
  wire [63:0] _T_163 = dp_mem_reg_pc + 64'h4; // @[dpath.scala 501:62]
  wire  _T_164 = dp_mem_reg_wb_sel == 2'h3; // @[dpath.scala 502:28]
  wire [63:0] _T_165 = _T_164 ? csr_io__csr_info : dp_mem_reg_alu_out; // @[Mux.scala 98:16]
  wire [63:0] _T_166 = _T_161 ? _T_163 : _T_165; // @[Mux.scala 98:16]
  wire [63:0] _T_167 = _T_160 ? io_dmem_rdata : _T_166; // @[Mux.scala 98:16]
  wire [63:0] dp_wire_mem_memstageout = _T_159 ? dp_mem_reg_alu_out : _T_167; // @[Mux.scala 98:16]
  wire [63:0] dp_wire_exe_aluout = dp_alu_io_res; // @[dpath.scala 398:24]
  wire  _T_81 = io_c2d_cp_op2_sel == 2'h0; // @[dpath.scala 207:28]
  wire  _T_82 = io_c2d_cp_op2_sel == 2'h1; // @[dpath.scala 208:28]
  wire  _T_83 = io_c2d_cp_op2_sel == 2'h2; // @[dpath.scala 209:28]
  wire  _T_84 = io_c2d_cp_op2_sel == 2'h3; // @[dpath.scala 210:28]
  wire [63:0] _T_85 = _T_84 ? dp_dec_sim_ext : regfile_io_rp2_data; // @[Mux.scala 98:16]
  wire [65:0] _T_86 = _T_83 ? dp_dec_iim_ext : {{2'd0}, _T_85}; // @[Mux.scala 98:16]
  wire [65:0] _T_87 = _T_82 ? {{2'd0}, reg_dec_pc} : _T_86; // @[Mux.scala 98:16]
  wire [65:0] _T_88 = _T_81 ? {{2'd0}, regfile_io_rp2_data} : _T_87; // @[Mux.scala 98:16]
  wire  _T_89 = dp_dec_rs2_addr == dp_exe_reg_rd_addr; // @[dpath.scala 214:26]
  wire  _T_91 = _T_89 & _T_81; // @[dpath.scala 214:49]
  wire  _T_92 = dp_dec_rs2_addr != 5'h0; // @[dpath.scala 214:101]
  wire  _T_93 = _T_91 & _T_92; // @[dpath.scala 214:82]
  wire  _T_94 = _T_93 & dp_exe_reg_rf_wen; // @[dpath.scala 214:109]
  wire  _T_95 = dp_dec_rs2_addr == dp_mem_reg_rd_addr; // @[dpath.scala 215:26]
  wire  _T_97 = _T_95 & _T_81; // @[dpath.scala 215:49]
  wire  _T_99 = _T_97 & _T_92; // @[dpath.scala 215:82]
  wire  _T_100 = _T_99 & dp_mem_reg_rf_wen; // @[dpath.scala 215:109]
  wire  _T_101 = dp_dec_rs2_addr == dp_wb_reg_rd_addr; // @[dpath.scala 216:26]
  wire  _T_103 = _T_101 & _T_81; // @[dpath.scala 216:48]
  wire  _T_105 = _T_103 & _T_92; // @[dpath.scala 216:81]
  wire  _T_106 = _T_105 & dp_wb_reg_rf_wen; // @[dpath.scala 216:108]
  wire [63:0] dp_dec_wire_op2_temp = _T_88[63:0]; // @[dpath.scala 187:38 dpath.scala 206:26]
  reg [63:0] dp_exe_reg_rs2_data; // @[dpath.scala 220:39]
  wire  _T_112 = _T_89 & _T_92; // @[dpath.scala 224:49]
  wire  _T_113 = _T_112 & dp_exe_reg_rf_wen; // @[dpath.scala 224:76]
  wire  _T_116 = _T_95 & _T_92; // @[dpath.scala 225:49]
  wire  _T_117 = _T_116 & dp_mem_reg_rf_wen; // @[dpath.scala 225:76]
  wire  _T_120 = _T_101 & _T_92; // @[dpath.scala 226:48]
  wire  _T_121 = _T_120 & dp_wb_reg_rf_wen; // @[dpath.scala 226:75]
  reg [4:0] dp_exe_reg_alu_sel; // @[dpath.scala 230:37]
  reg  dp_exe_reg_mem_en; // @[dpath.scala 231:36]
  reg [2:0] dp_exe_reg_mem_read_op; // @[dpath.scala 232:41]
  reg [7:0] dp_exe_reg_mem_write_mask; // @[dpath.scala 233:44]
  reg  dp_exe_reg_mem_wen; // @[dpath.scala 234:37]
  reg [2:0] dp_exe_reg_alu_ext_sel; // @[dpath.scala 235:41]
  reg [1:0] dp_exe_reg_wb_sel; // @[dpath.scala 236:36]
  reg [2:0] dp_exe_reg_csr_op; // @[dpath.scala 237:36]
  reg  dp_exe_reg_instr_valid; // @[dpath.scala 241:41]
  reg [1:0] dp_exe_pc_branch; // @[dpath.scala 249:35]
  wire [65:0] _GEN_41 = io_c2d_cp_control_hazard ? 66'h0 : dp_dec_iim_ext; // @[dpath.scala 327:9]
  wire [65:0] _GEN_62 = io_c2d_cp_data_hazard ? 66'h0 : _GEN_41; // @[dpath.scala 303:9]
  wire [65:0] _GEN_83 = io_c2d_cp_pipeline_kill ? 66'h0 : _GEN_62; // @[dpath.scala 278:5]
  wire [65:0] _GEN_104 = io_c2d_cp_pipeline_stall ? {{2'd0}, dp_exe_reg_iim_ext} : _GEN_83; // @[dpath.scala 254:5]
  reg [31:0] dp_mem_reg_instr; // @[dpath.scala 408:46]
  reg  dp_mem_reg_instr_valid; // @[dpath.scala 409:46]
  reg [63:0] dp_mem_reg_rs2_data; // @[dpath.scala 410:46]
  reg  dp_mem_reg_mem_en; // @[dpath.scala 411:46]
  reg [2:0] dp_mem_reg_mem_read_op; // @[dpath.scala 412:46]
  reg [7:0] dp_mem_reg_mem_write_mask; // @[dpath.scala 413:46]
  reg  dp_mem_reg_mem_wen; // @[dpath.scala 414:46]
  reg [2:0] dp_mem_reg_csr_op; // @[dpath.scala 415:46]
  reg  dp_wb_reg_instr_valid; // @[dpath.scala 507:40]
  reg [63:0] dp_wb_reg_pc; // @[dpath.scala 508:31]
  reg [31:0] dp_wb_reg_instr; // @[dpath.scala 509:34]
  wire  _T_169 = io_c2d_cp_pipeline_data_stall & io_c2d_cp_pipeline_inst_stall; // @[dpath.scala 514:44]
  wire  _T_170 = ~io_c2d_cp_pipeline_data_stall; // @[dpath.scala 522:20]
  wire  _T_171 = _T_170 & io_c2d_cp_pipeline_inst_stall; // @[dpath.scala 522:51]
  wire  _T_172 = ~csr_io__csr_illegal_ins_exception; // @[dpath.scala 526:18]
  wire  _GEN_135 = _T_172 & dp_mem_reg_rf_wen; // @[dpath.scala 527:13]
  Regfile regfile ( // @[dpath.scala 146:25]
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
  alu_module dp_alu ( // @[dpath.scala 389:24]
    .clock(dp_alu_clock),
    .reset(dp_alu_reset),
    .io_input1(dp_alu_io_input1),
    .io_input2(dp_alu_io_input2),
    .io_op(dp_alu_io_op),
    .io_res_ext_op(dp_alu_io_res_ext_op),
    .io_pipeline_stall(dp_alu_io_pipeline_stall),
    .io_res(dp_alu_io_res),
    ._T_111_0(dp_alu__T_111_0),
    .abs_op1(dp_alu_abs_op1),
    .io_exe_stall(dp_alu_io_exe_stall),
    .io_exe_stall_0(dp_alu_io_exe_stall_0),
    ._T_110_0(dp_alu__T_110_0),
    .abs_op2(dp_alu_abs_op2)
  );
  CSRfile csr ( // @[dpath.scala 483:21]
    .clock(csr_clock),
    .reset(csr_reset),
    .io__instruction(csr_io__instruction),
    .io__csr_op(csr_io__csr_op),
    .io__data_in(csr_io__data_in),
    .io__hasException(csr_io__hasException),
    .io__hasStall(csr_io__hasStall),
    .io__in_mem_pc(csr_io__in_mem_pc),
    .io__in_exe_pc(csr_io__in_exe_pc),
    .io__in_dec_pc(csr_io__in_dec_pc),
    .io__in_if_pc(csr_io__in_if_pc),
    .io__is_retire(csr_io__is_retire),
    .io__redir_target(csr_io__redir_target),
    .io__csr_info(csr_io__csr_info),
    .io__isredir(csr_io__isredir),
    .io__csr_illegal_ins_exception(csr_io__csr_illegal_ins_exception),
    .io_is_retire(csr_io_is_retire),
    .io_isredir(csr_io_isredir),
    ._T_17772_0(csr__T_17772_0),
    .time_interrupt(csr_time_interrupt)
  );
  assign io_d2c_instr = reg_dec_instr; // @[dpath.scala 138:18]
  assign io_d2c_islt = $signed(dp_exe_reg_op1_source) < $signed(dp_exe_reg_op2_source); // @[dpath.scala 403:17]
  assign io_d2c_isltu = dp_exe_reg_op1_source < dp_exe_reg_op2_source; // @[dpath.scala 404:18]
  assign io_d2c_iseq = dp_exe_reg_op1_source == dp_exe_reg_op2_source; // @[dpath.scala 405:17]
  assign io_d2c_isredir = csr_io__isredir; // @[dpath.scala 496:20]
  assign io_d2c_mem_mem_valid = dp_mem_reg_mem_en; // @[dpath.scala 473:26]
  assign io_d2c_IF_ins = io_imem_rdata[31:0]; // @[dpath.scala 70:19]
  assign io_d2c_EXE_pc_branch = dp_exe_pc_branch; // @[dpath.scala 386:26]
  assign io_imem_addr = {{32'd0}, reg_if_pc[31:0]}; // @[dpath.scala 52:18]
  assign io_dmem_addr = {{32'd0}, dp_mem_reg_alu_out[31:0]}; // @[dpath.scala 477:18]
  assign io_dmem_mask = dp_mem_reg_mem_write_mask; // @[dpath.scala 478:18]
  assign io_dmem_op = dp_mem_reg_mem_read_op; // @[dpath.scala 479:16]
  assign io_dmem_wdata = dp_mem_reg_rs2_data; // @[dpath.scala 480:19]
  assign io_dmem_memen = dp_mem_reg_mem_en; // @[dpath.scala 476:19]
  assign io_dmem_wen = dp_mem_reg_mem_wen; // @[dpath.scala 481:17]
  assign _T_111_0 = dp_alu__T_111_0;
  assign abs_op1 = dp_alu_abs_op1;
  assign io_is_retire = csr_io_is_retire;
  assign io_isredir = csr_io_isredir;
  assign dp_wb_reg_pc_0 = dp_wb_reg_pc;
  assign io_exe_stall = dp_alu_io_exe_stall;
  assign _T_17772 = csr__T_17772_0;
  assign dp_wb_reg_instr_0 = dp_wb_reg_instr;
  assign io_exe_stall_0 = dp_alu_io_exe_stall_0;
  assign _T_110_0 = dp_alu__T_110_0;
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
  assign abs_op2 = dp_alu_abs_op2;
  assign regfile_clock = clock;
  assign regfile_io_rp1 = reg_dec_instr[19:15]; // @[dpath.scala 148:20]
  assign regfile_io_rp2 = reg_dec_instr[24:20]; // @[dpath.scala 149:20]
  assign regfile_io_wp = dp_wb_reg_rd_addr; // @[dpath.scala 583:19]
  assign regfile_io_wp_data = dp_wb_reg_wb_data; // @[dpath.scala 584:24]
  assign regfile_io_wp_en = dp_wb_reg_rf_wen & dp_wb_reg_instr_valid; // @[dpath.scala 578:26 dpath.scala 581:26]
  assign dp_alu_clock = clock;
  assign dp_alu_reset = reset;
  assign dp_alu_io_input1 = dp_exe_reg_op1_source; // @[dpath.scala 391:22]
  assign dp_alu_io_input2 = dp_exe_reg_op2_source; // @[dpath.scala 392:22]
  assign dp_alu_io_op = dp_exe_reg_alu_sel; // @[dpath.scala 394:18]
  assign dp_alu_io_res_ext_op = dp_exe_reg_alu_ext_sel; // @[dpath.scala 395:26]
  assign dp_alu_io_pipeline_stall = io_c2d_cp_pipeline_stall; // @[dpath.scala 396:30]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io__instruction = dp_mem_reg_instr; // @[dpath.scala 485:24]
  assign csr_io__csr_op = dp_mem_reg_csr_op; // @[dpath.scala 486:19]
  assign csr_io__data_in = dp_mem_reg_alu_out; // @[dpath.scala 487:20]
  assign csr_io__hasException = io_c2d_hasexception; // @[dpath.scala 488:25]
  assign csr_io__hasStall = io_c2d_shouldstall; // @[dpath.scala 489:21]
  assign csr_io__in_mem_pc = dp_mem_reg_pc; // @[dpath.scala 490:22]
  assign csr_io__in_exe_pc = dp_exe_reg_pc; // @[dpath.scala 491:22]
  assign csr_io__in_dec_pc = reg_dec_pc; // @[dpath.scala 492:22]
  assign csr_io__in_if_pc = reg_if_pc; // @[dpath.scala 493:21]
  assign csr_io__is_retire = dp_wb_reg_instr_valid; // @[dpath.scala 586:22]
  assign csr_time_interrupt = has_time_interrupt;
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
  reg_if_pc = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  dp_exe_reg_pc = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  dp_exe_reg_bim_ext = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  dp_exe_reg_op1_source = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  dp_exe_reg_iim_ext = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  dp_exe_reg_jim_ext = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  reg_dec_instr = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  reg_dec_instr_valid = _RAND_7[0:0];
  _RAND_8 = {2{`RANDOM}};
  reg_dec_pc = _RAND_8[63:0];
  _RAND_9 = {1{`RANDOM}};
  reg_dec_pc_branch = _RAND_9[1:0];
  _RAND_10 = {1{`RANDOM}};
  dp_exe_reg_rd_addr = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  dp_mem_reg_rd_addr = _RAND_11[4:0];
  _RAND_12 = {1{`RANDOM}};
  dp_wb_reg_rd_addr = _RAND_12[4:0];
  _RAND_13 = {1{`RANDOM}};
  dp_exe_reg_rf_wen = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  dp_mem_reg_rf_wen = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  dp_wb_reg_rf_wen = _RAND_15[0:0];
  _RAND_16 = {2{`RANDOM}};
  dp_exe_reg_op2_source = _RAND_16[63:0];
  _RAND_17 = {1{`RANDOM}};
  dp_exe_reg_instr = _RAND_17[31:0];
  _RAND_18 = {2{`RANDOM}};
  dp_wb_reg_wb_data = _RAND_18[63:0];
  _RAND_19 = {1{`RANDOM}};
  dp_mem_reg_wb_sel = _RAND_19[1:0];
  _RAND_20 = {2{`RANDOM}};
  dp_mem_reg_alu_out = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  dp_mem_reg_pc = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  dp_exe_reg_rs2_data = _RAND_22[63:0];
  _RAND_23 = {1{`RANDOM}};
  dp_exe_reg_alu_sel = _RAND_23[4:0];
  _RAND_24 = {1{`RANDOM}};
  dp_exe_reg_mem_en = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  dp_exe_reg_mem_read_op = _RAND_25[2:0];
  _RAND_26 = {1{`RANDOM}};
  dp_exe_reg_mem_write_mask = _RAND_26[7:0];
  _RAND_27 = {1{`RANDOM}};
  dp_exe_reg_mem_wen = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  dp_exe_reg_alu_ext_sel = _RAND_28[2:0];
  _RAND_29 = {1{`RANDOM}};
  dp_exe_reg_wb_sel = _RAND_29[1:0];
  _RAND_30 = {1{`RANDOM}};
  dp_exe_reg_csr_op = _RAND_30[2:0];
  _RAND_31 = {1{`RANDOM}};
  dp_exe_reg_instr_valid = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  dp_exe_pc_branch = _RAND_32[1:0];
  _RAND_33 = {1{`RANDOM}};
  dp_mem_reg_instr = _RAND_33[31:0];
  _RAND_34 = {1{`RANDOM}};
  dp_mem_reg_instr_valid = _RAND_34[0:0];
  _RAND_35 = {2{`RANDOM}};
  dp_mem_reg_rs2_data = _RAND_35[63:0];
  _RAND_36 = {1{`RANDOM}};
  dp_mem_reg_mem_en = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  dp_mem_reg_mem_read_op = _RAND_37[2:0];
  _RAND_38 = {1{`RANDOM}};
  dp_mem_reg_mem_write_mask = _RAND_38[7:0];
  _RAND_39 = {1{`RANDOM}};
  dp_mem_reg_mem_wen = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  dp_mem_reg_csr_op = _RAND_40[2:0];
  _RAND_41 = {1{`RANDOM}};
  dp_wb_reg_instr_valid = _RAND_41[0:0];
  _RAND_42 = {2{`RANDOM}};
  dp_wb_reg_pc = _RAND_42[63:0];
  _RAND_43 = {1{`RANDOM}};
  dp_wb_reg_instr = _RAND_43[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      reg_if_pc <= 64'h80000000;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        if (_T_3) begin
          reg_if_pc <= wire_pc_next_4;
        end else if (_T_4) begin
          reg_if_pc <= wire_pc_redirect_target;
        end else if (_T_5) begin
          reg_if_pc <= wire_pc_jump_target;
        end else if (_T_6) begin
          reg_if_pc <= wire_pc_jr_target;
        end else if (_T_7) begin
          if (_T_139) begin
            reg_if_pc <= _T_145;
          end else begin
            reg_if_pc <= _T_151;
          end
        end else if (_T_8) begin
          reg_if_pc <= wire_pc_bpu_target;
        end else begin
          reg_if_pc <= wire_pc_next_4;
        end
      end else if (!(io_c2d_cp_data_hazard)) begin
        if (io_c2d_cp_control_hazard) begin
          if (_T_3) begin
            reg_if_pc <= wire_pc_next_4;
          end else if (_T_4) begin
            reg_if_pc <= wire_pc_redirect_target;
          end else if (_T_5) begin
            reg_if_pc <= wire_pc_jump_target;
          end else if (_T_6) begin
            reg_if_pc <= wire_pc_jr_target;
          end else if (_T_7) begin
            if (_T_139) begin
              reg_if_pc <= _T_145;
            end else begin
              reg_if_pc <= _T_151;
            end
          end else if (_T_8) begin
            reg_if_pc <= wire_pc_bpu_target;
          end else begin
            reg_if_pc <= wire_pc_next_4;
          end
        end else if (!(io_c2d_cp_if_kill)) begin
          if (_T_3) begin
            reg_if_pc <= wire_pc_next_4;
          end else if (_T_4) begin
            reg_if_pc <= wire_pc_redirect_target;
          end else if (_T_5) begin
            reg_if_pc <= wire_pc_jump_target;
          end else if (_T_6) begin
            reg_if_pc <= wire_pc_jr_target;
          end else if (_T_7) begin
            if (_T_139) begin
              reg_if_pc <= _T_145;
            end else begin
              reg_if_pc <= _T_151;
            end
          end else if (_T_8) begin
            reg_if_pc <= wire_pc_bpu_target;
          end else begin
            reg_if_pc <= wire_pc_next_4;
          end
        end
      end
    end
    if (reset) begin
      dp_exe_reg_pc <= 64'h80000000;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_pc <= 64'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_pc <= 64'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_pc <= 64'h0;
      end else begin
        dp_exe_reg_pc <= reg_dec_pc;
      end
    end
    if (reset) begin
      dp_exe_reg_bim_ext <= 64'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_bim_ext <= 64'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_bim_ext <= 64'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_bim_ext <= 64'h0;
      end else begin
        dp_exe_reg_bim_ext <= dp_dec_bim_ext;
      end
    end
    if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_op1_source <= 64'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_op1_source <= 64'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_op1_source <= 64'h0;
      end else if (_T_62) begin
        dp_exe_reg_op1_source <= dp_dec_zim_ext;
      end else if (_T_63) begin
        dp_exe_reg_op1_source <= dp_dec_uim_ext;
      end else if (_T_67) begin
        dp_exe_reg_op1_source <= dp_wire_exe_aluout;
      end else if (_T_71) begin
        if (_T_159) begin
          dp_exe_reg_op1_source <= dp_mem_reg_alu_out;
        end else if (_T_160) begin
          dp_exe_reg_op1_source <= io_dmem_rdata;
        end else if (_T_161) begin
          dp_exe_reg_op1_source <= _T_163;
        end else if (_T_164) begin
          dp_exe_reg_op1_source <= csr_io__csr_info;
        end else begin
          dp_exe_reg_op1_source <= dp_mem_reg_alu_out;
        end
      end else if (_T_75) begin
        dp_exe_reg_op1_source <= dp_wb_reg_wb_data;
      end else begin
        dp_exe_reg_op1_source <= regfile_io_rp1_data;
      end
    end
    if (reset) begin
      dp_exe_reg_iim_ext <= 64'h0;
    end else begin
      dp_exe_reg_iim_ext <= _GEN_104[63:0];
    end
    if (reset) begin
      dp_exe_reg_jim_ext <= 64'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_jim_ext <= 64'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_jim_ext <= 64'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_jim_ext <= 64'h0;
      end else begin
        dp_exe_reg_jim_ext <= dp_dec_jim_ext;
      end
    end
    if (reset) begin
      reg_dec_instr <= 32'h4033;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        reg_dec_instr <= 32'h4033;
      end else if (!(io_c2d_cp_data_hazard)) begin
        if (io_c2d_cp_control_hazard) begin
          reg_dec_instr <= 32'h4033;
        end else if (io_c2d_cp_if_kill) begin
          reg_dec_instr <= 32'h4033;
        end else begin
          reg_dec_instr <= wire_if_instr;
        end
      end
    end
    if (reset) begin
      reg_dec_instr_valid <= 1'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        reg_dec_instr_valid <= 1'h0;
      end else begin
        reg_dec_instr_valid <= _GEN_12;
      end
    end
    if (reset) begin
      reg_dec_pc <= 64'h80000000;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        reg_dec_pc <= 64'h0;
      end else if (!(io_c2d_cp_data_hazard)) begin
        if (io_c2d_cp_control_hazard) begin
          reg_dec_pc <= 64'h0;
        end else if (io_c2d_cp_if_kill) begin
          reg_dec_pc <= 64'h0;
        end else begin
          reg_dec_pc <= reg_if_pc;
        end
      end
    end
    if (reset) begin
      reg_dec_pc_branch <= 2'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        reg_dec_pc_branch <= 2'h0;
      end else if (!(io_c2d_cp_data_hazard)) begin
        if (io_c2d_cp_control_hazard) begin
          reg_dec_pc_branch <= 2'h0;
        end else if (io_c2d_cp_if_kill) begin
          reg_dec_pc_branch <= 2'h0;
        end else begin
          reg_dec_pc_branch <= io_c2d_cp_if_pc_branch;
        end
      end
    end
    if (reset) begin
      dp_exe_reg_rd_addr <= 5'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_rd_addr <= 5'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_rd_addr <= 5'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_rd_addr <= 5'h0;
      end else begin
        dp_exe_reg_rd_addr <= dp_dec_rd_addr;
      end
    end
    if (reset) begin
      dp_mem_reg_rd_addr <= 5'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_rd_addr <= 5'h0;
      end else begin
        dp_mem_reg_rd_addr <= dp_exe_reg_rd_addr;
      end
    end
    if (reset) begin
      dp_wb_reg_rd_addr <= 5'h0;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        dp_wb_reg_rd_addr <= 5'h0;
      end else if (_T_171) begin
        dp_wb_reg_rd_addr <= dp_mem_reg_rd_addr;
      end
    end else begin
      dp_wb_reg_rd_addr <= dp_mem_reg_rd_addr;
    end
    if (reset) begin
      dp_exe_reg_rf_wen <= 1'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_rf_wen <= 1'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_rf_wen <= 1'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_rf_wen <= 1'h0;
      end else begin
        dp_exe_reg_rf_wen <= io_c2d_cp_reg_wen;
      end
    end
    if (reset) begin
      dp_mem_reg_rf_wen <= 1'h0;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        if (!(io_c2d_cp_pipeline_stall)) begin
          if (io_c2d_cp_pipeline_kill) begin
            dp_mem_reg_rf_wen <= 1'h0;
          end else begin
            dp_mem_reg_rf_wen <= dp_exe_reg_rf_wen;
          end
        end
      end else if (_T_171) begin
        dp_mem_reg_rf_wen <= 1'h0;
      end else if (!(io_c2d_cp_pipeline_stall)) begin
        if (io_c2d_cp_pipeline_kill) begin
          dp_mem_reg_rf_wen <= 1'h0;
        end else begin
          dp_mem_reg_rf_wen <= dp_exe_reg_rf_wen;
        end
      end
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_rf_wen <= 1'h0;
      end else begin
        dp_mem_reg_rf_wen <= dp_exe_reg_rf_wen;
      end
    end
    if (reset) begin
      dp_wb_reg_rf_wen <= 1'h0;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        dp_wb_reg_rf_wen <= 1'h0;
      end else if (_T_171) begin
        dp_wb_reg_rf_wen <= _GEN_135;
      end
    end else if (csr_io__csr_illegal_ins_exception) begin
      dp_wb_reg_rf_wen <= 1'h0;
    end else begin
      dp_wb_reg_rf_wen <= dp_mem_reg_rf_wen;
    end
    if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_op2_source <= 64'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_op2_source <= 64'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_op2_source <= 64'h0;
      end else if (_T_94) begin
        dp_exe_reg_op2_source <= dp_wire_exe_aluout;
      end else if (_T_100) begin
        if (_T_159) begin
          dp_exe_reg_op2_source <= dp_mem_reg_alu_out;
        end else if (_T_160) begin
          dp_exe_reg_op2_source <= io_dmem_rdata;
        end else if (_T_161) begin
          dp_exe_reg_op2_source <= _T_163;
        end else if (_T_164) begin
          dp_exe_reg_op2_source <= csr_io__csr_info;
        end else begin
          dp_exe_reg_op2_source <= dp_mem_reg_alu_out;
        end
      end else if (_T_106) begin
        dp_exe_reg_op2_source <= dp_wb_reg_wb_data;
      end else begin
        dp_exe_reg_op2_source <= dp_dec_wire_op2_temp;
      end
    end
    if (reset) begin
      dp_exe_reg_instr <= 32'h4033;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_instr <= 32'h4033;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_instr <= 32'h4033;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_instr <= 32'h4033;
      end else begin
        dp_exe_reg_instr <= reg_dec_instr;
      end
    end
    if (reset) begin
      dp_wb_reg_wb_data <= 64'h0;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        dp_wb_reg_wb_data <= 64'h0;
      end else if (_T_171) begin
        if (_T_159) begin
          dp_wb_reg_wb_data <= dp_mem_reg_alu_out;
        end else if (_T_160) begin
          dp_wb_reg_wb_data <= io_dmem_rdata;
        end else if (_T_161) begin
          dp_wb_reg_wb_data <= _T_163;
        end else if (_T_164) begin
          dp_wb_reg_wb_data <= csr_io__csr_info;
        end else begin
          dp_wb_reg_wb_data <= dp_mem_reg_alu_out;
        end
      end
    end else if (_T_159) begin
      dp_wb_reg_wb_data <= dp_mem_reg_alu_out;
    end else if (_T_160) begin
      dp_wb_reg_wb_data <= io_dmem_rdata;
    end else if (_T_161) begin
      dp_wb_reg_wb_data <= _T_163;
    end else if (_T_164) begin
      dp_wb_reg_wb_data <= csr_io__csr_info;
    end else begin
      dp_wb_reg_wb_data <= dp_mem_reg_alu_out;
    end
    if (reset) begin
      dp_mem_reg_wb_sel <= 2'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_wb_sel <= 2'h0;
      end else begin
        dp_mem_reg_wb_sel <= dp_exe_reg_wb_sel;
      end
    end
    if (reset) begin
      dp_mem_reg_alu_out <= 64'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_alu_out <= 64'h0;
      end else begin
        dp_mem_reg_alu_out <= dp_wire_exe_aluout;
      end
    end
    if (reset) begin
      dp_mem_reg_pc <= 64'h80000000;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_pc <= 64'h0;
      end else begin
        dp_mem_reg_pc <= dp_exe_reg_pc;
      end
    end
    if (reset) begin
      dp_exe_reg_rs2_data <= 64'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_rs2_data <= 64'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_rs2_data <= 64'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_rs2_data <= 64'h0;
      end else if (_T_113) begin
        dp_exe_reg_rs2_data <= dp_wire_exe_aluout;
      end else if (_T_117) begin
        dp_exe_reg_rs2_data <= dp_wire_mem_memstageout;
      end else if (_T_121) begin
        dp_exe_reg_rs2_data <= dp_wb_reg_wb_data;
      end else begin
        dp_exe_reg_rs2_data <= regfile_io_rp2_data;
      end
    end
    if (reset) begin
      dp_exe_reg_alu_sel <= 5'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_alu_sel <= 5'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_alu_sel <= 5'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_alu_sel <= 5'h0;
      end else begin
        dp_exe_reg_alu_sel <= io_c2d_cp_alu_sel;
      end
    end
    if (reset) begin
      dp_exe_reg_mem_en <= 1'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_mem_en <= 1'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_mem_en <= 1'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_mem_en <= 1'h0;
      end else begin
        dp_exe_reg_mem_en <= io_c2d_cp_mem_en;
      end
    end
    if (reset) begin
      dp_exe_reg_mem_read_op <= 3'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_mem_read_op <= 3'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_mem_read_op <= 3'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_mem_read_op <= 3'h0;
      end else begin
        dp_exe_reg_mem_read_op <= io_c2d_cp_mem_read_op;
      end
    end
    if (reset) begin
      dp_exe_reg_mem_write_mask <= 8'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_mem_write_mask <= 8'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_mem_write_mask <= 8'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_mem_write_mask <= 8'h0;
      end else begin
        dp_exe_reg_mem_write_mask <= io_c2d_cp_mem_write_mask;
      end
    end
    if (reset) begin
      dp_exe_reg_mem_wen <= 1'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_mem_wen <= 1'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_mem_wen <= 1'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_mem_wen <= 1'h0;
      end else begin
        dp_exe_reg_mem_wen <= io_c2d_cp_mem_wen;
      end
    end
    if (reset) begin
      dp_exe_reg_alu_ext_sel <= 3'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_alu_ext_sel <= 3'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_alu_ext_sel <= 3'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_alu_ext_sel <= 3'h0;
      end else begin
        dp_exe_reg_alu_ext_sel <= io_c2d_cp_alu_ext_sel;
      end
    end
    if (reset) begin
      dp_exe_reg_wb_sel <= 2'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_wb_sel <= 2'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_wb_sel <= 2'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_wb_sel <= 2'h0;
      end else begin
        dp_exe_reg_wb_sel <= io_c2d_cp_wb_sel;
      end
    end
    if (reset) begin
      dp_exe_reg_csr_op <= 3'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_csr_op <= 3'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_csr_op <= 3'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_csr_op <= 3'h0;
      end else begin
        dp_exe_reg_csr_op <= io_c2d_cp_csr_op;
      end
    end
    if (reset) begin
      dp_exe_reg_instr_valid <= 1'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_reg_instr_valid <= 1'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_reg_instr_valid <= 1'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_reg_instr_valid <= 1'h0;
      end else begin
        dp_exe_reg_instr_valid <= reg_dec_instr_valid;
      end
    end
    if (reset) begin
      dp_exe_pc_branch <= 2'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_exe_pc_branch <= 2'h0;
      end else if (io_c2d_cp_data_hazard) begin
        dp_exe_pc_branch <= 2'h0;
      end else if (io_c2d_cp_control_hazard) begin
        dp_exe_pc_branch <= 2'h0;
      end else begin
        dp_exe_pc_branch <= reg_dec_pc_branch;
      end
    end
    if (reset) begin
      dp_mem_reg_instr <= 32'h4033;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_instr <= 32'h4033;
      end else begin
        dp_mem_reg_instr <= dp_exe_reg_instr;
      end
    end
    if (reset) begin
      dp_mem_reg_instr_valid <= 1'h0;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        if (!(io_c2d_cp_pipeline_stall)) begin
          if (io_c2d_cp_pipeline_kill) begin
            dp_mem_reg_instr_valid <= 1'h0;
          end else begin
            dp_mem_reg_instr_valid <= dp_exe_reg_instr_valid;
          end
        end
      end else if (_T_171) begin
        dp_mem_reg_instr_valid <= 1'h0;
      end else if (!(io_c2d_cp_pipeline_stall)) begin
        if (io_c2d_cp_pipeline_kill) begin
          dp_mem_reg_instr_valid <= 1'h0;
        end else begin
          dp_mem_reg_instr_valid <= dp_exe_reg_instr_valid;
        end
      end
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_instr_valid <= 1'h0;
      end else begin
        dp_mem_reg_instr_valid <= dp_exe_reg_instr_valid;
      end
    end
    if (reset) begin
      dp_mem_reg_rs2_data <= 64'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_rs2_data <= 64'h0;
      end else begin
        dp_mem_reg_rs2_data <= dp_exe_reg_rs2_data;
      end
    end
    if (reset) begin
      dp_mem_reg_mem_en <= 1'h0;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        if (!(io_c2d_cp_pipeline_stall)) begin
          if (io_c2d_cp_pipeline_kill) begin
            dp_mem_reg_mem_en <= 1'h0;
          end else begin
            dp_mem_reg_mem_en <= dp_exe_reg_mem_en;
          end
        end
      end else if (_T_171) begin
        dp_mem_reg_mem_en <= 1'h0;
      end else if (!(io_c2d_cp_pipeline_stall)) begin
        if (io_c2d_cp_pipeline_kill) begin
          dp_mem_reg_mem_en <= 1'h0;
        end else begin
          dp_mem_reg_mem_en <= dp_exe_reg_mem_en;
        end
      end
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_mem_en <= 1'h0;
      end else begin
        dp_mem_reg_mem_en <= dp_exe_reg_mem_en;
      end
    end
    if (reset) begin
      dp_mem_reg_mem_read_op <= 3'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_mem_read_op <= 3'h0;
      end else begin
        dp_mem_reg_mem_read_op <= dp_exe_reg_mem_read_op;
      end
    end
    if (reset) begin
      dp_mem_reg_mem_write_mask <= 8'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_mem_write_mask <= 8'h0;
      end else begin
        dp_mem_reg_mem_write_mask <= dp_exe_reg_mem_write_mask;
      end
    end
    if (reset) begin
      dp_mem_reg_mem_wen <= 1'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_mem_wen <= 1'h0;
      end else begin
        dp_mem_reg_mem_wen <= dp_exe_reg_mem_wen;
      end
    end
    if (reset) begin
      dp_mem_reg_csr_op <= 3'h0;
    end else if (!(io_c2d_cp_pipeline_stall)) begin
      if (io_c2d_cp_pipeline_kill) begin
        dp_mem_reg_csr_op <= 3'h0;
      end else begin
        dp_mem_reg_csr_op <= dp_exe_reg_csr_op;
      end
    end
    if (reset) begin
      dp_wb_reg_instr_valid <= 1'h0;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        dp_wb_reg_instr_valid <= 1'h0;
      end else if (_T_171) begin
        dp_wb_reg_instr_valid <= dp_mem_reg_instr_valid;
      end
    end else begin
      dp_wb_reg_instr_valid <= dp_mem_reg_instr_valid;
    end
    if (reset) begin
      dp_wb_reg_pc <= 64'h80000000;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        dp_wb_reg_pc <= dp_mem_reg_pc;
      end else if (_T_171) begin
        dp_wb_reg_pc <= dp_mem_reg_pc;
      end
    end else begin
      dp_wb_reg_pc <= dp_mem_reg_pc;
    end
    if (reset) begin
      dp_wb_reg_instr <= 32'h4033;
    end else if (io_c2d_cp_pipeline_stall) begin
      if (_T_169) begin
        dp_wb_reg_instr <= dp_mem_reg_instr;
      end else if (_T_171) begin
        dp_wb_reg_instr <= dp_mem_reg_instr;
      end
    end else begin
      dp_wb_reg_instr <= dp_mem_reg_instr;
    end
  end
endmodule
module BPU(
  input         clock,
  input         reset,
  input  [63:0] io_IF_ins,
  input  [1:0]  io_EXE_pc_branch,
  input  [1:0]  io_EXE_actual_branch,
  input         io_has_stall,
  output [1:0]  io_IF_pc_branch,
  output [2:0]  io_IF_pc_sel
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] prediction_state; // @[BPU.scala 35:35]
  wire [63:0] _T = io_IF_ins & 64'h7f; // @[Lookup.scala 31:38]
  wire  isBtype_temp = 64'h63 == _T; // @[Lookup.scala 31:38]
  wire  _T_2 = ~io_has_stall; // @[BPU.scala 44:32]
  wire  isBtype = isBtype_temp & _T_2; // @[BPU.scala 44:29]
  wire  _T_4 = io_EXE_actual_branch == io_EXE_pc_branch; // @[BPU.scala 46:49]
  wire  _T_5 = io_EXE_actual_branch != 2'h0; // @[BPU.scala 46:94]
  wire  prediction_suc = _T_4 & _T_5; // @[BPU.scala 46:70]
  wire  _T_6 = io_EXE_actual_branch != io_EXE_pc_branch; // @[BPU.scala 47:49]
  wire  _T_8 = _T_6 & _T_5; // @[BPU.scala 47:70]
  wire  _T_9 = io_EXE_pc_branch != 2'h0; // @[BPU.scala 47:127]
  wire  prediction_fail = _T_8 & _T_9; // @[BPU.scala 47:107]
  wire  _T_11 = 2'h0 == prediction_state; // @[Conditional.scala 37:30]
  wire [1:0] _GEN_3 = isBtype ? 2'h2 : 2'h0; // @[BPU.scala 63:13]
  wire  _T_12 = 2'h1 == prediction_state; // @[Conditional.scala 37:30]
  wire  _T_13 = 2'h2 == prediction_state; // @[Conditional.scala 37:30]
  wire [2:0] _GEN_4 = isBtype ? 3'h5 : 3'h0; // @[BPU.scala 79:13]
  wire [1:0] _GEN_5 = isBtype ? 2'h1 : 2'h0; // @[BPU.scala 79:13]
  wire  _T_14 = 2'h3 == prediction_state; // @[Conditional.scala 37:30]
  wire [2:0] _GEN_6 = _T_14 ? _GEN_4 : 3'h0; // @[Conditional.scala 39:67]
  wire [1:0] _GEN_7 = _T_14 ? _GEN_5 : 2'h0; // @[Conditional.scala 39:67]
  wire [2:0] _GEN_8 = _T_13 ? _GEN_4 : _GEN_6; // @[Conditional.scala 39:67]
  wire [1:0] _GEN_9 = _T_13 ? _GEN_5 : _GEN_7; // @[Conditional.scala 39:67]
  wire [2:0] _GEN_10 = _T_12 ? 3'h0 : _GEN_8; // @[Conditional.scala 39:67]
  wire [1:0] _GEN_11 = _T_12 ? _GEN_3 : _GEN_9; // @[Conditional.scala 39:67]
  wire  _T_17 = prediction_suc & _T_2; // @[BPU.scala 99:33]
  wire  _T_19 = prediction_fail & _T_2; // @[BPU.scala 102:40]
  assign io_IF_pc_branch = _T_11 ? _GEN_3 : _GEN_11; // @[BPU.scala 53:25 BPU.scala 65:33 BPU.scala 73:33 BPU.scala 81:33 BPU.scala 89:33]
  assign io_IF_pc_sel = _T_11 ? 3'h0 : _GEN_10; // @[BPU.scala 52:22 BPU.scala 64:30 BPU.scala 72:30 BPU.scala 80:30 BPU.scala 88:30]
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
  _RAND_0 = {1{`RANDOM}};
  prediction_state = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      prediction_state <= 2'h0;
    end else if (_T_11) begin
      if (_T_17) begin
        prediction_state <= 2'h0;
      end else if (_T_19) begin
        prediction_state <= 2'h1;
      end
    end else if (_T_12) begin
      if (_T_17) begin
        prediction_state <= 2'h0;
      end else if (_T_19) begin
        prediction_state <= 2'h2;
      end
    end else if (_T_13) begin
      if (_T_17) begin
        prediction_state <= 2'h3;
      end else if (_T_19) begin
        prediction_state <= 2'h1;
      end
    end else if (_T_14) begin
      if (_T_17) begin
        prediction_state <= 2'h3;
      end else if (_T_19) begin
        prediction_state <= 2'h2;
      end
    end
  end
endmodule
module Cpath(
  input         clock,
  input         reset,
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
  output [2:0]  io_c2d_cp_csr_op,
  output        io_c2d_cp_control_hazard,
  output        io_c2d_cp_if_kill,
  output        io_c2d_cp_data_hazard,
  output        io_c2d_cp_pipeline_kill,
  output        io_c2d_cp_pipeline_stall,
  output        io_c2d_cp_pipeline_data_stall,
  output        io_c2d_cp_pipeline_inst_stall,
  output [1:0]  io_c2d_cp_if_pc_branch,
  output [1:0]  io_c2d_cp_exe_actual_branch,
  output        io_c2d_hasexception,
  output        io_c2d_shouldstall,
  input  [31:0] io_d2c_instr,
  input         io_d2c_islt,
  input         io_d2c_isltu,
  input         io_d2c_iseq,
  input         io_d2c_isredir,
  input         io_d2c_mem_mem_valid,
  input  [31:0] io_d2c_IF_ins,
  input  [1:0]  io_d2c_EXE_pc_branch,
  input         io_imem_data_valid,
  input         io_dmem_data_valid,
  output        cs_valid_inst_0
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  wire  cp_bpu_clock; // @[cpath.scala 181:24]
  wire  cp_bpu_reset; // @[cpath.scala 181:24]
  wire [63:0] cp_bpu_io_IF_ins; // @[cpath.scala 181:24]
  wire [1:0] cp_bpu_io_EXE_pc_branch; // @[cpath.scala 181:24]
  wire [1:0] cp_bpu_io_EXE_actual_branch; // @[cpath.scala 181:24]
  wire  cp_bpu_io_has_stall; // @[cpath.scala 181:24]
  wire [1:0] cp_bpu_io_IF_pc_branch; // @[cpath.scala 181:24]
  wire [2:0] cp_bpu_io_IF_pc_sel; // @[cpath.scala 181:24]
  wire [31:0] _T = io_d2c_instr & 32'h7f; // @[Lookup.scala 31:38]
  wire  _T_1 = 32'h6f == _T; // @[Lookup.scala 31:38]
  wire [31:0] _T_2 = io_d2c_instr & 32'h707f; // @[Lookup.scala 31:38]
  wire  _T_3 = 32'h67 == _T_2; // @[Lookup.scala 31:38]
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
  wire  _T_111 = 32'h100073 == io_d2c_instr; // @[Lookup.scala 31:38]
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
  wire [4:0] _T_506 = _T_29 ? 5'h19 : _T_505; // @[Lookup.scala 33:37]
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
  wire  cs_mem_en = _T_1 ? 1'h0 : _T_889; // @[Lookup.scala 33:37]
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
  wire [2:0] _T_979 = _T_119 ? 3'h5 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_980 = _T_117 ? 3'h5 : _T_979; // @[Lookup.scala 33:37]
  wire [2:0] _T_981 = _T_115 ? 3'h0 : _T_980; // @[Lookup.scala 33:37]
  wire [2:0] _T_982 = _T_113 ? 3'h5 : _T_981; // @[Lookup.scala 33:37]
  wire [2:0] _T_983 = _T_111 ? 3'h5 : _T_982; // @[Lookup.scala 33:37]
  wire [2:0] _T_984 = _T_109 ? 3'h2 : _T_983; // @[Lookup.scala 33:37]
  wire [2:0] _T_985 = _T_107 ? 3'h2 : _T_984; // @[Lookup.scala 33:37]
  wire [2:0] _T_986 = _T_105 ? 3'h4 : _T_985; // @[Lookup.scala 33:37]
  wire [2:0] _T_987 = _T_103 ? 3'h4 : _T_986; // @[Lookup.scala 33:37]
  wire [2:0] _T_988 = _T_101 ? 3'h3 : _T_987; // @[Lookup.scala 33:37]
  wire [2:0] _T_989 = _T_99 ? 3'h3 : _T_988; // @[Lookup.scala 33:37]
  wire [2:0] _T_990 = _T_97 ? 3'h0 : _T_989; // @[Lookup.scala 33:37]
  wire [2:0] _T_991 = _T_95 ? 3'h0 : _T_990; // @[Lookup.scala 33:37]
  wire [2:0] _T_992 = _T_93 ? 3'h0 : _T_991; // @[Lookup.scala 33:37]
  wire [2:0] _T_993 = _T_91 ? 3'h0 : _T_992; // @[Lookup.scala 33:37]
  wire [2:0] _T_994 = _T_89 ? 3'h0 : _T_993; // @[Lookup.scala 33:37]
  wire [2:0] _T_995 = _T_87 ? 3'h0 : _T_994; // @[Lookup.scala 33:37]
  wire [2:0] _T_996 = _T_85 ? 3'h0 : _T_995; // @[Lookup.scala 33:37]
  wire [2:0] _T_997 = _T_83 ? 3'h0 : _T_996; // @[Lookup.scala 33:37]
  wire [2:0] _T_998 = _T_81 ? 3'h0 : _T_997; // @[Lookup.scala 33:37]
  wire [2:0] _T_999 = _T_79 ? 3'h0 : _T_998; // @[Lookup.scala 33:37]
  wire [2:0] _T_1000 = _T_77 ? 3'h0 : _T_999; // @[Lookup.scala 33:37]
  wire [2:0] _T_1001 = _T_75 ? 3'h0 : _T_1000; // @[Lookup.scala 33:37]
  wire [2:0] _T_1002 = _T_73 ? 3'h0 : _T_1001; // @[Lookup.scala 33:37]
  wire [2:0] _T_1003 = _T_71 ? 3'h0 : _T_1002; // @[Lookup.scala 33:37]
  wire [2:0] _T_1004 = _T_69 ? 3'h0 : _T_1003; // @[Lookup.scala 33:37]
  wire [2:0] _T_1005 = _T_67 ? 3'h0 : _T_1004; // @[Lookup.scala 33:37]
  wire [2:0] _T_1006 = _T_65 ? 3'h0 : _T_1005; // @[Lookup.scala 33:37]
  wire [2:0] _T_1007 = _T_63 ? 3'h0 : _T_1006; // @[Lookup.scala 33:37]
  wire [2:0] _T_1008 = _T_61 ? 3'h0 : _T_1007; // @[Lookup.scala 33:37]
  wire [2:0] _T_1009 = _T_59 ? 3'h0 : _T_1008; // @[Lookup.scala 33:37]
  wire [2:0] _T_1010 = _T_57 ? 3'h0 : _T_1009; // @[Lookup.scala 33:37]
  wire [2:0] _T_1011 = _T_55 ? 3'h0 : _T_1010; // @[Lookup.scala 33:37]
  wire [2:0] _T_1012 = _T_53 ? 3'h0 : _T_1011; // @[Lookup.scala 33:37]
  wire [2:0] _T_1013 = _T_51 ? 3'h0 : _T_1012; // @[Lookup.scala 33:37]
  wire [2:0] _T_1014 = _T_49 ? 3'h0 : _T_1013; // @[Lookup.scala 33:37]
  wire [2:0] _T_1015 = _T_47 ? 3'h0 : _T_1014; // @[Lookup.scala 33:37]
  wire [2:0] _T_1016 = _T_45 ? 3'h0 : _T_1015; // @[Lookup.scala 33:37]
  wire [2:0] _T_1017 = _T_43 ? 3'h0 : _T_1016; // @[Lookup.scala 33:37]
  wire [2:0] _T_1018 = _T_41 ? 3'h0 : _T_1017; // @[Lookup.scala 33:37]
  wire [2:0] _T_1019 = _T_39 ? 3'h0 : _T_1018; // @[Lookup.scala 33:37]
  wire [2:0] _T_1020 = _T_37 ? 3'h0 : _T_1019; // @[Lookup.scala 33:37]
  wire [2:0] _T_1021 = _T_35 ? 3'h0 : _T_1020; // @[Lookup.scala 33:37]
  wire [2:0] _T_1022 = _T_33 ? 3'h0 : _T_1021; // @[Lookup.scala 33:37]
  wire [2:0] _T_1023 = _T_31 ? 3'h0 : _T_1022; // @[Lookup.scala 33:37]
  wire [2:0] _T_1024 = _T_29 ? 3'h0 : _T_1023; // @[Lookup.scala 33:37]
  wire [2:0] _T_1025 = _T_27 ? 3'h0 : _T_1024; // @[Lookup.scala 33:37]
  wire [2:0] _T_1026 = _T_25 ? 3'h0 : _T_1025; // @[Lookup.scala 33:37]
  wire [2:0] _T_1027 = _T_23 ? 3'h0 : _T_1026; // @[Lookup.scala 33:37]
  wire [2:0] _T_1028 = _T_21 ? 3'h0 : _T_1027; // @[Lookup.scala 33:37]
  wire [2:0] _T_1029 = _T_19 ? 3'h0 : _T_1028; // @[Lookup.scala 33:37]
  wire [2:0] _T_1030 = _T_17 ? 3'h0 : _T_1029; // @[Lookup.scala 33:37]
  wire [2:0] _T_1031 = _T_15 ? 3'h0 : _T_1030; // @[Lookup.scala 33:37]
  wire [2:0] _T_1032 = _T_13 ? 3'h0 : _T_1031; // @[Lookup.scala 33:37]
  wire [2:0] _T_1033 = _T_11 ? 3'h0 : _T_1032; // @[Lookup.scala 33:37]
  wire [2:0] _T_1034 = _T_9 ? 3'h0 : _T_1033; // @[Lookup.scala 33:37]
  wire [2:0] _T_1035 = _T_7 ? 3'h0 : _T_1034; // @[Lookup.scala 33:37]
  wire [2:0] _T_1036 = _T_5 ? 3'h0 : _T_1035; // @[Lookup.scala 33:37]
  wire [2:0] _T_1037 = _T_3 ? 3'h0 : _T_1036; // @[Lookup.scala 33:37]
  wire [2:0] cs_csr_op = _T_1 ? 3'h0 : _T_1037; // @[Lookup.scala 33:37]
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
  wire  _T_1126 = _T_121 ? 1'h0 : _T_123; // @[Lookup.scala 33:37]
  wire  _T_1127 = _T_119 ? 1'h0 : _T_1126; // @[Lookup.scala 33:37]
  wire  _T_1128 = _T_117 ? 1'h0 : _T_1127; // @[Lookup.scala 33:37]
  wire  _T_1129 = _T_115 ? 1'h0 : _T_1128; // @[Lookup.scala 33:37]
  wire  _T_1130 = _T_113 ? 1'h0 : _T_1129; // @[Lookup.scala 33:37]
  wire  _T_1131 = _T_111 ? 1'h0 : _T_1130; // @[Lookup.scala 33:37]
  wire  _T_1132 = _T_109 ? 1'h0 : _T_1131; // @[Lookup.scala 33:37]
  wire  _T_1133 = _T_107 ? 1'h0 : _T_1132; // @[Lookup.scala 33:37]
  wire  _T_1134 = _T_105 ? 1'h0 : _T_1133; // @[Lookup.scala 33:37]
  wire  _T_1135 = _T_103 ? 1'h0 : _T_1134; // @[Lookup.scala 33:37]
  wire  _T_1136 = _T_101 ? 1'h0 : _T_1135; // @[Lookup.scala 33:37]
  wire  _T_1137 = _T_99 ? 1'h0 : _T_1136; // @[Lookup.scala 33:37]
  wire  _T_1138 = _T_97 ? 1'h0 : _T_1137; // @[Lookup.scala 33:37]
  wire  _T_1139 = _T_95 ? 1'h0 : _T_1138; // @[Lookup.scala 33:37]
  wire  _T_1140 = _T_93 ? 1'h0 : _T_1139; // @[Lookup.scala 33:37]
  wire  _T_1141 = _T_91 ? 1'h0 : _T_1140; // @[Lookup.scala 33:37]
  wire  _T_1142 = _T_89 ? 1'h0 : _T_1141; // @[Lookup.scala 33:37]
  wire  _T_1143 = _T_87 ? 1'h0 : _T_1142; // @[Lookup.scala 33:37]
  wire  _T_1144 = _T_85 ? 1'h0 : _T_1143; // @[Lookup.scala 33:37]
  wire  _T_1145 = _T_83 ? 1'h0 : _T_1144; // @[Lookup.scala 33:37]
  wire  _T_1146 = _T_81 ? 1'h0 : _T_1145; // @[Lookup.scala 33:37]
  wire  _T_1147 = _T_79 ? 1'h0 : _T_1146; // @[Lookup.scala 33:37]
  wire  _T_1148 = _T_77 ? 1'h0 : _T_1147; // @[Lookup.scala 33:37]
  wire  _T_1149 = _T_75 ? 1'h0 : _T_1148; // @[Lookup.scala 33:37]
  wire  _T_1150 = _T_73 ? 1'h0 : _T_1149; // @[Lookup.scala 33:37]
  wire  _T_1151 = _T_71 ? 1'h0 : _T_1150; // @[Lookup.scala 33:37]
  wire  _T_1152 = _T_69 ? 1'h0 : _T_1151; // @[Lookup.scala 33:37]
  wire  _T_1153 = _T_67 ? 1'h0 : _T_1152; // @[Lookup.scala 33:37]
  wire  _T_1154 = _T_65 ? 1'h0 : _T_1153; // @[Lookup.scala 33:37]
  wire  _T_1155 = _T_63 ? 1'h0 : _T_1154; // @[Lookup.scala 33:37]
  wire  _T_1156 = _T_61 ? 1'h0 : _T_1155; // @[Lookup.scala 33:37]
  wire  _T_1157 = _T_59 ? 1'h0 : _T_1156; // @[Lookup.scala 33:37]
  wire  _T_1158 = _T_57 ? 1'h0 : _T_1157; // @[Lookup.scala 33:37]
  wire  _T_1159 = _T_55 ? 1'h0 : _T_1158; // @[Lookup.scala 33:37]
  wire  _T_1160 = _T_53 ? 1'h0 : _T_1159; // @[Lookup.scala 33:37]
  wire  _T_1161 = _T_51 ? 1'h0 : _T_1160; // @[Lookup.scala 33:37]
  wire  _T_1162 = _T_49 ? 1'h0 : _T_1161; // @[Lookup.scala 33:37]
  wire  _T_1163 = _T_47 ? 1'h0 : _T_1162; // @[Lookup.scala 33:37]
  wire  _T_1164 = _T_45 ? 1'h0 : _T_1163; // @[Lookup.scala 33:37]
  wire  _T_1165 = _T_43 ? 1'h0 : _T_1164; // @[Lookup.scala 33:37]
  wire  _T_1166 = _T_41 ? 1'h0 : _T_1165; // @[Lookup.scala 33:37]
  wire  _T_1167 = _T_39 ? 1'h0 : _T_1166; // @[Lookup.scala 33:37]
  wire  _T_1168 = _T_37 ? 1'h0 : _T_1167; // @[Lookup.scala 33:37]
  wire  _T_1169 = _T_35 ? 1'h0 : _T_1168; // @[Lookup.scala 33:37]
  wire  _T_1170 = _T_33 ? 1'h0 : _T_1169; // @[Lookup.scala 33:37]
  wire  _T_1171 = _T_31 ? 1'h0 : _T_1170; // @[Lookup.scala 33:37]
  wire  _T_1172 = _T_29 ? 1'h0 : _T_1171; // @[Lookup.scala 33:37]
  wire  _T_1173 = _T_27 ? 1'h0 : _T_1172; // @[Lookup.scala 33:37]
  wire  _T_1174 = _T_25 ? 1'h0 : _T_1173; // @[Lookup.scala 33:37]
  wire  _T_1175 = _T_23 ? 1'h0 : _T_1174; // @[Lookup.scala 33:37]
  wire  _T_1176 = _T_21 ? 1'h0 : _T_1175; // @[Lookup.scala 33:37]
  wire  _T_1177 = _T_19 ? 1'h0 : _T_1176; // @[Lookup.scala 33:37]
  wire  _T_1178 = _T_17 ? 1'h0 : _T_1177; // @[Lookup.scala 33:37]
  wire  _T_1179 = _T_15 ? 1'h0 : _T_1178; // @[Lookup.scala 33:37]
  wire  _T_1180 = _T_13 ? 1'h0 : _T_1179; // @[Lookup.scala 33:37]
  wire  _T_1181 = _T_11 ? 1'h0 : _T_1180; // @[Lookup.scala 33:37]
  wire  _T_1182 = _T_9 ? 1'h0 : _T_1181; // @[Lookup.scala 33:37]
  wire  _T_1183 = _T_7 ? 1'h0 : _T_1182; // @[Lookup.scala 33:37]
  wire  _T_1184 = _T_5 ? 1'h0 : _T_1183; // @[Lookup.scala 33:37]
  wire  _T_1185 = _T_3 ? 1'h0 : _T_1184; // @[Lookup.scala 33:37]
  wire  cs_is_fencei = _T_1 ? 1'h0 : _T_1185; // @[Lookup.scala 33:37]
  wire  _T_1206 = _T_109 ? 1'h0 : _T_539; // @[Lookup.scala 33:37]
  wire  _T_1207 = _T_107 | _T_1206; // @[Lookup.scala 33:37]
  wire  _T_1208 = _T_105 ? 1'h0 : _T_1207; // @[Lookup.scala 33:37]
  wire  _T_1209 = _T_103 | _T_1208; // @[Lookup.scala 33:37]
  wire  _T_1210 = _T_101 ? 1'h0 : _T_1209; // @[Lookup.scala 33:37]
  wire  _T_1211 = _T_99 | _T_1210; // @[Lookup.scala 33:37]
  wire  _T_1212 = _T_97 | _T_1211; // @[Lookup.scala 33:37]
  wire  _T_1213 = _T_95 | _T_1212; // @[Lookup.scala 33:37]
  wire  _T_1214 = _T_93 | _T_1213; // @[Lookup.scala 33:37]
  wire  _T_1215 = _T_91 | _T_1214; // @[Lookup.scala 33:37]
  wire  _T_1216 = _T_89 | _T_1215; // @[Lookup.scala 33:37]
  wire  _T_1217 = _T_87 | _T_1216; // @[Lookup.scala 33:37]
  wire  _T_1218 = _T_85 | _T_1217; // @[Lookup.scala 33:37]
  wire  _T_1219 = _T_83 | _T_1218; // @[Lookup.scala 33:37]
  wire  _T_1220 = _T_81 | _T_1219; // @[Lookup.scala 33:37]
  wire  _T_1221 = _T_79 | _T_1220; // @[Lookup.scala 33:37]
  wire  _T_1222 = _T_77 | _T_1221; // @[Lookup.scala 33:37]
  wire  _T_1223 = _T_75 | _T_1222; // @[Lookup.scala 33:37]
  wire  _T_1224 = _T_73 | _T_1223; // @[Lookup.scala 33:37]
  wire  _T_1225 = _T_71 | _T_1224; // @[Lookup.scala 33:37]
  wire  _T_1226 = _T_69 | _T_1225; // @[Lookup.scala 33:37]
  wire  _T_1227 = _T_67 | _T_1226; // @[Lookup.scala 33:37]
  wire  _T_1228 = _T_65 | _T_1227; // @[Lookup.scala 33:37]
  wire  _T_1229 = _T_63 | _T_1228; // @[Lookup.scala 33:37]
  wire  _T_1230 = _T_61 | _T_1229; // @[Lookup.scala 33:37]
  wire  _T_1231 = _T_59 | _T_1230; // @[Lookup.scala 33:37]
  wire  _T_1232 = _T_57 | _T_1231; // @[Lookup.scala 33:37]
  wire  _T_1233 = _T_55 | _T_1232; // @[Lookup.scala 33:37]
  wire  _T_1234 = _T_53 | _T_1233; // @[Lookup.scala 33:37]
  wire  _T_1235 = _T_51 | _T_1234; // @[Lookup.scala 33:37]
  wire  _T_1236 = _T_49 | _T_1235; // @[Lookup.scala 33:37]
  wire  _T_1237 = _T_47 | _T_1236; // @[Lookup.scala 33:37]
  wire  _T_1238 = _T_45 | _T_1237; // @[Lookup.scala 33:37]
  wire  _T_1239 = _T_43 | _T_1238; // @[Lookup.scala 33:37]
  wire  _T_1240 = _T_41 | _T_1239; // @[Lookup.scala 33:37]
  wire  _T_1241 = _T_39 | _T_1240; // @[Lookup.scala 33:37]
  wire  _T_1242 = _T_37 | _T_1241; // @[Lookup.scala 33:37]
  wire  _T_1243 = _T_35 | _T_1242; // @[Lookup.scala 33:37]
  wire  _T_1244 = _T_33 | _T_1243; // @[Lookup.scala 33:37]
  wire  _T_1245 = _T_31 | _T_1244; // @[Lookup.scala 33:37]
  wire  _T_1246 = _T_29 | _T_1245; // @[Lookup.scala 33:37]
  wire  _T_1247 = _T_27 | _T_1246; // @[Lookup.scala 33:37]
  wire  _T_1248 = _T_25 | _T_1247; // @[Lookup.scala 33:37]
  wire  _T_1249 = _T_23 | _T_1248; // @[Lookup.scala 33:37]
  wire  _T_1250 = _T_21 ? 1'h0 : _T_1249; // @[Lookup.scala 33:37]
  wire  _T_1251 = _T_19 ? 1'h0 : _T_1250; // @[Lookup.scala 33:37]
  wire  _T_1252 = _T_17 | _T_1251; // @[Lookup.scala 33:37]
  wire  _T_1253 = _T_15 | _T_1252; // @[Lookup.scala 33:37]
  wire  _T_1254 = _T_13 | _T_1253; // @[Lookup.scala 33:37]
  wire  _T_1255 = _T_11 | _T_1254; // @[Lookup.scala 33:37]
  wire  _T_1256 = _T_9 | _T_1255; // @[Lookup.scala 33:37]
  wire  _T_1257 = _T_7 | _T_1256; // @[Lookup.scala 33:37]
  wire  _T_1258 = _T_5 | _T_1257; // @[Lookup.scala 33:37]
  wire  _T_1259 = _T_3 | _T_1258; // @[Lookup.scala 33:37]
  wire  cs_rs1_en = _T_1 ? 1'h0 : _T_1259; // @[Lookup.scala 33:37]
  wire  _T_1281 = _T_107 ? 1'h0 : _T_1206; // @[Lookup.scala 33:37]
  wire  _T_1282 = _T_105 ? 1'h0 : _T_1281; // @[Lookup.scala 33:37]
  wire  _T_1283 = _T_103 ? 1'h0 : _T_1282; // @[Lookup.scala 33:37]
  wire  _T_1284 = _T_101 ? 1'h0 : _T_1283; // @[Lookup.scala 33:37]
  wire  _T_1285 = _T_99 ? 1'h0 : _T_1284; // @[Lookup.scala 33:37]
  wire  _T_1286 = _T_97 | _T_1285; // @[Lookup.scala 33:37]
  wire  _T_1287 = _T_95 | _T_1286; // @[Lookup.scala 33:37]
  wire  _T_1288 = _T_93 | _T_1287; // @[Lookup.scala 33:37]
  wire  _T_1289 = _T_91 | _T_1288; // @[Lookup.scala 33:37]
  wire  _T_1290 = _T_89 | _T_1289; // @[Lookup.scala 33:37]
  wire  _T_1291 = _T_87 | _T_1290; // @[Lookup.scala 33:37]
  wire  _T_1292 = _T_85 | _T_1291; // @[Lookup.scala 33:37]
  wire  _T_1293 = _T_83 | _T_1292; // @[Lookup.scala 33:37]
  wire  _T_1294 = _T_81 | _T_1293; // @[Lookup.scala 33:37]
  wire  _T_1295 = _T_79 | _T_1294; // @[Lookup.scala 33:37]
  wire  _T_1296 = _T_77 ? 1'h0 : _T_1295; // @[Lookup.scala 33:37]
  wire  _T_1297 = _T_75 | _T_1296; // @[Lookup.scala 33:37]
  wire  _T_1298 = _T_73 | _T_1297; // @[Lookup.scala 33:37]
  wire  _T_1299 = _T_71 ? 1'h0 : _T_1298; // @[Lookup.scala 33:37]
  wire  _T_1300 = _T_69 ? 1'h0 : _T_1299; // @[Lookup.scala 33:37]
  wire  _T_1301 = _T_67 | _T_1300; // @[Lookup.scala 33:37]
  wire  _T_1302 = _T_65 ? 1'h0 : _T_1301; // @[Lookup.scala 33:37]
  wire  _T_1303 = _T_63 | _T_1302; // @[Lookup.scala 33:37]
  wire  _T_1304 = _T_61 ? 1'h0 : _T_1303; // @[Lookup.scala 33:37]
  wire  _T_1305 = _T_59 | _T_1304; // @[Lookup.scala 33:37]
  wire  _T_1306 = _T_57 | _T_1305; // @[Lookup.scala 33:37]
  wire  _T_1307 = _T_55 | _T_1306; // @[Lookup.scala 33:37]
  wire  _T_1308 = _T_53 | _T_1307; // @[Lookup.scala 33:37]
  wire  _T_1309 = _T_51 ? 1'h0 : _T_1308; // @[Lookup.scala 33:37]
  wire  _T_1310 = _T_49 ? 1'h0 : _T_1309; // @[Lookup.scala 33:37]
  wire  _T_1311 = _T_47 | _T_1310; // @[Lookup.scala 33:37]
  wire  _T_1312 = _T_45 | _T_1311; // @[Lookup.scala 33:37]
  wire  _T_1313 = _T_43 ? 1'h0 : _T_1312; // @[Lookup.scala 33:37]
  wire  _T_1314 = _T_41 ? 1'h0 : _T_1313; // @[Lookup.scala 33:37]
  wire  _T_1315 = _T_39 | _T_1314; // @[Lookup.scala 33:37]
  wire  _T_1316 = _T_37 | _T_1315; // @[Lookup.scala 33:37]
  wire  _T_1317 = _T_35 ? 1'h0 : _T_1316; // @[Lookup.scala 33:37]
  wire  _T_1318 = _T_33 ? 1'h0 : _T_1317; // @[Lookup.scala 33:37]
  wire  _T_1319 = _T_31 | _T_1318; // @[Lookup.scala 33:37]
  wire  _T_1320 = _T_29 | _T_1319; // @[Lookup.scala 33:37]
  wire  _T_1321 = _T_27 ? 1'h0 : _T_1320; // @[Lookup.scala 33:37]
  wire  _T_1322 = _T_25 ? 1'h0 : _T_1321; // @[Lookup.scala 33:37]
  wire  _T_1323 = _T_23 | _T_1322; // @[Lookup.scala 33:37]
  wire  _T_1324 = _T_21 ? 1'h0 : _T_1323; // @[Lookup.scala 33:37]
  wire  _T_1325 = _T_19 ? 1'h0 : _T_1324; // @[Lookup.scala 33:37]
  wire  _T_1326 = _T_17 ? 1'h0 : _T_1325; // @[Lookup.scala 33:37]
  wire  _T_1327 = _T_15 ? 1'h0 : _T_1326; // @[Lookup.scala 33:37]
  wire  _T_1328 = _T_13 ? 1'h0 : _T_1327; // @[Lookup.scala 33:37]
  wire  _T_1329 = _T_11 ? 1'h0 : _T_1328; // @[Lookup.scala 33:37]
  wire  _T_1330 = _T_9 ? 1'h0 : _T_1329; // @[Lookup.scala 33:37]
  wire  _T_1331 = _T_7 ? 1'h0 : _T_1330; // @[Lookup.scala 33:37]
  wire  _T_1332 = _T_5 ? 1'h0 : _T_1331; // @[Lookup.scala 33:37]
  wire  _T_1333 = _T_3 ? 1'h0 : _T_1332; // @[Lookup.scala 33:37]
  wire  cs_rs2_en = _T_1 ? 1'h0 : _T_1333; // @[Lookup.scala 33:37]
  reg [3:0] cs_exe_branch; // @[cpath.scala 160:32]
  wire  _T_1334 = cs_exe_branch == 4'h0; // @[cpath.scala 196:24]
  wire  _T_1335 = cs_exe_branch == 4'h1; // @[cpath.scala 197:24]
  wire  _T_1336 = io_d2c_EXE_pc_branch == 2'h1; // @[cpath.scala 197:80]
  wire [2:0] _T_1337 = _T_1336 ? cp_bpu_io_IF_pc_sel : 3'h2; // @[cpath.scala 197:58]
  wire [2:0] _T_1339 = _T_1336 ? 3'h2 : cp_bpu_io_IF_pc_sel; // @[cpath.scala 197:118]
  wire [2:0] _T_1340 = io_d2c_iseq ? _T_1337 : _T_1339; // @[cpath.scala 197:42]
  wire  _T_1341 = cs_exe_branch == 4'h2; // @[cpath.scala 198:24]
  wire  _T_1342 = ~io_d2c_iseq; // @[cpath.scala 198:44]
  wire [2:0] _T_1347 = _T_1342 ? _T_1337 : _T_1339; // @[cpath.scala 198:43]
  wire  _T_1348 = cs_exe_branch == 4'h5; // @[cpath.scala 199:24]
  wire  _T_1349 = ~io_d2c_islt; // @[cpath.scala 199:43]
  wire [2:0] _T_1354 = _T_1349 ? _T_1337 : _T_1339; // @[cpath.scala 199:42]
  wire  _T_1355 = cs_exe_branch == 4'h6; // @[cpath.scala 200:24]
  wire  _T_1356 = ~io_d2c_isltu; // @[cpath.scala 200:44]
  wire [2:0] _T_1361 = _T_1356 ? _T_1337 : _T_1339; // @[cpath.scala 200:43]
  wire  _T_1362 = cs_exe_branch == 4'h3; // @[cpath.scala 201:24]
  wire [2:0] _T_1367 = io_d2c_islt ? _T_1337 : _T_1339; // @[cpath.scala 201:42]
  wire  _T_1368 = cs_exe_branch == 4'h4; // @[cpath.scala 202:24]
  wire [2:0] _T_1373 = io_d2c_isltu ? _T_1337 : _T_1339; // @[cpath.scala 202:43]
  wire  _T_1374 = cs_exe_branch == 4'h7; // @[cpath.scala 203:24]
  wire  _T_1375 = cs_exe_branch == 4'h8; // @[cpath.scala 204:24]
  wire [2:0] _T_1376 = _T_1375 ? 3'h3 : cp_bpu_io_IF_pc_sel; // @[Mux.scala 98:16]
  wire [2:0] _T_1377 = _T_1374 ? 3'h1 : _T_1376; // @[Mux.scala 98:16]
  wire [2:0] _T_1378 = _T_1368 ? _T_1373 : _T_1377; // @[Mux.scala 98:16]
  wire [2:0] _T_1379 = _T_1362 ? _T_1367 : _T_1378; // @[Mux.scala 98:16]
  wire [2:0] _T_1380 = _T_1355 ? _T_1361 : _T_1379; // @[Mux.scala 98:16]
  wire [2:0] _T_1381 = _T_1348 ? _T_1354 : _T_1380; // @[Mux.scala 98:16]
  wire [2:0] _T_1382 = _T_1341 ? _T_1347 : _T_1381; // @[Mux.scala 98:16]
  wire [2:0] _T_1383 = _T_1335 ? _T_1340 : _T_1382; // @[Mux.scala 98:16]
  wire [2:0] _T_1384 = _T_1334 ? cp_bpu_io_IF_pc_sel : _T_1383; // @[Mux.scala 98:16]
  wire [1:0] _T_1386 = io_d2c_iseq ? 2'h1 : 2'h2; // @[cpath.scala 208:41]
  wire [1:0] _T_1389 = _T_1342 ? 2'h1 : 2'h2; // @[cpath.scala 209:42]
  wire [1:0] _T_1392 = _T_1349 ? 2'h1 : 2'h2; // @[cpath.scala 210:41]
  wire [1:0] _T_1395 = _T_1356 ? 2'h1 : 2'h2; // @[cpath.scala 211:42]
  wire [1:0] _T_1397 = io_d2c_islt ? 2'h1 : 2'h2; // @[cpath.scala 212:41]
  wire [1:0] _T_1399 = io_d2c_isltu ? 2'h1 : 2'h2; // @[cpath.scala 213:42]
  wire [1:0] _T_1400 = _T_1368 ? _T_1399 : 2'h0; // @[Mux.scala 98:16]
  wire [1:0] _T_1401 = _T_1362 ? _T_1397 : _T_1400; // @[Mux.scala 98:16]
  wire [1:0] _T_1402 = _T_1355 ? _T_1395 : _T_1401; // @[Mux.scala 98:16]
  wire [1:0] _T_1403 = _T_1348 ? _T_1392 : _T_1402; // @[Mux.scala 98:16]
  wire [1:0] _T_1404 = _T_1341 ? _T_1389 : _T_1403; // @[Mux.scala 98:16]
  wire [2:0] temp_pc_sel = io_d2c_isredir ? 3'h4 : _T_1384; // @[cpath.scala 219:5]
  wire  _T_1406 = cs_csr_op != 3'h0; // @[cpath.scala 225:35]
  wire  _T_1407 = cs_csr_op != 3'h5; // @[cpath.scala 225:60]
  wire  temp_is_csr = _T_1406 & _T_1407; // @[cpath.scala 225:46]
  reg  cs_reg_exe_is_csr; // @[cpath.scala 226:36]
  reg  cs_reg_exe_is_fencei; // @[cpath.scala 227:39]
  wire  _T_1408 = temp_pc_sel != 3'h0; // @[cpath.scala 231:22]
  wire  _T_1409 = temp_pc_sel != 3'h5; // @[cpath.scala 231:46]
  wire  cs_wire_control_hazard = _T_1408 & _T_1409; // @[cpath.scala 231:31]
  wire  _T_1412 = ~cs_mem_en; // @[cpath.scala 250:49]
  wire  temp_wire_dec_is_load = cs_mem_valid & _T_1412; // @[cpath.scala 250:46]
  reg  cs_reg_exe_is_load; // @[cpath.scala 253:37]
  wire [4:0] cs_wire_dec_rs1_addr = io_d2c_instr[19:15]; // @[cpath.scala 255:44]
  wire [4:0] cs_wire_dec_rs2_addr = io_d2c_instr[24:20]; // @[cpath.scala 256:44]
  wire [4:0] cs_wire_dec_rd_addr = io_d2c_instr[11:7]; // @[cpath.scala 257:44]
  reg [4:0] cs_reg_exe_rd_addr; // @[cpath.scala 259:37]
  wire  _T_1413 = cs_reg_exe_is_load | cs_reg_exe_is_csr; // @[cpath.scala 261:29]
  wire  _T_1414 = cs_reg_exe_rd_addr == cs_wire_dec_rs1_addr; // @[cpath.scala 263:34]
  wire  _T_1415 = _T_1414 & cs_rs1_en; // @[cpath.scala 263:59]
  wire  _T_1416 = cs_reg_exe_rd_addr == cs_wire_dec_rs2_addr; // @[cpath.scala 263:96]
  wire  _T_1417 = _T_1416 & cs_rs2_en; // @[cpath.scala 263:121]
  wire  _T_1418 = _T_1415 | _T_1417; // @[cpath.scala 263:73]
  wire  cs_wire_data_hazard = _T_1413 & _T_1418; // @[cpath.scala 262:5]
  reg  cs_reg_dec_imem_valid; // @[cpath.scala 278:40]
  wire  _T_1419 = ~cs_valid_inst; // @[cpath.scala 279:33]
  wire  cs_wire_dec_exception = _T_1419 & cs_reg_dec_imem_valid; // @[cpath.scala 279:48]
  reg  cs_reg_exe_exception; // @[cpath.scala 280:39]
  reg  cs_reg_mem_exception; // @[cpath.scala 281:39]
  wire  _T_1420 = ~io_d2c_mem_mem_valid; // @[cpath.scala 294:39]
  wire  _T_1421 = io_d2c_mem_mem_valid & io_dmem_data_valid; // @[cpath.scala 294:87]
  wire  _T_1422 = _T_1420 | _T_1421; // @[cpath.scala 294:62]
  wire  cs_wire_pipeline_data_stall = ~_T_1422; // @[cpath.scala 294:36]
  wire  cs_wire_pipeline_inst_stall = ~io_imem_data_valid; // @[cpath.scala 295:36]
  wire  cs_wire_pipeline_stall = cs_wire_pipeline_inst_stall | cs_wire_pipeline_data_stall; // @[cpath.scala 297:59]
  BPU cp_bpu ( // @[cpath.scala 181:24]
    .clock(cp_bpu_clock),
    .reset(cp_bpu_reset),
    .io_IF_ins(cp_bpu_io_IF_ins),
    .io_EXE_pc_branch(cp_bpu_io_EXE_pc_branch),
    .io_EXE_actual_branch(cp_bpu_io_EXE_actual_branch),
    .io_has_stall(cp_bpu_io_has_stall),
    .io_IF_pc_branch(cp_bpu_io_IF_pc_branch),
    .io_IF_pc_sel(cp_bpu_io_IF_pc_sel)
  );
  assign io_c2d_cp_pc_sel = io_d2c_isredir ? 3'h4 : _T_1384; // @[cpath.scala 302:22]
  assign io_c2d_cp_op1_sel = _T_1 ? 2'h0 : _T_371; // @[cpath.scala 303:23]
  assign io_c2d_cp_op2_sel = _T_1 ? 2'h0 : _T_445; // @[cpath.scala 304:23]
  assign io_c2d_cp_alu_sel = _T_1 ? 5'h0 : _T_519; // @[cpath.scala 305:23]
  assign io_c2d_cp_reg_wen = _T_1 | _T_593; // @[cpath.scala 306:23]
  assign io_c2d_cp_mem_en = _T_1 ? 1'h0 : _T_667; // @[cpath.scala 307:22]
  assign io_c2d_cp_mem_read_op = _T_1 ? 3'h0 : _T_741; // @[cpath.scala 308:27]
  assign io_c2d_cp_mem_write_mask = _T_1 ? 8'h1 : _T_815; // @[cpath.scala 309:30]
  assign io_c2d_cp_mem_wen = _T_1 ? 1'h0 : _T_889; // @[cpath.scala 310:23]
  assign io_c2d_cp_alu_ext_sel = _T_1 ? 3'h0 : _T_1111; // @[cpath.scala 311:27]
  assign io_c2d_cp_wb_sel = _T_1 ? 2'h2 : _T_963; // @[cpath.scala 312:22]
  assign io_c2d_cp_csr_op = _T_1 ? 3'h0 : _T_1037; // @[cpath.scala 313:22]
  assign io_c2d_cp_control_hazard = _T_1408 & _T_1409; // @[cpath.scala 315:30]
  assign io_c2d_cp_if_kill = cs_is_fencei | cs_reg_exe_is_fencei; // @[cpath.scala 316:23]
  assign io_c2d_cp_data_hazard = _T_1413 & _T_1418; // @[cpath.scala 317:27]
  assign io_c2d_cp_pipeline_kill = io_d2c_isredir; // @[cpath.scala 318:29]
  assign io_c2d_cp_pipeline_stall = cs_wire_pipeline_inst_stall | cs_wire_pipeline_data_stall; // @[cpath.scala 319:30]
  assign io_c2d_cp_pipeline_data_stall = ~_T_1422; // @[cpath.scala 320:35]
  assign io_c2d_cp_pipeline_inst_stall = ~io_imem_data_valid; // @[cpath.scala 321:35]
  assign io_c2d_cp_if_pc_branch = cp_bpu_io_IF_pc_branch; // @[cpath.scala 188:28]
  assign io_c2d_cp_exe_actual_branch = cp_bpu_io_EXE_actual_branch; // @[cpath.scala 216:33]
  assign io_c2d_hasexception = cs_reg_mem_exception; // @[cpath.scala 283:25]
  assign io_c2d_shouldstall = cs_wire_pipeline_inst_stall | cs_wire_pipeline_data_stall; // @[cpath.scala 298:24]
  assign cs_valid_inst_0 = cs_valid_inst;
  assign cp_bpu_clock = clock;
  assign cp_bpu_reset = reset;
  assign cp_bpu_io_IF_ins = {{32'd0}, io_d2c_IF_ins}; // @[cpath.scala 184:22]
  assign cp_bpu_io_EXE_pc_branch = io_d2c_EXE_pc_branch; // @[cpath.scala 186:29]
  assign cp_bpu_io_EXE_actual_branch = _T_1335 ? _T_1386 : _T_1404; // @[cpath.scala 207:33]
  assign cp_bpu_io_has_stall = cs_wire_pipeline_inst_stall | cs_wire_pipeline_data_stall; // @[cpath.scala 185:25]
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
  _RAND_0 = {1{`RANDOM}};
  cs_exe_branch = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  cs_reg_exe_is_csr = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  cs_reg_exe_is_fencei = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  cs_reg_exe_is_load = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  cs_reg_exe_rd_addr = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  cs_reg_dec_imem_valid = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  cs_reg_exe_exception = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  cs_reg_mem_exception = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      cs_exe_branch <= 4'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_exe_branch <= 4'h0;
      end else if (cs_wire_data_hazard) begin
        cs_exe_branch <= 4'h0;
      end else if (cs_wire_control_hazard) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_1) begin
        cs_exe_branch <= 4'h7;
      end else if (_T_3) begin
        cs_exe_branch <= 4'h8;
      end else if (_T_5) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_7) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_9) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_11) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_13) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_15) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_17) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_19) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_21) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_23) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_25) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_27) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_29) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_31) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_33) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_35) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_37) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_39) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_41) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_43) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_45) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_47) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_49) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_51) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_53) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_55) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_57) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_59) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_61) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_63) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_65) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_67) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_69) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_71) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_73) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_75) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_77) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_79) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_81) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_83) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_85) begin
        cs_exe_branch <= 4'h0;
      end else if (_T_87) begin
        cs_exe_branch <= 4'h1;
      end else if (_T_89) begin
        cs_exe_branch <= 4'h5;
      end else if (_T_91) begin
        cs_exe_branch <= 4'h6;
      end else if (_T_93) begin
        cs_exe_branch <= 4'h3;
      end else if (_T_95) begin
        cs_exe_branch <= 4'h4;
      end else if (_T_97) begin
        cs_exe_branch <= 4'h2;
      end else begin
        cs_exe_branch <= 4'h0;
      end
    end
    if (reset) begin
      cs_reg_exe_is_csr <= 1'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_reg_exe_is_csr <= 1'h0;
      end else if (cs_wire_data_hazard) begin
        cs_reg_exe_is_csr <= 1'h0;
      end else if (cs_wire_control_hazard) begin
        cs_reg_exe_is_csr <= 1'h0;
      end else begin
        cs_reg_exe_is_csr <= temp_is_csr;
      end
    end
    if (reset) begin
      cs_reg_exe_is_fencei <= 1'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (cs_wire_data_hazard) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (cs_wire_control_hazard) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_1) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_3) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_5) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_7) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_9) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_11) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_13) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_15) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_17) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_19) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_21) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_23) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_25) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_27) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_29) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_31) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_33) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_35) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_37) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_39) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_41) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_43) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_45) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_47) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_49) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_51) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_53) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_55) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_57) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_59) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_61) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_63) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_65) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_67) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_69) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_71) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_73) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_75) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_77) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_79) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_81) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_83) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_85) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_87) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_89) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_91) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_93) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_95) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_97) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_99) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_101) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_103) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_105) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_107) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_109) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_111) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_113) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_115) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_117) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_119) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else if (_T_121) begin
        cs_reg_exe_is_fencei <= 1'h0;
      end else begin
        cs_reg_exe_is_fencei <= _T_123;
      end
    end
    if (reset) begin
      cs_reg_exe_is_load <= 1'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_reg_exe_is_load <= 1'h0;
      end else if (cs_wire_data_hazard) begin
        cs_reg_exe_is_load <= 1'h0;
      end else if (cs_wire_control_hazard) begin
        cs_reg_exe_is_load <= 1'h0;
      end else begin
        cs_reg_exe_is_load <= temp_wire_dec_is_load;
      end
    end
    if (reset) begin
      cs_reg_exe_rd_addr <= 5'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_reg_exe_rd_addr <= 5'h0;
      end else if (cs_wire_data_hazard) begin
        cs_reg_exe_rd_addr <= 5'h0;
      end else if (cs_wire_control_hazard) begin
        cs_reg_exe_rd_addr <= 5'h0;
      end else begin
        cs_reg_exe_rd_addr <= cs_wire_dec_rd_addr;
      end
    end
    if (reset) begin
      cs_reg_dec_imem_valid <= 1'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_reg_dec_imem_valid <= 1'h0;
      end else if (!(cs_wire_data_hazard)) begin
        if (cs_wire_control_hazard) begin
          cs_reg_dec_imem_valid <= 1'h0;
        end else begin
          cs_reg_dec_imem_valid <= io_imem_data_valid;
        end
      end
    end
    if (reset) begin
      cs_reg_exe_exception <= 1'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_reg_exe_exception <= 1'h0;
      end else if (cs_wire_data_hazard) begin
        cs_reg_exe_exception <= 1'h0;
      end else if (cs_wire_control_hazard) begin
        cs_reg_exe_exception <= 1'h0;
      end else begin
        cs_reg_exe_exception <= cs_wire_dec_exception;
      end
    end
    if (reset) begin
      cs_reg_mem_exception <= 1'h0;
    end else if (!(cs_wire_pipeline_stall)) begin
      if (io_d2c_isredir) begin
        cs_reg_mem_exception <= 1'h0;
      end else begin
        cs_reg_mem_exception <= cs_reg_exe_exception;
      end
    end
  end
endmodule
module Sramlike2AXI4(
  input         clock,
  input         reset,
  input  [63:0] io_ports_0_addr,
  output [63:0] io_ports_0_rdata,
  output        io_ports_0_data_valid,
  input  [63:0] io_ports_1_addr,
  input  [7:0]  io_ports_1_mask,
  input  [2:0]  io_ports_1_op,
  input  [63:0] io_ports_1_wdata,
  input         io_ports_1_memen,
  input         io_ports_1_wen,
  output [63:0] io_ports_1_rdata,
  output        io_ports_1_data_valid,
  output [63:0] io_axi4_awaddr,
  output        io_axi4_awvalid,
  input         io_axi4_awready,
  output [63:0] io_axi4_araddr,
  output        io_axi4_arvalid,
  input         io_axi4_arready,
  input  [63:0] io_axi4_rdata,
  input         io_axi4_rvalid,
  output        io_axi4_rready,
  output [63:0] io_axi4_wdata,
  output [7:0]  io_axi4_wstrb,
  output        io_axi4_wvalid,
  input         io_axi4_wready,
  input         io_axi4_bvalid,
  output        io_axi4_bready,
  input         exe_stall_0
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  reg  has_request; // @[BusBridge.scala 26:30]
  reg  do_data_request; // @[BusBridge.scala 30:34]
  reg  do_inst_request; // @[BusBridge.scala 31:34]
  reg  addr_recv; // @[BusBridge.scala 34:28]
  reg  data_recv; // @[BusBridge.scala 36:28]
  reg [63:0] info_addr; // @[BusBridge.scala 39:24]
  reg [7:0] info_mask; // @[BusBridge.scala 40:24]
  reg [2:0] info_op; // @[BusBridge.scala 41:24]
  reg [63:0] info_wdata; // @[BusBridge.scala 42:24]
  reg  info_wen; // @[BusBridge.scala 43:24]
  wire  _T_103 = has_request & addr_recv; // @[BusBridge.scala 228:30]
  wire  _T_104 = io_axi4_rvalid & io_axi4_rready; // @[BusBridge.scala 228:64]
  wire  _T_105 = io_axi4_bvalid & io_axi4_bready; // @[BusBridge.scala 228:102]
  wire  _T_106 = _T_104 | _T_105; // @[BusBridge.scala 228:83]
  wire  data_back = _T_103 & _T_106; // @[BusBridge.scala 228:43]
  wire  _T_2 = ~has_request; // @[BusBridge.scala 53:10]
  wire  _GEN_1 = data_back ? 1'h0 : has_request; // @[BusBridge.scala 65:9]
  wire  _GEN_2 = _T_2 | _GEN_1; // @[BusBridge.scala 54:5]
  wire  has_inst_request = ~io_ports_1_memen; // @[BusBridge.scala 76:49]
  wire  _T_8 = ~data_back; // @[BusBridge.scala 128:10]
  wire  _T_9 = io_axi4_awvalid & io_axi4_awready; // @[BusBridge.scala 130:32]
  wire  _T_10 = io_axi4_arvalid & io_axi4_arready; // @[BusBridge.scala 130:72]
  wire  _T_11 = _T_9 | _T_10; // @[BusBridge.scala 130:52]
  wire  _GEN_22 = _T_11 | addr_recv; // @[BusBridge.scala 131:9]
  wire  _T_12 = io_axi4_wvalid & io_axi4_wready; // @[BusBridge.scala 138:31]
  wire  _GEN_23 = _T_12 | data_recv; // @[BusBridge.scala 139:9]
  wire  _GEN_24 = _T_8 & _GEN_22; // @[BusBridge.scala 129:5]
  wire  _GEN_25 = _T_8 & _GEN_23; // @[BusBridge.scala 129:5]
  wire  _T_13 = has_request & info_wen; // @[BusBridge.scala 166:37]
  wire  _T_14 = ~addr_recv; // @[BusBridge.scala 166:52]
  wire  _T_16 = ~info_wen; // @[BusBridge.scala 180:40]
  wire  _T_17 = has_request & _T_16; // @[BusBridge.scala 180:37]
  wire  _T_22 = ~data_recv; // @[BusBridge.scala 193:51]
  wire  _T_28 = info_op == 3'h0; // @[BusBridge.scala 204:26]
  wire [55:0] _T_31 = io_axi4_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_33 = {_T_31,io_axi4_rdata[7:0]}; // @[Cat.scala 29:58]
  wire  _T_34 = info_op == 3'h1; // @[BusBridge.scala 205:26]
  wire [63:0] _T_37 = {56'h0,io_axi4_rdata[7:0]}; // @[Cat.scala 29:58]
  wire  _T_38 = info_op == 3'h2; // @[BusBridge.scala 206:26]
  wire [47:0] _T_41 = io_axi4_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_43 = {_T_41,io_axi4_rdata[15:0]}; // @[Cat.scala 29:58]
  wire  _T_44 = info_op == 3'h3; // @[BusBridge.scala 207:26]
  wire [63:0] _T_47 = {48'h0,io_axi4_rdata[15:0]}; // @[Cat.scala 29:58]
  wire  _T_48 = info_op == 3'h4; // @[BusBridge.scala 208:26]
  wire [31:0] _T_51 = io_axi4_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_53 = {_T_51,io_axi4_rdata[31:0]}; // @[Cat.scala 29:58]
  wire  _T_54 = info_op == 3'h5; // @[BusBridge.scala 209:26]
  wire [63:0] _T_57 = {32'h0,io_axi4_rdata[31:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_58 = _T_54 ? _T_57 : io_axi4_rdata; // @[Mux.scala 98:16]
  wire [63:0] _T_59 = _T_48 ? _T_53 : _T_58; // @[Mux.scala 98:16]
  wire [63:0] _T_60 = _T_44 ? _T_47 : _T_59; // @[Mux.scala 98:16]
  wire [63:0] _T_61 = _T_38 ? _T_43 : _T_60; // @[Mux.scala 98:16]
  wire [63:0] _T_62 = _T_34 ? _T_37 : _T_61; // @[Mux.scala 98:16]
  assign io_ports_0_rdata = _T_28 ? _T_33 : _T_62; // @[BusBridge.scala 213:30]
  assign io_ports_0_data_valid = data_back & do_inst_request; // @[BusBridge.scala 51:31]
  assign io_ports_1_rdata = _T_28 ? _T_33 : _T_62; // @[BusBridge.scala 203:30]
  assign io_ports_1_data_valid = data_back & do_data_request; // @[BusBridge.scala 50:31]
  assign io_axi4_awaddr = info_addr; // @[BusBridge.scala 156:20]
  assign io_axi4_awvalid = _T_13 & _T_14; // @[BusBridge.scala 166:21]
  assign io_axi4_araddr = info_addr; // @[BusBridge.scala 170:20]
  assign io_axi4_arvalid = _T_17 & _T_14; // @[BusBridge.scala 180:21]
  assign io_axi4_rready = ~exe_stall_0; // @[BusBridge.scala 188:20]
  assign io_axi4_wdata = info_wdata; // @[BusBridge.scala 191:19]
  assign io_axi4_wstrb = info_mask; // @[BusBridge.scala 192:19]
  assign io_axi4_wvalid = _T_13 & _T_22; // @[BusBridge.scala 193:20]
  assign io_axi4_bready = ~exe_stall_0; // @[BusBridge.scala 198:20]
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
  _RAND_0 = {1{`RANDOM}};
  has_request = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  do_data_request = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  do_inst_request = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  addr_recv = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  data_recv = _RAND_4[0:0];
  _RAND_5 = {2{`RANDOM}};
  info_addr = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  info_mask = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  info_op = _RAND_7[2:0];
  _RAND_8 = {2{`RANDOM}};
  info_wdata = _RAND_8[63:0];
  _RAND_9 = {1{`RANDOM}};
  info_wen = _RAND_9[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      has_request <= 1'h0;
    end else begin
      has_request <= _GEN_2;
    end
    if (reset) begin
      do_data_request <= 1'h0;
    end else if (_T_2) begin
      do_data_request <= io_ports_1_memen;
    end else if (data_back) begin
      do_data_request <= 1'h0;
    end
    if (reset) begin
      do_inst_request <= 1'h0;
    end else if (_T_2) begin
      do_inst_request <= has_inst_request;
    end else if (data_back) begin
      do_inst_request <= 1'h0;
    end
    if (reset) begin
      addr_recv <= 1'h0;
    end else begin
      addr_recv <= _GEN_24;
    end
    if (reset) begin
      data_recv <= 1'h0;
    end else begin
      data_recv <= _GEN_25;
    end
    if (_T_2) begin
      if (io_ports_1_memen) begin
        info_addr <= io_ports_1_addr;
      end else if (has_inst_request) begin
        info_addr <= io_ports_0_addr;
      end
    end
    if (_T_2) begin
      if (io_ports_1_memen) begin
        info_mask <= io_ports_1_mask;
      end else if (has_inst_request) begin
        info_mask <= 8'h0;
      end
    end
    if (_T_2) begin
      if (io_ports_1_memen) begin
        info_op <= io_ports_1_op;
      end else if (has_inst_request) begin
        info_op <= 3'h5;
      end
    end
    if (_T_2) begin
      if (io_ports_1_memen) begin
        info_wdata <= io_ports_1_wdata;
      end else if (has_inst_request) begin
        info_wdata <= 64'h0;
      end
    end
    if (_T_2) begin
      if (io_ports_1_memen) begin
        info_wen <= io_ports_1_wen;
      end else if (has_inst_request) begin
        info_wen <= 1'h0;
      end
    end
  end
endmodule
module core(
  input         clock,
  input         reset,
  output [63:0] io_axi4_awaddr,
  output        io_axi4_awvalid,
  input         io_axi4_awready,
  output [63:0] io_axi4_araddr,
  output        io_axi4_arvalid,
  input         io_axi4_arready,
  input  [63:0] io_axi4_rdata,
  input         io_axi4_rvalid,
  output        io_axi4_rready,
  output [63:0] io_axi4_wdata,
  output [7:0]  io_axi4_wstrb,
  output        io_axi4_wvalid,
  input         io_axi4_wready,
  input         io_axi4_bvalid,
  output        io_axi4_bready,
  output [63:0] _T_111,
  output [63:0] abs_op1,
  output        io_is_retire,
  output        io_isredir,
  output [63:0] dp_wb_reg_pc,
  output        io_exe_stall,
  output [63:0] _T_17772,
  output        cs_valid_inst,
  output [31:0] dp_wb_reg_instr,
  output [63:0] _T_110,
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
  output [63:0] _T_41_31,
  input         has_time_interrupt,
  output [63:0] abs_op2
);
  wire  dpath_clock; // @[core.scala 22:23]
  wire  dpath_reset; // @[core.scala 22:23]
  wire [2:0] dpath_io_c2d_cp_pc_sel; // @[core.scala 22:23]
  wire [1:0] dpath_io_c2d_cp_op1_sel; // @[core.scala 22:23]
  wire [1:0] dpath_io_c2d_cp_op2_sel; // @[core.scala 22:23]
  wire [4:0] dpath_io_c2d_cp_alu_sel; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_reg_wen; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_mem_en; // @[core.scala 22:23]
  wire [2:0] dpath_io_c2d_cp_mem_read_op; // @[core.scala 22:23]
  wire [7:0] dpath_io_c2d_cp_mem_write_mask; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_mem_wen; // @[core.scala 22:23]
  wire [2:0] dpath_io_c2d_cp_alu_ext_sel; // @[core.scala 22:23]
  wire [1:0] dpath_io_c2d_cp_wb_sel; // @[core.scala 22:23]
  wire [2:0] dpath_io_c2d_cp_csr_op; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_control_hazard; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_if_kill; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_data_hazard; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_pipeline_kill; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_pipeline_stall; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_pipeline_data_stall; // @[core.scala 22:23]
  wire  dpath_io_c2d_cp_pipeline_inst_stall; // @[core.scala 22:23]
  wire [1:0] dpath_io_c2d_cp_if_pc_branch; // @[core.scala 22:23]
  wire [1:0] dpath_io_c2d_cp_exe_actual_branch; // @[core.scala 22:23]
  wire  dpath_io_c2d_hasexception; // @[core.scala 22:23]
  wire  dpath_io_c2d_shouldstall; // @[core.scala 22:23]
  wire [31:0] dpath_io_d2c_instr; // @[core.scala 22:23]
  wire  dpath_io_d2c_islt; // @[core.scala 22:23]
  wire  dpath_io_d2c_isltu; // @[core.scala 22:23]
  wire  dpath_io_d2c_iseq; // @[core.scala 22:23]
  wire  dpath_io_d2c_isredir; // @[core.scala 22:23]
  wire  dpath_io_d2c_mem_mem_valid; // @[core.scala 22:23]
  wire [31:0] dpath_io_d2c_IF_ins; // @[core.scala 22:23]
  wire [1:0] dpath_io_d2c_EXE_pc_branch; // @[core.scala 22:23]
  wire [63:0] dpath_io_imem_addr; // @[core.scala 22:23]
  wire [63:0] dpath_io_imem_rdata; // @[core.scala 22:23]
  wire [63:0] dpath_io_dmem_addr; // @[core.scala 22:23]
  wire [7:0] dpath_io_dmem_mask; // @[core.scala 22:23]
  wire [2:0] dpath_io_dmem_op; // @[core.scala 22:23]
  wire [63:0] dpath_io_dmem_wdata; // @[core.scala 22:23]
  wire  dpath_io_dmem_memen; // @[core.scala 22:23]
  wire  dpath_io_dmem_wen; // @[core.scala 22:23]
  wire [63:0] dpath_io_dmem_rdata; // @[core.scala 22:23]
  wire [63:0] dpath__T_111_0; // @[core.scala 22:23]
  wire [63:0] dpath_abs_op1; // @[core.scala 22:23]
  wire  dpath_io_is_retire; // @[core.scala 22:23]
  wire  dpath_io_isredir; // @[core.scala 22:23]
  wire [63:0] dpath_dp_wb_reg_pc_0; // @[core.scala 22:23]
  wire  dpath_io_exe_stall; // @[core.scala 22:23]
  wire [63:0] dpath__T_17772; // @[core.scala 22:23]
  wire [31:0] dpath_dp_wb_reg_instr_0; // @[core.scala 22:23]
  wire  dpath_io_exe_stall_0; // @[core.scala 22:23]
  wire [63:0] dpath__T_110_0; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_0; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_1; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_2; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_3; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_4; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_5; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_6; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_7; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_8; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_9; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_10; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_11; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_12; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_13; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_14; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_15; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_16; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_17; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_18; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_19; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_20; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_21; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_22; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_23; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_24; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_25; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_26; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_27; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_28; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_29; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_30; // @[core.scala 22:23]
  wire [63:0] dpath__T_41_0_31; // @[core.scala 22:23]
  wire  dpath_has_time_interrupt; // @[core.scala 22:23]
  wire [63:0] dpath_abs_op2; // @[core.scala 22:23]
  wire  cpath_clock; // @[core.scala 23:23]
  wire  cpath_reset; // @[core.scala 23:23]
  wire [2:0] cpath_io_c2d_cp_pc_sel; // @[core.scala 23:23]
  wire [1:0] cpath_io_c2d_cp_op1_sel; // @[core.scala 23:23]
  wire [1:0] cpath_io_c2d_cp_op2_sel; // @[core.scala 23:23]
  wire [4:0] cpath_io_c2d_cp_alu_sel; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_reg_wen; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_mem_en; // @[core.scala 23:23]
  wire [2:0] cpath_io_c2d_cp_mem_read_op; // @[core.scala 23:23]
  wire [7:0] cpath_io_c2d_cp_mem_write_mask; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_mem_wen; // @[core.scala 23:23]
  wire [2:0] cpath_io_c2d_cp_alu_ext_sel; // @[core.scala 23:23]
  wire [1:0] cpath_io_c2d_cp_wb_sel; // @[core.scala 23:23]
  wire [2:0] cpath_io_c2d_cp_csr_op; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_control_hazard; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_if_kill; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_data_hazard; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_pipeline_kill; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_pipeline_stall; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_pipeline_data_stall; // @[core.scala 23:23]
  wire  cpath_io_c2d_cp_pipeline_inst_stall; // @[core.scala 23:23]
  wire [1:0] cpath_io_c2d_cp_if_pc_branch; // @[core.scala 23:23]
  wire [1:0] cpath_io_c2d_cp_exe_actual_branch; // @[core.scala 23:23]
  wire  cpath_io_c2d_hasexception; // @[core.scala 23:23]
  wire  cpath_io_c2d_shouldstall; // @[core.scala 23:23]
  wire [31:0] cpath_io_d2c_instr; // @[core.scala 23:23]
  wire  cpath_io_d2c_islt; // @[core.scala 23:23]
  wire  cpath_io_d2c_isltu; // @[core.scala 23:23]
  wire  cpath_io_d2c_iseq; // @[core.scala 23:23]
  wire  cpath_io_d2c_isredir; // @[core.scala 23:23]
  wire  cpath_io_d2c_mem_mem_valid; // @[core.scala 23:23]
  wire [31:0] cpath_io_d2c_IF_ins; // @[core.scala 23:23]
  wire [1:0] cpath_io_d2c_EXE_pc_branch; // @[core.scala 23:23]
  wire  cpath_io_imem_data_valid; // @[core.scala 23:23]
  wire  cpath_io_dmem_data_valid; // @[core.scala 23:23]
  wire  cpath_cs_valid_inst_0; // @[core.scala 23:23]
  wire  bus_bridge_clock; // @[core.scala 24:28]
  wire  bus_bridge_reset; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_ports_0_addr; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_ports_0_rdata; // @[core.scala 24:28]
  wire  bus_bridge_io_ports_0_data_valid; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_ports_1_addr; // @[core.scala 24:28]
  wire [7:0] bus_bridge_io_ports_1_mask; // @[core.scala 24:28]
  wire [2:0] bus_bridge_io_ports_1_op; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_ports_1_wdata; // @[core.scala 24:28]
  wire  bus_bridge_io_ports_1_memen; // @[core.scala 24:28]
  wire  bus_bridge_io_ports_1_wen; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_ports_1_rdata; // @[core.scala 24:28]
  wire  bus_bridge_io_ports_1_data_valid; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_axi4_awaddr; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_awvalid; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_awready; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_axi4_araddr; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_arvalid; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_arready; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_axi4_rdata; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_rvalid; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_rready; // @[core.scala 24:28]
  wire [63:0] bus_bridge_io_axi4_wdata; // @[core.scala 24:28]
  wire [7:0] bus_bridge_io_axi4_wstrb; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_wvalid; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_wready; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_bvalid; // @[core.scala 24:28]
  wire  bus_bridge_io_axi4_bready; // @[core.scala 24:28]
  wire  bus_bridge_exe_stall_0; // @[core.scala 24:28]
  Dpath dpath ( // @[core.scala 22:23]
    .clock(dpath_clock),
    .reset(dpath_reset),
    .io_c2d_cp_pc_sel(dpath_io_c2d_cp_pc_sel),
    .io_c2d_cp_op1_sel(dpath_io_c2d_cp_op1_sel),
    .io_c2d_cp_op2_sel(dpath_io_c2d_cp_op2_sel),
    .io_c2d_cp_alu_sel(dpath_io_c2d_cp_alu_sel),
    .io_c2d_cp_reg_wen(dpath_io_c2d_cp_reg_wen),
    .io_c2d_cp_mem_en(dpath_io_c2d_cp_mem_en),
    .io_c2d_cp_mem_read_op(dpath_io_c2d_cp_mem_read_op),
    .io_c2d_cp_mem_write_mask(dpath_io_c2d_cp_mem_write_mask),
    .io_c2d_cp_mem_wen(dpath_io_c2d_cp_mem_wen),
    .io_c2d_cp_alu_ext_sel(dpath_io_c2d_cp_alu_ext_sel),
    .io_c2d_cp_wb_sel(dpath_io_c2d_cp_wb_sel),
    .io_c2d_cp_csr_op(dpath_io_c2d_cp_csr_op),
    .io_c2d_cp_control_hazard(dpath_io_c2d_cp_control_hazard),
    .io_c2d_cp_if_kill(dpath_io_c2d_cp_if_kill),
    .io_c2d_cp_data_hazard(dpath_io_c2d_cp_data_hazard),
    .io_c2d_cp_pipeline_kill(dpath_io_c2d_cp_pipeline_kill),
    .io_c2d_cp_pipeline_stall(dpath_io_c2d_cp_pipeline_stall),
    .io_c2d_cp_pipeline_data_stall(dpath_io_c2d_cp_pipeline_data_stall),
    .io_c2d_cp_pipeline_inst_stall(dpath_io_c2d_cp_pipeline_inst_stall),
    .io_c2d_cp_if_pc_branch(dpath_io_c2d_cp_if_pc_branch),
    .io_c2d_cp_exe_actual_branch(dpath_io_c2d_cp_exe_actual_branch),
    .io_c2d_hasexception(dpath_io_c2d_hasexception),
    .io_c2d_shouldstall(dpath_io_c2d_shouldstall),
    .io_d2c_instr(dpath_io_d2c_instr),
    .io_d2c_islt(dpath_io_d2c_islt),
    .io_d2c_isltu(dpath_io_d2c_isltu),
    .io_d2c_iseq(dpath_io_d2c_iseq),
    .io_d2c_isredir(dpath_io_d2c_isredir),
    .io_d2c_mem_mem_valid(dpath_io_d2c_mem_mem_valid),
    .io_d2c_IF_ins(dpath_io_d2c_IF_ins),
    .io_d2c_EXE_pc_branch(dpath_io_d2c_EXE_pc_branch),
    .io_imem_addr(dpath_io_imem_addr),
    .io_imem_rdata(dpath_io_imem_rdata),
    .io_dmem_addr(dpath_io_dmem_addr),
    .io_dmem_mask(dpath_io_dmem_mask),
    .io_dmem_op(dpath_io_dmem_op),
    .io_dmem_wdata(dpath_io_dmem_wdata),
    .io_dmem_memen(dpath_io_dmem_memen),
    .io_dmem_wen(dpath_io_dmem_wen),
    .io_dmem_rdata(dpath_io_dmem_rdata),
    ._T_111_0(dpath__T_111_0),
    .abs_op1(dpath_abs_op1),
    .io_is_retire(dpath_io_is_retire),
    .io_isredir(dpath_io_isredir),
    .dp_wb_reg_pc_0(dpath_dp_wb_reg_pc_0),
    .io_exe_stall(dpath_io_exe_stall),
    ._T_17772(dpath__T_17772),
    .dp_wb_reg_instr_0(dpath_dp_wb_reg_instr_0),
    .io_exe_stall_0(dpath_io_exe_stall_0),
    ._T_110_0(dpath__T_110_0),
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
    ._T_41_0_31(dpath__T_41_0_31),
    .has_time_interrupt(dpath_has_time_interrupt),
    .abs_op2(dpath_abs_op2)
  );
  Cpath cpath ( // @[core.scala 23:23]
    .clock(cpath_clock),
    .reset(cpath_reset),
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
    .io_c2d_cp_csr_op(cpath_io_c2d_cp_csr_op),
    .io_c2d_cp_control_hazard(cpath_io_c2d_cp_control_hazard),
    .io_c2d_cp_if_kill(cpath_io_c2d_cp_if_kill),
    .io_c2d_cp_data_hazard(cpath_io_c2d_cp_data_hazard),
    .io_c2d_cp_pipeline_kill(cpath_io_c2d_cp_pipeline_kill),
    .io_c2d_cp_pipeline_stall(cpath_io_c2d_cp_pipeline_stall),
    .io_c2d_cp_pipeline_data_stall(cpath_io_c2d_cp_pipeline_data_stall),
    .io_c2d_cp_pipeline_inst_stall(cpath_io_c2d_cp_pipeline_inst_stall),
    .io_c2d_cp_if_pc_branch(cpath_io_c2d_cp_if_pc_branch),
    .io_c2d_cp_exe_actual_branch(cpath_io_c2d_cp_exe_actual_branch),
    .io_c2d_hasexception(cpath_io_c2d_hasexception),
    .io_c2d_shouldstall(cpath_io_c2d_shouldstall),
    .io_d2c_instr(cpath_io_d2c_instr),
    .io_d2c_islt(cpath_io_d2c_islt),
    .io_d2c_isltu(cpath_io_d2c_isltu),
    .io_d2c_iseq(cpath_io_d2c_iseq),
    .io_d2c_isredir(cpath_io_d2c_isredir),
    .io_d2c_mem_mem_valid(cpath_io_d2c_mem_mem_valid),
    .io_d2c_IF_ins(cpath_io_d2c_IF_ins),
    .io_d2c_EXE_pc_branch(cpath_io_d2c_EXE_pc_branch),
    .io_imem_data_valid(cpath_io_imem_data_valid),
    .io_dmem_data_valid(cpath_io_dmem_data_valid),
    .cs_valid_inst_0(cpath_cs_valid_inst_0)
  );
  Sramlike2AXI4 bus_bridge ( // @[core.scala 24:28]
    .clock(bus_bridge_clock),
    .reset(bus_bridge_reset),
    .io_ports_0_addr(bus_bridge_io_ports_0_addr),
    .io_ports_0_rdata(bus_bridge_io_ports_0_rdata),
    .io_ports_0_data_valid(bus_bridge_io_ports_0_data_valid),
    .io_ports_1_addr(bus_bridge_io_ports_1_addr),
    .io_ports_1_mask(bus_bridge_io_ports_1_mask),
    .io_ports_1_op(bus_bridge_io_ports_1_op),
    .io_ports_1_wdata(bus_bridge_io_ports_1_wdata),
    .io_ports_1_memen(bus_bridge_io_ports_1_memen),
    .io_ports_1_wen(bus_bridge_io_ports_1_wen),
    .io_ports_1_rdata(bus_bridge_io_ports_1_rdata),
    .io_ports_1_data_valid(bus_bridge_io_ports_1_data_valid),
    .io_axi4_awaddr(bus_bridge_io_axi4_awaddr),
    .io_axi4_awvalid(bus_bridge_io_axi4_awvalid),
    .io_axi4_awready(bus_bridge_io_axi4_awready),
    .io_axi4_araddr(bus_bridge_io_axi4_araddr),
    .io_axi4_arvalid(bus_bridge_io_axi4_arvalid),
    .io_axi4_arready(bus_bridge_io_axi4_arready),
    .io_axi4_rdata(bus_bridge_io_axi4_rdata),
    .io_axi4_rvalid(bus_bridge_io_axi4_rvalid),
    .io_axi4_rready(bus_bridge_io_axi4_rready),
    .io_axi4_wdata(bus_bridge_io_axi4_wdata),
    .io_axi4_wstrb(bus_bridge_io_axi4_wstrb),
    .io_axi4_wvalid(bus_bridge_io_axi4_wvalid),
    .io_axi4_wready(bus_bridge_io_axi4_wready),
    .io_axi4_bvalid(bus_bridge_io_axi4_bvalid),
    .io_axi4_bready(bus_bridge_io_axi4_bready),
    .exe_stall_0(bus_bridge_exe_stall_0)
  );
  assign io_axi4_awaddr = bus_bridge_io_axi4_awaddr; // @[core.scala 51:20]
  assign io_axi4_awvalid = bus_bridge_io_axi4_awvalid; // @[core.scala 60:21]
  assign io_axi4_araddr = bus_bridge_io_axi4_araddr; // @[core.scala 65:20]
  assign io_axi4_arvalid = bus_bridge_io_axi4_arvalid; // @[core.scala 74:21]
  assign io_axi4_rready = bus_bridge_io_axi4_rready; // @[core.scala 84:20]
  assign io_axi4_wdata = bus_bridge_io_axi4_wdata; // @[core.scala 86:19]
  assign io_axi4_wstrb = bus_bridge_io_axi4_wstrb; // @[core.scala 87:19]
  assign io_axi4_wvalid = bus_bridge_io_axi4_wvalid; // @[core.scala 89:20]
  assign io_axi4_bready = bus_bridge_io_axi4_bready; // @[core.scala 97:20]
  assign _T_111 = dpath__T_111_0;
  assign abs_op1 = dpath_abs_op1;
  assign io_is_retire = dpath_io_is_retire;
  assign io_isredir = dpath_io_isredir;
  assign dp_wb_reg_pc = dpath_dp_wb_reg_pc_0;
  assign io_exe_stall = dpath_io_exe_stall;
  assign _T_17772 = dpath__T_17772;
  assign cs_valid_inst = cpath_cs_valid_inst_0;
  assign dp_wb_reg_instr = dpath_dp_wb_reg_instr_0;
  assign _T_110 = dpath__T_110_0;
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
  assign abs_op2 = dpath_abs_op2;
  assign dpath_clock = clock;
  assign dpath_reset = reset;
  assign dpath_io_c2d_cp_pc_sel = cpath_io_c2d_cp_pc_sel; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_op1_sel = cpath_io_c2d_cp_op1_sel; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_op2_sel = cpath_io_c2d_cp_op2_sel; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_alu_sel = cpath_io_c2d_cp_alu_sel; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_reg_wen = cpath_io_c2d_cp_reg_wen; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_mem_en = cpath_io_c2d_cp_mem_en; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_mem_read_op = cpath_io_c2d_cp_mem_read_op; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_mem_write_mask = cpath_io_c2d_cp_mem_write_mask; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_mem_wen = cpath_io_c2d_cp_mem_wen; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_alu_ext_sel = cpath_io_c2d_cp_alu_ext_sel; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_wb_sel = cpath_io_c2d_cp_wb_sel; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_csr_op = cpath_io_c2d_cp_csr_op; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_control_hazard = cpath_io_c2d_cp_control_hazard; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_if_kill = cpath_io_c2d_cp_if_kill; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_data_hazard = cpath_io_c2d_cp_data_hazard; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_pipeline_kill = cpath_io_c2d_cp_pipeline_kill; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_pipeline_stall = cpath_io_c2d_cp_pipeline_stall; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_pipeline_data_stall = cpath_io_c2d_cp_pipeline_data_stall; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_pipeline_inst_stall = cpath_io_c2d_cp_pipeline_inst_stall; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_if_pc_branch = cpath_io_c2d_cp_if_pc_branch; // @[core.scala 27:18]
  assign dpath_io_c2d_cp_exe_actual_branch = cpath_io_c2d_cp_exe_actual_branch; // @[core.scala 27:18]
  assign dpath_io_c2d_hasexception = cpath_io_c2d_hasexception; // @[core.scala 27:18]
  assign dpath_io_c2d_shouldstall = cpath_io_c2d_shouldstall; // @[core.scala 27:18]
  assign dpath_io_imem_rdata = bus_bridge_io_ports_0_rdata; // @[core.scala 43:31]
  assign dpath_io_dmem_rdata = bus_bridge_io_ports_1_rdata; // @[core.scala 46:31]
  assign dpath_has_time_interrupt = has_time_interrupt;
  assign cpath_clock = clock;
  assign cpath_reset = reset;
  assign cpath_io_d2c_instr = dpath_io_d2c_instr; // @[core.scala 28:18]
  assign cpath_io_d2c_islt = dpath_io_d2c_islt; // @[core.scala 28:18]
  assign cpath_io_d2c_isltu = dpath_io_d2c_isltu; // @[core.scala 28:18]
  assign cpath_io_d2c_iseq = dpath_io_d2c_iseq; // @[core.scala 28:18]
  assign cpath_io_d2c_isredir = dpath_io_d2c_isredir; // @[core.scala 28:18]
  assign cpath_io_d2c_mem_mem_valid = dpath_io_d2c_mem_mem_valid; // @[core.scala 28:18]
  assign cpath_io_d2c_IF_ins = dpath_io_d2c_IF_ins; // @[core.scala 28:18]
  assign cpath_io_d2c_EXE_pc_branch = dpath_io_d2c_EXE_pc_branch; // @[core.scala 28:18]
  assign cpath_io_imem_data_valid = bus_bridge_io_ports_0_data_valid; // @[core.scala 44:30]
  assign cpath_io_dmem_data_valid = bus_bridge_io_ports_1_data_valid; // @[core.scala 47:30]
  assign bus_bridge_clock = clock;
  assign bus_bridge_reset = reset;
  assign bus_bridge_io_ports_0_addr = dpath_io_imem_addr; // @[core.scala 43:31]
  assign bus_bridge_io_ports_1_addr = dpath_io_dmem_addr; // @[core.scala 46:31]
  assign bus_bridge_io_ports_1_mask = dpath_io_dmem_mask; // @[core.scala 46:31]
  assign bus_bridge_io_ports_1_op = dpath_io_dmem_op; // @[core.scala 46:31]
  assign bus_bridge_io_ports_1_wdata = dpath_io_dmem_wdata; // @[core.scala 46:31]
  assign bus_bridge_io_ports_1_memen = dpath_io_dmem_memen; // @[core.scala 46:31]
  assign bus_bridge_io_ports_1_wen = dpath_io_dmem_wen; // @[core.scala 46:31]
  assign bus_bridge_io_axi4_awready = io_axi4_awready; // @[core.scala 62:32]
  assign bus_bridge_io_axi4_arready = io_axi4_arready; // @[core.scala 76:32]
  assign bus_bridge_io_axi4_rdata = io_axi4_rdata; // @[core.scala 79:30]
  assign bus_bridge_io_axi4_rvalid = io_axi4_rvalid; // @[core.scala 82:31]
  assign bus_bridge_io_axi4_wready = io_axi4_wready; // @[core.scala 91:31]
  assign bus_bridge_io_axi4_bvalid = io_axi4_bvalid; // @[core.scala 95:31]
  assign bus_bridge_exe_stall_0 = dpath_io_exe_stall_0;
endmodule
module UART(
  input        clock,
  output [7:0] io_ch_get,
  input  [7:0] io_ch_put,
  input        io_getc,
  input        io_putc
);
  wire  uart_helper_clk; // @[uart.scala 66:29]
  wire  uart_helper_getc; // @[uart.scala 66:29]
  wire  uart_helper_putc; // @[uart.scala 66:29]
  wire [7:0] uart_helper_ch_put; // @[uart.scala 66:29]
  wire [7:0] uart_helper_ch_get; // @[uart.scala 66:29]
  UARTHelper uart_helper ( // @[uart.scala 66:29]
    .clk(uart_helper_clk),
    .getc(uart_helper_getc),
    .putc(uart_helper_putc),
    .ch_put(uart_helper_ch_put),
    .ch_get(uart_helper_ch_get)
  );
  assign io_ch_get = uart_helper_ch_get; // @[uart.scala 74:15]
  assign uart_helper_clk = clock; // @[uart.scala 70:24]
  assign uart_helper_getc = io_getc; // @[uart.scala 71:25]
  assign uart_helper_putc = io_putc; // @[uart.scala 72:25]
  assign uart_helper_ch_put = io_ch_put; // @[uart.scala 73:27]
endmodule
module AXI4_Ram(
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
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg /* sparse */ [7:0] mem [0:134217727]; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_25_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_25_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_29_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_29_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_33_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_33_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_37_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_37_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_41_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_41_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_45_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_45_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_49_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_49_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_53_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_53_addr; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_102_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_102_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_102_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_102_en; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_106_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_106_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_106_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_106_en; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_110_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_110_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_110_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_110_en; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_114_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_114_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_114_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_114_en; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_118_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_118_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_118_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_118_en; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_122_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_122_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_122_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_122_en; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_126_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_126_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_126_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_126_en; // @[AXI4_Ram.scala 82:18]
  wire [7:0] mem__T_130_data; // @[AXI4_Ram.scala 82:18]
  wire [26:0] mem__T_130_addr; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_130_mask; // @[AXI4_Ram.scala 82:18]
  wire  mem__T_130_en; // @[AXI4_Ram.scala 82:18]
  wire  uart_clock; // @[AXI4_Ram.scala 84:22]
  wire [7:0] uart_io_ch_get; // @[AXI4_Ram.scala 84:22]
  wire [7:0] uart_io_ch_put; // @[AXI4_Ram.scala 84:22]
  wire  uart_io_getc; // @[AXI4_Ram.scala 84:22]
  wire  uart_io_putc; // @[AXI4_Ram.scala 84:22]
  reg [63:0] reg_mtimecmp; // @[AXI4_Ram.scala 91:31]
  reg [63:0] reg_mtime; // @[AXI4_Ram.scala 92:28]
  reg [31:0] uart_control; // @[AXI4_Ram.scala 94:31]
  reg [31:0] uart_state; // @[AXI4_Ram.scala 95:29]
  reg [15:0] cnt; // @[AXI4_Ram.scala 101:22]
  wire [15:0] nextcnt = cnt + 16'h1; // @[AXI4_Ram.scala 102:23]
  wire  _T_1 = nextcnt == 16'h28; // @[AXI4_Ram.scala 105:24]
  wire [63:0] _T_5 = reg_mtime + 64'h1; // @[AXI4_Ram.scala 109:32]
  wire [63:0] _GEN_0 = _T_1 ? _T_5 : reg_mtime; // @[AXI4_Ram.scala 108:5]
  wire  _T_6 = reg_mtime >= reg_mtimecmp; // @[AXI4_Ram.scala 112:41]
  wire  _T_7 = _T_6; // @[AXI4_Ram.scala 112:30]
  reg [1:0] read_state; // @[AXI4_Ram.scala 128:29]
  reg [1:0] write_state; // @[AXI4_Ram.scala 129:30]
  reg [63:0] reg_awaddr; // @[AXI4_Ram.scala 132:29]
  reg [63:0] reg_araddr; // @[AXI4_Ram.scala 133:29]
  reg [63:0] temp_read_data; // @[AXI4_Ram.scala 139:29]
  wire  _T_9 = 2'h0 == read_state; // @[Conditional.scala 37:30]
  wire  _T_10 = 2'h1 == read_state; // @[Conditional.scala 37:30]
  wire  _T_11 = reg_araddr == 64'h40600000; // @[AXI4_Ram.scala 162:29]
  wire [63:0] _T_13 = {56'h0,uart_io_ch_get}; // @[Cat.scala 29:58]
  wire  _T_14 = reg_araddr == 64'h40600008; // @[AXI4_Ram.scala 170:33]
  wire [63:0] _T_16 = {32'h0,uart_state}; // @[Cat.scala 29:58]
  wire  _T_17 = reg_araddr == 64'h4060000c; // @[AXI4_Ram.scala 174:40]
  wire [63:0] _T_19 = {32'h0,uart_control}; // @[Cat.scala 29:58]
  wire  _T_20 = reg_araddr == 64'h40704000; // @[AXI4_Ram.scala 178:40]
  wire  _T_21 = reg_araddr == 64'h4070bff8; // @[AXI4_Ram.scala 182:40]
  wire [64:0] _T_22 = {{1'd0}, reg_araddr}; // @[AXI4_Ram.scala 189:87]
  wire [63:0] _T_27 = reg_araddr + 64'h1; // @[AXI4_Ram.scala 189:87]
  wire [63:0] _T_31 = reg_araddr + 64'h2; // @[AXI4_Ram.scala 189:87]
  wire [63:0] _T_35 = reg_araddr + 64'h3; // @[AXI4_Ram.scala 189:87]
  wire [63:0] _T_39 = reg_araddr + 64'h4; // @[AXI4_Ram.scala 189:87]
  wire [63:0] _T_43 = reg_araddr + 64'h5; // @[AXI4_Ram.scala 189:87]
  wire [63:0] _T_47 = reg_araddr + 64'h6; // @[AXI4_Ram.scala 189:87]
  wire [63:0] _T_51 = reg_araddr + 64'h7; // @[AXI4_Ram.scala 189:87]
  wire [7:0] _T_54_1 = mem__T_29_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [7:0] _T_54_0 = mem__T_25_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [7:0] _T_54_3 = mem__T_37_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [7:0] _T_54_2 = mem__T_33_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [7:0] _T_54_5 = mem__T_45_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [7:0] _T_54_4 = mem__T_41_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [7:0] _T_54_7 = mem__T_53_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [7:0] _T_54_6 = mem__T_49_data; // @[AXI4_Ram.scala 189:63 AXI4_Ram.scala 189:63]
  wire [63:0] _T_61 = {_T_54_7,_T_54_6,_T_54_5,_T_54_4,_T_54_3,_T_54_2,_T_54_1,_T_54_0}; // @[Cat.scala 29:58]
  wire  _GEN_6 = _T_21 ? 1'h0 : 1'h1; // @[AXI4_Ram.scala 183:18]
  wire  _GEN_17 = _T_20 ? 1'h0 : _GEN_6; // @[AXI4_Ram.scala 179:17]
  wire  _GEN_28 = _T_17 ? 1'h0 : _GEN_17; // @[AXI4_Ram.scala 175:18]
  wire  _GEN_39 = _T_14 ? 1'h0 : _GEN_28; // @[AXI4_Ram.scala 171:17]
  wire  _GEN_51 = _T_11 ? 1'h0 : _GEN_39; // @[AXI4_Ram.scala 163:13]
  wire  _T_62 = 2'h2 == read_state; // @[Conditional.scala 37:30]
  wire  _GEN_66 = _T_10 ? 1'h0 : io_rready; // @[Conditional.scala 39:67]
  wire  _GEN_67 = _T_10 & _T_11; // @[Conditional.scala 39:67]
  wire  _GEN_71 = _T_10 & _GEN_51; // @[Conditional.scala 39:67]
  wire  _T_63 = 2'h0 == write_state; // @[Conditional.scala 37:30]
  wire  _T_64 = 2'h1 == write_state; // @[Conditional.scala 37:30]
  wire [7:0] _GEN_356 = io_wvalid ? io_wstrb : 8'h0; // @[AXI4_Ram.scala 232:13]
  wire [7:0] _GEN_413 = _T_64 ? _GEN_356 : 8'h0; // @[Conditional.scala 39:67]
  wire [7:0] wire_wstrb = _T_63 ? 8'h0 : _GEN_413; // @[Conditional.scala 40:58]
  wire  _T_91 = reg_awaddr == 64'h40600004; // @[AXI4_Ram.scala 264:33]
  wire  _T_93 = reg_awaddr == 64'h40600008; // @[AXI4_Ram.scala 272:37]
  wire  _T_95 = reg_awaddr == 64'h4060000c; // @[AXI4_Ram.scala 276:43]
  wire  _T_97 = reg_awaddr == 64'h40704000; // @[AXI4_Ram.scala 280:43]
  wire  _T_98 = reg_awaddr == 64'h4070bff8; // @[AXI4_Ram.scala 284:43]
  wire [64:0] _T_99 = {{1'd0}, reg_awaddr}; // @[AXI4_Ram.scala 295:53]
  wire [63:0] _T_104 = reg_awaddr + 64'h1; // @[AXI4_Ram.scala 295:53]
  wire [63:0] _T_108 = reg_awaddr + 64'h2; // @[AXI4_Ram.scala 295:53]
  wire [63:0] _T_112 = reg_awaddr + 64'h3; // @[AXI4_Ram.scala 295:53]
  wire [63:0] _T_116 = reg_awaddr + 64'h4; // @[AXI4_Ram.scala 295:53]
  wire [63:0] _T_120 = reg_awaddr + 64'h5; // @[AXI4_Ram.scala 295:53]
  wire [63:0] _T_124 = reg_awaddr + 64'h6; // @[AXI4_Ram.scala 295:53]
  wire [63:0] _T_128 = reg_awaddr + 64'h7; // @[AXI4_Ram.scala 295:53]
  wire  _GEN_143 = _T_98 ? 1'h0 : wire_wstrb[0]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_148 = _T_98 ? 1'h0 : wire_wstrb[1]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_153 = _T_98 ? 1'h0 : wire_wstrb[2]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_158 = _T_98 ? 1'h0 : wire_wstrb[3]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_163 = _T_98 ? 1'h0 : wire_wstrb[4]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_168 = _T_98 ? 1'h0 : wire_wstrb[5]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_173 = _T_98 ? 1'h0 : wire_wstrb[6]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_178 = _T_98 ? 1'h0 : wire_wstrb[7]; // @[AXI4_Ram.scala 285:21]
  wire  _GEN_185 = _T_97 ? 1'h0 : _GEN_143; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_190 = _T_97 ? 1'h0 : _GEN_148; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_195 = _T_97 ? 1'h0 : _GEN_153; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_200 = _T_97 ? 1'h0 : _GEN_158; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_205 = _T_97 ? 1'h0 : _GEN_163; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_210 = _T_97 ? 1'h0 : _GEN_168; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_215 = _T_97 ? 1'h0 : _GEN_173; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_220 = _T_97 ? 1'h0 : _GEN_178; // @[AXI4_Ram.scala 281:21]
  wire  _GEN_228 = _T_95 ? 1'h0 : _GEN_185; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_233 = _T_95 ? 1'h0 : _GEN_190; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_238 = _T_95 ? 1'h0 : _GEN_195; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_243 = _T_95 ? 1'h0 : _GEN_200; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_248 = _T_95 ? 1'h0 : _GEN_205; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_253 = _T_95 ? 1'h0 : _GEN_210; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_258 = _T_95 ? 1'h0 : _GEN_215; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_263 = _T_95 ? 1'h0 : _GEN_220; // @[AXI4_Ram.scala 277:21]
  wire  _GEN_272 = _T_93 ? 1'h0 : _GEN_228; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_277 = _T_93 ? 1'h0 : _GEN_233; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_282 = _T_93 ? 1'h0 : _GEN_238; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_287 = _T_93 ? 1'h0 : _GEN_243; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_292 = _T_93 ? 1'h0 : _GEN_248; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_297 = _T_93 ? 1'h0 : _GEN_253; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_302 = _T_93 ? 1'h0 : _GEN_258; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_307 = _T_93 ? 1'h0 : _GEN_263; // @[AXI4_Ram.scala 273:21]
  wire  _GEN_318 = _T_91 ? 1'h0 : _GEN_272; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_323 = _T_91 ? 1'h0 : _GEN_277; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_328 = _T_91 ? 1'h0 : _GEN_282; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_333 = _T_91 ? 1'h0 : _GEN_287; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_338 = _T_91 ? 1'h0 : _GEN_292; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_343 = _T_91 ? 1'h0 : _GEN_297; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_348 = _T_91 ? 1'h0 : _GEN_302; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_353 = _T_91 ? 1'h0 : _GEN_307; // @[AXI4_Ram.scala 265:17]
  wire  _GEN_358 = io_wvalid & _T_91; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_365 = io_wvalid & _GEN_318; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_370 = io_wvalid & _GEN_323; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_375 = io_wvalid & _GEN_328; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_380 = io_wvalid & _GEN_333; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_385 = io_wvalid & _GEN_338; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_390 = io_wvalid & _GEN_343; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_395 = io_wvalid & _GEN_348; // @[AXI4_Ram.scala 232:13]
  wire  _GEN_400 = io_wvalid & _GEN_353; // @[AXI4_Ram.scala 232:13]
  wire  _T_131 = 2'h2 == write_state; // @[Conditional.scala 37:30]
  wire  _GEN_412 = _T_64 ? 1'h0 : io_bready; // @[Conditional.scala 39:67]
  wire  _GEN_415 = _T_64 & _GEN_358; // @[Conditional.scala 39:67]
  wire  _GEN_422 = _T_64 & _GEN_365; // @[Conditional.scala 39:67]
  wire  _GEN_427 = _T_64 & _GEN_370; // @[Conditional.scala 39:67]
  wire  _GEN_432 = _T_64 & _GEN_375; // @[Conditional.scala 39:67]
  wire  _GEN_437 = _T_64 & _GEN_380; // @[Conditional.scala 39:67]
  wire  _GEN_442 = _T_64 & _GEN_385; // @[Conditional.scala 39:67]
  wire  _GEN_447 = _T_64 & _GEN_390; // @[Conditional.scala 39:67]
  wire  _GEN_452 = _T_64 & _GEN_395; // @[Conditional.scala 39:67]
  wire  _GEN_457 = _T_64 & _GEN_400; // @[Conditional.scala 39:67]
  wire  has_time_interrupt = _T_6; // @[AXI4_Ram.scala 112:24]
  UART uart ( // @[AXI4_Ram.scala 84:22]
    .clock(uart_clock),
    .io_ch_get(uart_io_ch_get),
    .io_ch_put(uart_io_ch_put),
    .io_getc(uart_io_getc),
    .io_putc(uart_io_putc)
  );
  assign mem__T_25_addr = _T_22[26:0];
  assign mem__T_25_data = mem[mem__T_25_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_29_addr = _T_27[26:0];
  assign mem__T_29_data = mem[mem__T_29_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_33_addr = _T_31[26:0];
  assign mem__T_33_data = mem[mem__T_33_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_37_addr = _T_35[26:0];
  assign mem__T_37_data = mem[mem__T_37_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_41_addr = _T_39[26:0];
  assign mem__T_41_data = mem[mem__T_41_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_45_addr = _T_43[26:0];
  assign mem__T_45_data = mem[mem__T_45_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_49_addr = _T_47[26:0];
  assign mem__T_49_data = mem[mem__T_49_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_53_addr = _T_51[26:0];
  assign mem__T_53_data = mem[mem__T_53_addr]; // @[AXI4_Ram.scala 82:18]
  assign mem__T_102_data = io_wdata[7:0];
  assign mem__T_102_addr = _T_99[26:0];
  assign mem__T_102_mask = 1'h1;
  assign mem__T_102_en = _T_63 ? 1'h0 : _GEN_422;
  assign mem__T_106_data = io_wdata[15:8];
  assign mem__T_106_addr = _T_104[26:0];
  assign mem__T_106_mask = 1'h1;
  assign mem__T_106_en = _T_63 ? 1'h0 : _GEN_427;
  assign mem__T_110_data = io_wdata[23:16];
  assign mem__T_110_addr = _T_108[26:0];
  assign mem__T_110_mask = 1'h1;
  assign mem__T_110_en = _T_63 ? 1'h0 : _GEN_432;
  assign mem__T_114_data = io_wdata[31:24];
  assign mem__T_114_addr = _T_112[26:0];
  assign mem__T_114_mask = 1'h1;
  assign mem__T_114_en = _T_63 ? 1'h0 : _GEN_437;
  assign mem__T_118_data = io_wdata[39:32];
  assign mem__T_118_addr = _T_116[26:0];
  assign mem__T_118_mask = 1'h1;
  assign mem__T_118_en = _T_63 ? 1'h0 : _GEN_442;
  assign mem__T_122_data = io_wdata[47:40];
  assign mem__T_122_addr = _T_120[26:0];
  assign mem__T_122_mask = 1'h1;
  assign mem__T_122_en = _T_63 ? 1'h0 : _GEN_447;
  assign mem__T_126_data = io_wdata[55:48];
  assign mem__T_126_addr = _T_124[26:0];
  assign mem__T_126_mask = 1'h1;
  assign mem__T_126_en = _T_63 ? 1'h0 : _GEN_452;
  assign mem__T_130_data = io_wdata[63:56];
  assign mem__T_130_addr = _T_128[26:0];
  assign mem__T_130_mask = 1'h1;
  assign mem__T_130_en = _T_63 ? 1'h0 : _GEN_457;
  assign io_awready = 2'h0 == write_state; // @[AXI4_Ram.scala 217:24 AXI4_Ram.scala 229:24 AXI4_Ram.scala 307:24]
  assign io_arready = 2'h0 == read_state; // @[AXI4_Ram.scala 146:24 AXI4_Ram.scala 158:24 AXI4_Ram.scala 197:24]
  assign io_rdata = temp_read_data; // @[AXI4_Ram.scala 199:22]
  assign io_rvalid = _T_9 ? 1'h0 : _GEN_66; // @[AXI4_Ram.scala 147:23 AXI4_Ram.scala 159:24 AXI4_Ram.scala 202:28 AXI4_Ram.scala 206:28]
  assign io_wready = _T_63 ? 1'h0 : _T_64; // @[AXI4_Ram.scala 216:24 AXI4_Ram.scala 228:24 AXI4_Ram.scala 306:24]
  assign io_bvalid = _T_63 ? 1'h0 : _GEN_412; // @[AXI4_Ram.scala 218:23 AXI4_Ram.scala 230:23 AXI4_Ram.scala 312:27 AXI4_Ram.scala 316:27]
  assign has_time_interrupt_0 = _T_7;
  assign uart_clock = clock;
  assign uart_io_ch_put = io_wdata[7:0]; // @[AXI4_Ram.scala 267:36]
  assign uart_io_getc = _T_9 ? 1'h0 : _GEN_67; // @[AXI4_Ram.scala 148:26 AXI4_Ram.scala 165:30 AXI4_Ram.scala 169:30 AXI4_Ram.scala 198:26]
  assign uart_io_putc = _T_63 ? 1'h0 : _GEN_415; // @[AXI4_Ram.scala 87:18 AXI4_Ram.scala 219:26 AXI4_Ram.scala 268:34 AXI4_Ram.scala 271:34 AXI4_Ram.scala 308:26]
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
  for (initvar = 0; initvar < 134217728; initvar = initvar+1)
    mem[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {2{`RANDOM}};
  reg_mtimecmp = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  reg_mtime = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  uart_control = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  uart_state = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  cnt = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  read_state = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  write_state = _RAND_7[1:0];
  _RAND_8 = {2{`RANDOM}};
  reg_awaddr = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  reg_araddr = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  temp_read_data = _RAND_10[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if(mem__T_102_en & mem__T_102_mask) begin
      mem[mem__T_102_addr] <= mem__T_102_data; // @[AXI4_Ram.scala 82:18]
    end
    if(mem__T_106_en & mem__T_106_mask) begin
      mem[mem__T_106_addr] <= mem__T_106_data; // @[AXI4_Ram.scala 82:18]
    end
    if(mem__T_110_en & mem__T_110_mask) begin
      mem[mem__T_110_addr] <= mem__T_110_data; // @[AXI4_Ram.scala 82:18]
    end
    if(mem__T_114_en & mem__T_114_mask) begin
      mem[mem__T_114_addr] <= mem__T_114_data; // @[AXI4_Ram.scala 82:18]
    end
    if(mem__T_118_en & mem__T_118_mask) begin
      mem[mem__T_118_addr] <= mem__T_118_data; // @[AXI4_Ram.scala 82:18]
    end
    if(mem__T_122_en & mem__T_122_mask) begin
      mem[mem__T_122_addr] <= mem__T_122_data; // @[AXI4_Ram.scala 82:18]
    end
    if(mem__T_126_en & mem__T_126_mask) begin
      mem[mem__T_126_addr] <= mem__T_126_data; // @[AXI4_Ram.scala 82:18]
    end
    if(mem__T_130_en & mem__T_130_mask) begin
      mem[mem__T_130_addr] <= mem__T_130_data; // @[AXI4_Ram.scala 82:18]
    end
    if (reset) begin
      reg_mtimecmp <= 64'h0;
    end else if (!(_T_63)) begin
      if (_T_64) begin
        if (io_wvalid) begin
          if (!(_T_91)) begin
            if (!(_T_93)) begin
              if (!(_T_95)) begin
                if (_T_97) begin
                  reg_mtimecmp <= io_wdata;
                end
              end
            end
          end
        end
      end
    end
    if (reset) begin
      reg_mtime <= 64'h0;
    end else if (_T_63) begin
      if (_T_1) begin
        reg_mtime <= _T_5;
      end
    end else if (_T_64) begin
      if (io_wvalid) begin
        if (_T_91) begin
          if (_T_1) begin
            reg_mtime <= _T_5;
          end
        end else if (_T_93) begin
          if (_T_1) begin
            reg_mtime <= _T_5;
          end
        end else if (_T_95) begin
          if (_T_1) begin
            reg_mtime <= _T_5;
          end
        end else if (_T_97) begin
          reg_mtime <= _GEN_0;
        end else if (_T_98) begin
          reg_mtime <= io_wdata;
        end else begin
          reg_mtime <= _GEN_0;
        end
      end else begin
        reg_mtime <= _GEN_0;
      end
    end else begin
      reg_mtime <= _GEN_0;
    end
    if (reset) begin
      uart_control <= 32'h0;
    end else if (!(_T_63)) begin
      if (_T_64) begin
        if (io_wvalid) begin
          if (!(_T_91)) begin
            if (!(_T_93)) begin
              if (_T_95) begin
                uart_control <= io_wdata[31:0];
              end
            end
          end
        end
      end
    end
    if (reset) begin
      uart_state <= 32'h1;
    end else if (!(_T_63)) begin
      if (_T_64) begin
        if (io_wvalid) begin
          if (!(_T_91)) begin
            if (_T_93) begin
              uart_state <= io_wdata[31:0];
            end
          end
        end
      end
    end
    if (reset) begin
      cnt <= 16'h0;
    end else if (_T_1) begin
      cnt <= 16'h0;
    end else begin
      cnt <= nextcnt;
    end
    if (reset) begin
      read_state <= 2'h0;
    end else if (_T_9) begin
      if (io_arvalid) begin
        read_state <= 2'h1;
      end
    end else if (_T_10) begin
      read_state <= 2'h2;
    end else if (_T_62) begin
      if (io_rready) begin
        read_state <= 2'h0;
      end else begin
        read_state <= 2'h2;
      end
    end
    if (reset) begin
      write_state <= 2'h0;
    end else if (_T_63) begin
      if (io_awvalid) begin
        write_state <= 2'h1;
      end
    end else if (_T_64) begin
      if (io_wvalid) begin
        write_state <= 2'h2;
      end
    end else if (_T_131) begin
      if (io_bready) begin
        write_state <= 2'h0;
      end else begin
        write_state <= 2'h2;
      end
    end
    if (reset) begin
      reg_awaddr <= 64'h0;
    end else if (_T_63) begin
      if (io_awvalid) begin
        reg_awaddr <= io_awaddr;
      end
    end
    if (reset) begin
      reg_araddr <= 64'h0;
    end else if (_T_9) begin
      if (io_arvalid) begin
        reg_araddr <= io_araddr;
      end
    end
    if (!(_T_9)) begin
      if (_T_10) begin
        if (_T_11) begin
          temp_read_data <= _T_13;
        end else if (_T_14) begin
          temp_read_data <= _T_16;
        end else if (_T_17) begin
          temp_read_data <= _T_19;
        end else if (_T_20) begin
          temp_read_data <= reg_mtimecmp;
        end else if (_T_21) begin
          temp_read_data <= reg_mtime;
        end else begin
          temp_read_data <= _T_61;
        end
      end
    end
  end
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
  output [63:0] io_diff_mstatus,
  output        io_diff_isredir,
  output        io_diff_is_retire,
  output [31:0] io_diff_instr_in_wb,
  output        io_diff_is_valid,
  output        io_diff_alu_exe_stall,
  output [63:0] io_diff_mul_result_hi,
  output [63:0] io_diff_mul_result_lo,
  output [63:0] io_diff_abs_op1,
  output [63:0] io_diff_abs_op2
);
  wire  mycore_clock; // @[top.scala 30:24]
  wire  mycore_reset; // @[top.scala 30:24]
  wire [63:0] mycore_io_axi4_awaddr; // @[top.scala 30:24]
  wire  mycore_io_axi4_awvalid; // @[top.scala 30:24]
  wire  mycore_io_axi4_awready; // @[top.scala 30:24]
  wire [63:0] mycore_io_axi4_araddr; // @[top.scala 30:24]
  wire  mycore_io_axi4_arvalid; // @[top.scala 30:24]
  wire  mycore_io_axi4_arready; // @[top.scala 30:24]
  wire [63:0] mycore_io_axi4_rdata; // @[top.scala 30:24]
  wire  mycore_io_axi4_rvalid; // @[top.scala 30:24]
  wire  mycore_io_axi4_rready; // @[top.scala 30:24]
  wire [63:0] mycore_io_axi4_wdata; // @[top.scala 30:24]
  wire [7:0] mycore_io_axi4_wstrb; // @[top.scala 30:24]
  wire  mycore_io_axi4_wvalid; // @[top.scala 30:24]
  wire  mycore_io_axi4_wready; // @[top.scala 30:24]
  wire  mycore_io_axi4_bvalid; // @[top.scala 30:24]
  wire  mycore_io_axi4_bready; // @[top.scala 30:24]
  wire [63:0] mycore__T_111; // @[top.scala 30:24]
  wire [63:0] mycore_abs_op1; // @[top.scala 30:24]
  wire  mycore_io_is_retire; // @[top.scala 30:24]
  wire  mycore_io_isredir; // @[top.scala 30:24]
  wire [63:0] mycore_dp_wb_reg_pc; // @[top.scala 30:24]
  wire  mycore_io_exe_stall; // @[top.scala 30:24]
  wire [63:0] mycore__T_17772; // @[top.scala 30:24]
  wire  mycore_cs_valid_inst; // @[top.scala 30:24]
  wire [31:0] mycore_dp_wb_reg_instr; // @[top.scala 30:24]
  wire [63:0] mycore__T_110; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_0; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_1; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_2; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_3; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_4; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_5; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_6; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_7; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_8; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_9; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_10; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_11; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_12; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_13; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_14; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_15; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_16; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_17; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_18; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_19; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_20; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_21; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_22; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_23; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_24; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_25; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_26; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_27; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_28; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_29; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_30; // @[top.scala 30:24]
  wire [63:0] mycore__T_41_31; // @[top.scala 30:24]
  wire  mycore_has_time_interrupt; // @[top.scala 30:24]
  wire [63:0] mycore_abs_op2; // @[top.scala 30:24]
  wire  mymem_clock; // @[top.scala 31:24]
  wire  mymem_reset; // @[top.scala 31:24]
  wire [63:0] mymem_io_awaddr; // @[top.scala 31:24]
  wire  mymem_io_awvalid; // @[top.scala 31:24]
  wire  mymem_io_awready; // @[top.scala 31:24]
  wire [63:0] mymem_io_araddr; // @[top.scala 31:24]
  wire  mymem_io_arvalid; // @[top.scala 31:24]
  wire  mymem_io_arready; // @[top.scala 31:24]
  wire [63:0] mymem_io_rdata; // @[top.scala 31:24]
  wire  mymem_io_rvalid; // @[top.scala 31:24]
  wire  mymem_io_rready; // @[top.scala 31:24]
  wire [63:0] mymem_io_wdata; // @[top.scala 31:24]
  wire [7:0] mymem_io_wstrb; // @[top.scala 31:24]
  wire  mymem_io_wvalid; // @[top.scala 31:24]
  wire  mymem_io_wready; // @[top.scala 31:24]
  wire  mymem_io_bvalid; // @[top.scala 31:24]
  wire  mymem_io_bready; // @[top.scala 31:24]
  wire  mymem_has_time_interrupt_0; // @[top.scala 31:24]
  core mycore ( // @[top.scala 30:24]
    .clock(mycore_clock),
    .reset(mycore_reset),
    .io_axi4_awaddr(mycore_io_axi4_awaddr),
    .io_axi4_awvalid(mycore_io_axi4_awvalid),
    .io_axi4_awready(mycore_io_axi4_awready),
    .io_axi4_araddr(mycore_io_axi4_araddr),
    .io_axi4_arvalid(mycore_io_axi4_arvalid),
    .io_axi4_arready(mycore_io_axi4_arready),
    .io_axi4_rdata(mycore_io_axi4_rdata),
    .io_axi4_rvalid(mycore_io_axi4_rvalid),
    .io_axi4_rready(mycore_io_axi4_rready),
    .io_axi4_wdata(mycore_io_axi4_wdata),
    .io_axi4_wstrb(mycore_io_axi4_wstrb),
    .io_axi4_wvalid(mycore_io_axi4_wvalid),
    .io_axi4_wready(mycore_io_axi4_wready),
    .io_axi4_bvalid(mycore_io_axi4_bvalid),
    .io_axi4_bready(mycore_io_axi4_bready),
    ._T_111(mycore__T_111),
    .abs_op1(mycore_abs_op1),
    .io_is_retire(mycore_io_is_retire),
    .io_isredir(mycore_io_isredir),
    .dp_wb_reg_pc(mycore_dp_wb_reg_pc),
    .io_exe_stall(mycore_io_exe_stall),
    ._T_17772(mycore__T_17772),
    .cs_valid_inst(mycore_cs_valid_inst),
    .dp_wb_reg_instr(mycore_dp_wb_reg_instr),
    ._T_110(mycore__T_110),
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
    ._T_41_31(mycore__T_41_31),
    .has_time_interrupt(mycore_has_time_interrupt),
    .abs_op2(mycore_abs_op2)
  );
  AXI4_Ram mymem ( // @[top.scala 31:24]
    .clock(mymem_clock),
    .reset(mymem_reset),
    .io_awaddr(mymem_io_awaddr),
    .io_awvalid(mymem_io_awvalid),
    .io_awready(mymem_io_awready),
    .io_araddr(mymem_io_araddr),
    .io_arvalid(mymem_io_arvalid),
    .io_arready(mymem_io_arready),
    .io_rdata(mymem_io_rdata),
    .io_rvalid(mymem_io_rvalid),
    .io_rready(mymem_io_rready),
    .io_wdata(mymem_io_wdata),
    .io_wstrb(mymem_io_wstrb),
    .io_wvalid(mymem_io_wvalid),
    .io_wready(mymem_io_wready),
    .io_bvalid(mymem_io_bvalid),
    .io_bready(mymem_io_bready),
    .has_time_interrupt_0(mymem_has_time_interrupt_0)
  );
  assign io_diff_r_0 = mycore__T_41_0; // @[top.scala 52:13]
  assign io_diff_r_1 = mycore__T_41_1; // @[top.scala 52:13]
  assign io_diff_r_2 = mycore__T_41_2; // @[top.scala 52:13]
  assign io_diff_r_3 = mycore__T_41_3; // @[top.scala 52:13]
  assign io_diff_r_4 = mycore__T_41_4; // @[top.scala 52:13]
  assign io_diff_r_5 = mycore__T_41_5; // @[top.scala 52:13]
  assign io_diff_r_6 = mycore__T_41_6; // @[top.scala 52:13]
  assign io_diff_r_7 = mycore__T_41_7; // @[top.scala 52:13]
  assign io_diff_r_8 = mycore__T_41_8; // @[top.scala 52:13]
  assign io_diff_r_9 = mycore__T_41_9; // @[top.scala 52:13]
  assign io_diff_r_10 = mycore__T_41_10; // @[top.scala 52:13]
  assign io_diff_r_11 = mycore__T_41_11; // @[top.scala 52:13]
  assign io_diff_r_12 = mycore__T_41_12; // @[top.scala 52:13]
  assign io_diff_r_13 = mycore__T_41_13; // @[top.scala 52:13]
  assign io_diff_r_14 = mycore__T_41_14; // @[top.scala 52:13]
  assign io_diff_r_15 = mycore__T_41_15; // @[top.scala 52:13]
  assign io_diff_r_16 = mycore__T_41_16; // @[top.scala 52:13]
  assign io_diff_r_17 = mycore__T_41_17; // @[top.scala 52:13]
  assign io_diff_r_18 = mycore__T_41_18; // @[top.scala 52:13]
  assign io_diff_r_19 = mycore__T_41_19; // @[top.scala 52:13]
  assign io_diff_r_20 = mycore__T_41_20; // @[top.scala 52:13]
  assign io_diff_r_21 = mycore__T_41_21; // @[top.scala 52:13]
  assign io_diff_r_22 = mycore__T_41_22; // @[top.scala 52:13]
  assign io_diff_r_23 = mycore__T_41_23; // @[top.scala 52:13]
  assign io_diff_r_24 = mycore__T_41_24; // @[top.scala 52:13]
  assign io_diff_r_25 = mycore__T_41_25; // @[top.scala 52:13]
  assign io_diff_r_26 = mycore__T_41_26; // @[top.scala 52:13]
  assign io_diff_r_27 = mycore__T_41_27; // @[top.scala 52:13]
  assign io_diff_r_28 = mycore__T_41_28; // @[top.scala 52:13]
  assign io_diff_r_29 = mycore__T_41_29; // @[top.scala 52:13]
  assign io_diff_r_30 = mycore__T_41_30; // @[top.scala 52:13]
  assign io_diff_r_31 = mycore__T_41_31; // @[top.scala 52:13]
  assign io_diff_pc_data = mycore_dp_wb_reg_pc; // @[top.scala 52:13]
  assign io_diff_mstatus = mycore__T_17772; // @[top.scala 52:13]
  assign io_diff_isredir = mycore_io_isredir; // @[top.scala 52:13]
  assign io_diff_is_retire = mycore_io_is_retire; // @[top.scala 52:13]
  assign io_diff_instr_in_wb = mycore_dp_wb_reg_instr; // @[top.scala 52:13]
  assign io_diff_is_valid = mycore_cs_valid_inst; // @[top.scala 52:13]
  assign io_diff_alu_exe_stall = mycore_io_exe_stall; // @[top.scala 52:13]
  assign io_diff_mul_result_hi = mycore__T_110; // @[top.scala 52:13]
  assign io_diff_mul_result_lo = mycore__T_111; // @[top.scala 52:13]
  assign io_diff_abs_op1 = mycore_abs_op1; // @[top.scala 52:13]
  assign io_diff_abs_op2 = mycore_abs_op2; // @[top.scala 52:13]
  assign mycore_clock = clock;
  assign mycore_reset = reset;
  assign mycore_io_axi4_awready = mymem_io_awready; // @[top.scala 33:20]
  assign mycore_io_axi4_arready = mymem_io_arready; // @[top.scala 33:20]
  assign mycore_io_axi4_rdata = mymem_io_rdata; // @[top.scala 33:20]
  assign mycore_io_axi4_rvalid = mymem_io_rvalid; // @[top.scala 33:20]
  assign mycore_io_axi4_wready = mymem_io_wready; // @[top.scala 33:20]
  assign mycore_io_axi4_bvalid = mymem_io_bvalid; // @[top.scala 33:20]
  assign mycore_has_time_interrupt = mymem_has_time_interrupt_0;
  assign mymem_clock = clock;
  assign mymem_reset = reset;
  assign mymem_io_awaddr = mycore_io_axi4_awaddr; // @[top.scala 33:20]
  assign mymem_io_awvalid = mycore_io_axi4_awvalid; // @[top.scala 33:20]
  assign mymem_io_araddr = mycore_io_axi4_araddr; // @[top.scala 33:20]
  assign mymem_io_arvalid = mycore_io_axi4_arvalid; // @[top.scala 33:20]
  assign mymem_io_rready = mycore_io_axi4_rready; // @[top.scala 33:20]
  assign mymem_io_wdata = mycore_io_axi4_wdata; // @[top.scala 33:20]
  assign mymem_io_wstrb = mycore_io_axi4_wstrb; // @[top.scala 33:20]
  assign mymem_io_wvalid = mycore_io_axi4_wvalid; // @[top.scala 33:20]
  assign mymem_io_bready = mycore_io_axi4_bready; // @[top.scala 33:20]
endmodule
