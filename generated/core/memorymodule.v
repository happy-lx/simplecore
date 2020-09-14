module memorymodule(
  input         clock,
  input         reset,
  output        io_ports_0_req_ready,
  input         io_ports_0_req_valid,
  input  [31:0] io_ports_0_req_bits_addr,
  input  [7:0]  io_ports_0_req_bits_mask,
  input  [2:0]  io_ports_0_req_bits_op,
  input  [63:0] io_ports_0_req_bits_wdata,
  input         io_ports_0_req_bits_memen,
  input         io_ports_0_req_bits_wen,
  input         io_ports_0_resp_ready,
  output        io_ports_0_resp_valid,
  output [63:0] io_ports_0_resp_bits_rdata,
  output        io_ports_1_req_ready,
  input         io_ports_1_req_valid,
  input  [31:0] io_ports_1_req_bits_addr,
  input  [7:0]  io_ports_1_req_bits_mask,
  input  [2:0]  io_ports_1_req_bits_op,
  input  [63:0] io_ports_1_req_bits_wdata,
  input         io_ports_1_req_bits_memen,
  input         io_ports_1_req_bits_wen,
  input         io_ports_1_resp_ready,
  output        io_ports_1_resp_valid,
  output [63:0] io_ports_1_resp_bits_rdata
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [7:0] mem [0:0]; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_80_data; // @[memory_second.scala 60:18]
  wire  mem__T_80_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_82_data; // @[memory_second.scala 60:18]
  wire  mem__T_82_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_84_data; // @[memory_second.scala 60:18]
  wire  mem__T_84_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_86_data; // @[memory_second.scala 60:18]
  wire  mem__T_86_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_88_data; // @[memory_second.scala 60:18]
  wire  mem__T_88_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_90_data; // @[memory_second.scala 60:18]
  wire  mem__T_90_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_92_data; // @[memory_second.scala 60:18]
  wire  mem__T_92_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_94_data; // @[memory_second.scala 60:18]
  wire  mem__T_94_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_96_data; // @[memory_second.scala 60:18]
  wire  mem__T_96_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_98_data; // @[memory_second.scala 60:18]
  wire  mem__T_98_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_100_data; // @[memory_second.scala 60:18]
  wire  mem__T_100_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_102_data; // @[memory_second.scala 60:18]
  wire  mem__T_102_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_104_data; // @[memory_second.scala 60:18]
  wire  mem__T_104_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_106_data; // @[memory_second.scala 60:18]
  wire  mem__T_106_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_108_data; // @[memory_second.scala 60:18]
  wire  mem__T_108_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_110_data; // @[memory_second.scala 60:18]
  wire  mem__T_110_addr; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_81_data; // @[memory_second.scala 60:18]
  wire  mem__T_81_addr; // @[memory_second.scala 60:18]
  wire  mem__T_81_mask; // @[memory_second.scala 60:18]
  wire  mem__T_81_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_83_data; // @[memory_second.scala 60:18]
  wire  mem__T_83_addr; // @[memory_second.scala 60:18]
  wire  mem__T_83_mask; // @[memory_second.scala 60:18]
  wire  mem__T_83_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_85_data; // @[memory_second.scala 60:18]
  wire  mem__T_85_addr; // @[memory_second.scala 60:18]
  wire  mem__T_85_mask; // @[memory_second.scala 60:18]
  wire  mem__T_85_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_87_data; // @[memory_second.scala 60:18]
  wire  mem__T_87_addr; // @[memory_second.scala 60:18]
  wire  mem__T_87_mask; // @[memory_second.scala 60:18]
  wire  mem__T_87_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_89_data; // @[memory_second.scala 60:18]
  wire  mem__T_89_addr; // @[memory_second.scala 60:18]
  wire  mem__T_89_mask; // @[memory_second.scala 60:18]
  wire  mem__T_89_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_91_data; // @[memory_second.scala 60:18]
  wire  mem__T_91_addr; // @[memory_second.scala 60:18]
  wire  mem__T_91_mask; // @[memory_second.scala 60:18]
  wire  mem__T_91_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_93_data; // @[memory_second.scala 60:18]
  wire  mem__T_93_addr; // @[memory_second.scala 60:18]
  wire  mem__T_93_mask; // @[memory_second.scala 60:18]
  wire  mem__T_93_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_95_data; // @[memory_second.scala 60:18]
  wire  mem__T_95_addr; // @[memory_second.scala 60:18]
  wire  mem__T_95_mask; // @[memory_second.scala 60:18]
  wire  mem__T_95_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_97_data; // @[memory_second.scala 60:18]
  wire  mem__T_97_addr; // @[memory_second.scala 60:18]
  wire  mem__T_97_mask; // @[memory_second.scala 60:18]
  wire  mem__T_97_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_99_data; // @[memory_second.scala 60:18]
  wire  mem__T_99_addr; // @[memory_second.scala 60:18]
  wire  mem__T_99_mask; // @[memory_second.scala 60:18]
  wire  mem__T_99_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_101_data; // @[memory_second.scala 60:18]
  wire  mem__T_101_addr; // @[memory_second.scala 60:18]
  wire  mem__T_101_mask; // @[memory_second.scala 60:18]
  wire  mem__T_101_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_103_data; // @[memory_second.scala 60:18]
  wire  mem__T_103_addr; // @[memory_second.scala 60:18]
  wire  mem__T_103_mask; // @[memory_second.scala 60:18]
  wire  mem__T_103_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_105_data; // @[memory_second.scala 60:18]
  wire  mem__T_105_addr; // @[memory_second.scala 60:18]
  wire  mem__T_105_mask; // @[memory_second.scala 60:18]
  wire  mem__T_105_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_107_data; // @[memory_second.scala 60:18]
  wire  mem__T_107_addr; // @[memory_second.scala 60:18]
  wire  mem__T_107_mask; // @[memory_second.scala 60:18]
  wire  mem__T_107_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_109_data; // @[memory_second.scala 60:18]
  wire  mem__T_109_addr; // @[memory_second.scala 60:18]
  wire  mem__T_109_mask; // @[memory_second.scala 60:18]
  wire  mem__T_109_en; // @[memory_second.scala 60:18]
  wire [7:0] mem__T_111_data; // @[memory_second.scala 60:18]
  wire  mem__T_111_addr; // @[memory_second.scala 60:18]
  wire  mem__T_111_mask; // @[memory_second.scala 60:18]
  wire  mem__T_111_en; // @[memory_second.scala 60:18]
  wire  mask_temp_0_0 = io_ports_0_req_bits_mask[0]; // @[memory_second.scala 81:57]
  wire  mask_temp_0_1 = io_ports_0_req_bits_mask[1]; // @[memory_second.scala 81:57]
  wire  mask_temp_0_2 = io_ports_0_req_bits_mask[2]; // @[memory_second.scala 81:57]
  wire  mask_temp_0_3 = io_ports_0_req_bits_mask[3]; // @[memory_second.scala 81:57]
  wire  mask_temp_0_4 = io_ports_0_req_bits_mask[4]; // @[memory_second.scala 81:57]
  wire  mask_temp_0_5 = io_ports_0_req_bits_mask[5]; // @[memory_second.scala 81:57]
  wire  mask_temp_0_6 = io_ports_0_req_bits_mask[6]; // @[memory_second.scala 81:57]
  wire  mask_temp_0_7 = io_ports_0_req_bits_mask[7]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_0 = io_ports_1_req_bits_mask[0]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_1 = io_ports_1_req_bits_mask[1]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_2 = io_ports_1_req_bits_mask[2]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_3 = io_ports_1_req_bits_mask[3]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_4 = io_ports_1_req_bits_mask[4]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_5 = io_ports_1_req_bits_mask[5]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_6 = io_ports_1_req_bits_mask[6]; // @[memory_second.scala 81:57]
  wire  mask_temp_1_7 = io_ports_1_req_bits_mask[7]; // @[memory_second.scala 81:57]
  wire  _GEN_7 = io_ports_0_req_bits_wen & mask_temp_0_0; // @[memory_second.scala 99:21]
  wire  _GEN_17 = io_ports_0_req_bits_wen & mask_temp_0_1; // @[memory_second.scala 99:21]
  wire  _GEN_27 = io_ports_0_req_bits_wen & mask_temp_0_2; // @[memory_second.scala 99:21]
  wire  _GEN_37 = io_ports_0_req_bits_wen & mask_temp_0_3; // @[memory_second.scala 99:21]
  wire  _GEN_47 = io_ports_0_req_bits_wen & mask_temp_0_4; // @[memory_second.scala 99:21]
  wire  _GEN_57 = io_ports_0_req_bits_wen & mask_temp_0_5; // @[memory_second.scala 99:21]
  wire  _GEN_67 = io_ports_0_req_bits_wen & mask_temp_0_6; // @[memory_second.scala 99:21]
  wire  _GEN_77 = io_ports_0_req_bits_wen & mask_temp_0_7; // @[memory_second.scala 99:21]
  wire [7:0] rdata_temp_0_0 = mem__T_80_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_0_1 = mem__T_82_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_0_2 = mem__T_84_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_0_3 = mem__T_86_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_0_4 = mem__T_88_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_0_5 = mem__T_90_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_0_6 = mem__T_92_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_0_7 = mem__T_94_data; // @[memory_second.scala 91:13]
  wire  _GEN_138 = io_ports_1_req_bits_wen & mask_temp_1_0; // @[memory_second.scala 99:21]
  wire  _GEN_148 = io_ports_1_req_bits_wen & mask_temp_1_1; // @[memory_second.scala 99:21]
  wire  _GEN_158 = io_ports_1_req_bits_wen & mask_temp_1_2; // @[memory_second.scala 99:21]
  wire  _GEN_168 = io_ports_1_req_bits_wen & mask_temp_1_3; // @[memory_second.scala 99:21]
  wire  _GEN_178 = io_ports_1_req_bits_wen & mask_temp_1_4; // @[memory_second.scala 99:21]
  wire  _GEN_188 = io_ports_1_req_bits_wen & mask_temp_1_5; // @[memory_second.scala 99:21]
  wire  _GEN_198 = io_ports_1_req_bits_wen & mask_temp_1_6; // @[memory_second.scala 99:21]
  wire  _GEN_208 = io_ports_1_req_bits_wen & mask_temp_1_7; // @[memory_second.scala 99:21]
  wire [7:0] rdata_temp_1_0 = mem__T_96_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_1_1 = mem__T_98_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_1_2 = mem__T_100_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_1_3 = mem__T_102_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_1_4 = mem__T_104_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_1_5 = mem__T_106_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_1_6 = mem__T_108_data; // @[memory_second.scala 91:13]
  wire [7:0] rdata_temp_1_7 = mem__T_110_data; // @[memory_second.scala 91:13]
  wire [63:0] _T_118 = {rdata_temp_0_7,rdata_temp_0_6,rdata_temp_0_5,rdata_temp_0_4,rdata_temp_0_3,rdata_temp_0_2,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_119 = io_ports_0_req_bits_op == 3'h0; // @[memory_second.scala 118:42]
  wire [55:0] _T_122 = rdata_temp_0_0[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_123 = {_T_122,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_124 = io_ports_0_req_bits_op == 3'h1; // @[memory_second.scala 119:42]
  wire [63:0] _T_126 = {56'h0,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_127 = io_ports_0_req_bits_op == 3'h2; // @[memory_second.scala 120:42]
  wire [47:0] _T_130 = rdata_temp_0_1[7] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_132 = {_T_130,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_133 = io_ports_0_req_bits_op == 3'h3; // @[memory_second.scala 121:42]
  wire [63:0] _T_136 = {48'h0,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_137 = io_ports_0_req_bits_op == 3'h4; // @[memory_second.scala 122:42]
  wire [31:0] _T_140 = rdata_temp_0_3[7] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_144 = {_T_140,rdata_temp_0_3,rdata_temp_0_2,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_145 = io_ports_0_req_bits_op == 3'h5; // @[memory_second.scala 123:42]
  wire [63:0] _T_150 = {32'h0,rdata_temp_0_3,rdata_temp_0_2,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire [63:0] _T_151 = _T_145 ? _T_150 : _T_118; // @[Mux.scala 98:16]
  wire [63:0] _T_152 = _T_137 ? _T_144 : _T_151; // @[Mux.scala 98:16]
  wire [63:0] _T_153 = _T_133 ? _T_136 : _T_152; // @[Mux.scala 98:16]
  wire [63:0] _T_154 = _T_127 ? _T_132 : _T_153; // @[Mux.scala 98:16]
  wire [63:0] _T_155 = _T_124 ? _T_126 : _T_154; // @[Mux.scala 98:16]
  wire [63:0] _T_163 = {rdata_temp_1_7,rdata_temp_1_6,rdata_temp_1_5,rdata_temp_1_4,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_164 = io_ports_1_req_bits_op == 3'h0; // @[memory_second.scala 118:42]
  wire [55:0] _T_167 = rdata_temp_1_0[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_168 = {_T_167,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_169 = io_ports_1_req_bits_op == 3'h1; // @[memory_second.scala 119:42]
  wire [63:0] _T_171 = {56'h0,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_172 = io_ports_1_req_bits_op == 3'h2; // @[memory_second.scala 120:42]
  wire [47:0] _T_175 = rdata_temp_1_1[7] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_177 = {_T_175,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_178 = io_ports_1_req_bits_op == 3'h3; // @[memory_second.scala 121:42]
  wire [63:0] _T_181 = {48'h0,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_182 = io_ports_1_req_bits_op == 3'h4; // @[memory_second.scala 122:42]
  wire [31:0] _T_185 = rdata_temp_1_3[7] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_189 = {_T_185,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_190 = io_ports_1_req_bits_op == 3'h5; // @[memory_second.scala 123:42]
  wire [63:0] _T_195 = {32'h0,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire [63:0] _T_196 = _T_190 ? _T_195 : _T_163; // @[Mux.scala 98:16]
  wire [63:0] _T_197 = _T_182 ? _T_189 : _T_196; // @[Mux.scala 98:16]
  wire [63:0] _T_198 = _T_178 ? _T_181 : _T_197; // @[Mux.scala 98:16]
  wire [63:0] _T_199 = _T_172 ? _T_177 : _T_198; // @[Mux.scala 98:16]
  wire [63:0] _T_200 = _T_169 ? _T_171 : _T_199; // @[Mux.scala 98:16]
  assign mem__T_80_addr = 1'h0;
  assign mem__T_80_data = mem[mem__T_80_addr]; // @[memory_second.scala 60:18]
  assign mem__T_82_addr = 1'h0;
  assign mem__T_82_data = mem[mem__T_82_addr]; // @[memory_second.scala 60:18]
  assign mem__T_84_addr = 1'h0;
  assign mem__T_84_data = mem[mem__T_84_addr]; // @[memory_second.scala 60:18]
  assign mem__T_86_addr = 1'h0;
  assign mem__T_86_data = mem[mem__T_86_addr]; // @[memory_second.scala 60:18]
  assign mem__T_88_addr = 1'h0;
  assign mem__T_88_data = mem[mem__T_88_addr]; // @[memory_second.scala 60:18]
  assign mem__T_90_addr = 1'h0;
  assign mem__T_90_data = mem[mem__T_90_addr]; // @[memory_second.scala 60:18]
  assign mem__T_92_addr = 1'h0;
  assign mem__T_92_data = mem[mem__T_92_addr]; // @[memory_second.scala 60:18]
  assign mem__T_94_addr = 1'h0;
  assign mem__T_94_data = mem[mem__T_94_addr]; // @[memory_second.scala 60:18]
  assign mem__T_96_addr = 1'h0;
  assign mem__T_96_data = mem[mem__T_96_addr]; // @[memory_second.scala 60:18]
  assign mem__T_98_addr = 1'h0;
  assign mem__T_98_data = mem[mem__T_98_addr]; // @[memory_second.scala 60:18]
  assign mem__T_100_addr = 1'h0;
  assign mem__T_100_data = mem[mem__T_100_addr]; // @[memory_second.scala 60:18]
  assign mem__T_102_addr = 1'h0;
  assign mem__T_102_data = mem[mem__T_102_addr]; // @[memory_second.scala 60:18]
  assign mem__T_104_addr = 1'h0;
  assign mem__T_104_data = mem[mem__T_104_addr]; // @[memory_second.scala 60:18]
  assign mem__T_106_addr = 1'h0;
  assign mem__T_106_data = mem[mem__T_106_addr]; // @[memory_second.scala 60:18]
  assign mem__T_108_addr = 1'h0;
  assign mem__T_108_data = mem[mem__T_108_addr]; // @[memory_second.scala 60:18]
  assign mem__T_110_addr = 1'h0;
  assign mem__T_110_data = mem[mem__T_110_addr]; // @[memory_second.scala 60:18]
  assign mem__T_81_data = io_ports_0_req_bits_wdata[7:0];
  assign mem__T_81_addr = 1'h0;
  assign mem__T_81_mask = 1'h1;
  assign mem__T_81_en = io_ports_0_req_bits_memen & _GEN_7;
  assign mem__T_83_data = io_ports_0_req_bits_wdata[15:8];
  assign mem__T_83_addr = 1'h0;
  assign mem__T_83_mask = 1'h1;
  assign mem__T_83_en = io_ports_0_req_bits_memen & _GEN_17;
  assign mem__T_85_data = io_ports_0_req_bits_wdata[23:16];
  assign mem__T_85_addr = 1'h0;
  assign mem__T_85_mask = 1'h1;
  assign mem__T_85_en = io_ports_0_req_bits_memen & _GEN_27;
  assign mem__T_87_data = io_ports_0_req_bits_wdata[31:24];
  assign mem__T_87_addr = 1'h0;
  assign mem__T_87_mask = 1'h1;
  assign mem__T_87_en = io_ports_0_req_bits_memen & _GEN_37;
  assign mem__T_89_data = io_ports_0_req_bits_wdata[39:32];
  assign mem__T_89_addr = 1'h0;
  assign mem__T_89_mask = 1'h1;
  assign mem__T_89_en = io_ports_0_req_bits_memen & _GEN_47;
  assign mem__T_91_data = io_ports_0_req_bits_wdata[47:40];
  assign mem__T_91_addr = 1'h0;
  assign mem__T_91_mask = 1'h1;
  assign mem__T_91_en = io_ports_0_req_bits_memen & _GEN_57;
  assign mem__T_93_data = io_ports_0_req_bits_wdata[55:48];
  assign mem__T_93_addr = 1'h0;
  assign mem__T_93_mask = 1'h1;
  assign mem__T_93_en = io_ports_0_req_bits_memen & _GEN_67;
  assign mem__T_95_data = io_ports_0_req_bits_wdata[63:56];
  assign mem__T_95_addr = 1'h0;
  assign mem__T_95_mask = 1'h1;
  assign mem__T_95_en = io_ports_0_req_bits_memen & _GEN_77;
  assign mem__T_97_data = io_ports_1_req_bits_wdata[7:0];
  assign mem__T_97_addr = 1'h0;
  assign mem__T_97_mask = 1'h1;
  assign mem__T_97_en = io_ports_1_req_bits_memen & _GEN_138;
  assign mem__T_99_data = io_ports_1_req_bits_wdata[15:8];
  assign mem__T_99_addr = 1'h0;
  assign mem__T_99_mask = 1'h1;
  assign mem__T_99_en = io_ports_1_req_bits_memen & _GEN_148;
  assign mem__T_101_data = io_ports_1_req_bits_wdata[23:16];
  assign mem__T_101_addr = 1'h0;
  assign mem__T_101_mask = 1'h1;
  assign mem__T_101_en = io_ports_1_req_bits_memen & _GEN_158;
  assign mem__T_103_data = io_ports_1_req_bits_wdata[31:24];
  assign mem__T_103_addr = 1'h0;
  assign mem__T_103_mask = 1'h1;
  assign mem__T_103_en = io_ports_1_req_bits_memen & _GEN_168;
  assign mem__T_105_data = io_ports_1_req_bits_wdata[39:32];
  assign mem__T_105_addr = 1'h0;
  assign mem__T_105_mask = 1'h1;
  assign mem__T_105_en = io_ports_1_req_bits_memen & _GEN_178;
  assign mem__T_107_data = io_ports_1_req_bits_wdata[47:40];
  assign mem__T_107_addr = 1'h0;
  assign mem__T_107_mask = 1'h1;
  assign mem__T_107_en = io_ports_1_req_bits_memen & _GEN_188;
  assign mem__T_109_data = io_ports_1_req_bits_wdata[55:48];
  assign mem__T_109_addr = 1'h0;
  assign mem__T_109_mask = 1'h1;
  assign mem__T_109_en = io_ports_1_req_bits_memen & _GEN_198;
  assign mem__T_111_data = io_ports_1_req_bits_wdata[63:56];
  assign mem__T_111_addr = 1'h0;
  assign mem__T_111_mask = 1'h1;
  assign mem__T_111_en = io_ports_1_req_bits_memen & _GEN_208;
  assign io_ports_0_req_ready = 1'h1; // @[memory_second.scala 65:31]
  assign io_ports_0_resp_valid = io_ports_0_req_valid; // @[memory_second.scala 64:32]
  assign io_ports_0_resp_bits_rdata = _T_119 ? _T_123 : _T_155; // @[memory_second.scala 117:45]
  assign io_ports_1_req_ready = 1'h1; // @[memory_second.scala 65:31]
  assign io_ports_1_resp_valid = io_ports_1_req_valid; // @[memory_second.scala 64:32]
  assign io_ports_1_resp_bits_rdata = _T_164 ? _T_168 : _T_200; // @[memory_second.scala 117:45]
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
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    mem[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if(mem__T_81_en & mem__T_81_mask) begin
      mem[mem__T_81_addr] <= mem__T_81_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_83_en & mem__T_83_mask) begin
      mem[mem__T_83_addr] <= mem__T_83_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_85_en & mem__T_85_mask) begin
      mem[mem__T_85_addr] <= mem__T_85_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_87_en & mem__T_87_mask) begin
      mem[mem__T_87_addr] <= mem__T_87_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_89_en & mem__T_89_mask) begin
      mem[mem__T_89_addr] <= mem__T_89_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_91_en & mem__T_91_mask) begin
      mem[mem__T_91_addr] <= mem__T_91_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_93_en & mem__T_93_mask) begin
      mem[mem__T_93_addr] <= mem__T_93_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_95_en & mem__T_95_mask) begin
      mem[mem__T_95_addr] <= mem__T_95_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_97_en & mem__T_97_mask) begin
      mem[mem__T_97_addr] <= mem__T_97_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_99_en & mem__T_99_mask) begin
      mem[mem__T_99_addr] <= mem__T_99_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_101_en & mem__T_101_mask) begin
      mem[mem__T_101_addr] <= mem__T_101_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_103_en & mem__T_103_mask) begin
      mem[mem__T_103_addr] <= mem__T_103_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_105_en & mem__T_105_mask) begin
      mem[mem__T_105_addr] <= mem__T_105_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_107_en & mem__T_107_mask) begin
      mem[mem__T_107_addr] <= mem__T_107_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_109_en & mem__T_109_mask) begin
      mem[mem__T_109_addr] <= mem__T_109_data; // @[memory_second.scala 60:18]
    end
    if(mem__T_111_en & mem__T_111_mask) begin
      mem[mem__T_111_addr] <= mem__T_111_data; // @[memory_second.scala 60:18]
    end
  end
endmodule
