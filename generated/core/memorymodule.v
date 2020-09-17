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
  reg [7:0] mem [0:16777215]; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_96_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_96_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_98_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_98_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_100_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_100_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_102_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_102_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_104_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_104_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_106_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_106_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_108_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_108_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_110_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_110_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_112_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_112_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_114_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_114_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_116_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_116_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_118_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_118_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_120_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_120_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_122_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_122_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_124_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_124_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_126_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_126_addr; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_97_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_97_addr; // @[memory_second.scala 63:18]
  wire  mem__T_97_mask; // @[memory_second.scala 63:18]
  wire  mem__T_97_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_99_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_99_addr; // @[memory_second.scala 63:18]
  wire  mem__T_99_mask; // @[memory_second.scala 63:18]
  wire  mem__T_99_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_101_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_101_addr; // @[memory_second.scala 63:18]
  wire  mem__T_101_mask; // @[memory_second.scala 63:18]
  wire  mem__T_101_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_103_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_103_addr; // @[memory_second.scala 63:18]
  wire  mem__T_103_mask; // @[memory_second.scala 63:18]
  wire  mem__T_103_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_105_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_105_addr; // @[memory_second.scala 63:18]
  wire  mem__T_105_mask; // @[memory_second.scala 63:18]
  wire  mem__T_105_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_107_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_107_addr; // @[memory_second.scala 63:18]
  wire  mem__T_107_mask; // @[memory_second.scala 63:18]
  wire  mem__T_107_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_109_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_109_addr; // @[memory_second.scala 63:18]
  wire  mem__T_109_mask; // @[memory_second.scala 63:18]
  wire  mem__T_109_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_111_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_111_addr; // @[memory_second.scala 63:18]
  wire  mem__T_111_mask; // @[memory_second.scala 63:18]
  wire  mem__T_111_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_113_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_113_addr; // @[memory_second.scala 63:18]
  wire  mem__T_113_mask; // @[memory_second.scala 63:18]
  wire  mem__T_113_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_115_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_115_addr; // @[memory_second.scala 63:18]
  wire  mem__T_115_mask; // @[memory_second.scala 63:18]
  wire  mem__T_115_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_117_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_117_addr; // @[memory_second.scala 63:18]
  wire  mem__T_117_mask; // @[memory_second.scala 63:18]
  wire  mem__T_117_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_119_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_119_addr; // @[memory_second.scala 63:18]
  wire  mem__T_119_mask; // @[memory_second.scala 63:18]
  wire  mem__T_119_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_121_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_121_addr; // @[memory_second.scala 63:18]
  wire  mem__T_121_mask; // @[memory_second.scala 63:18]
  wire  mem__T_121_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_123_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_123_addr; // @[memory_second.scala 63:18]
  wire  mem__T_123_mask; // @[memory_second.scala 63:18]
  wire  mem__T_123_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_125_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_125_addr; // @[memory_second.scala 63:18]
  wire  mem__T_125_mask; // @[memory_second.scala 63:18]
  wire  mem__T_125_en; // @[memory_second.scala 63:18]
  wire [7:0] mem__T_127_data; // @[memory_second.scala 63:18]
  wire [23:0] mem__T_127_addr; // @[memory_second.scala 63:18]
  wire  mem__T_127_mask; // @[memory_second.scala 63:18]
  wire  mem__T_127_en; // @[memory_second.scala 63:18]
  wire  mask_temp_0_0 = io_ports_0_req_bits_mask[0]; // @[memory_second.scala 89:57]
  wire [24:0] _T_4 = {{1'd0}, io_ports_0_req_bits_addr[23:0]}; // @[memory_second.scala 90:64]
  wire  mask_temp_0_1 = io_ports_0_req_bits_mask[1]; // @[memory_second.scala 89:57]
  wire  mask_temp_0_2 = io_ports_0_req_bits_mask[2]; // @[memory_second.scala 89:57]
  wire  mask_temp_0_3 = io_ports_0_req_bits_mask[3]; // @[memory_second.scala 89:57]
  wire  mask_temp_0_4 = io_ports_0_req_bits_mask[4]; // @[memory_second.scala 89:57]
  wire  mask_temp_0_5 = io_ports_0_req_bits_mask[5]; // @[memory_second.scala 89:57]
  wire  mask_temp_0_6 = io_ports_0_req_bits_mask[6]; // @[memory_second.scala 89:57]
  wire  mask_temp_0_7 = io_ports_0_req_bits_mask[7]; // @[memory_second.scala 89:57]
  wire  mask_temp_1_0 = io_ports_1_req_bits_mask[0]; // @[memory_second.scala 89:57]
  wire [24:0] _T_52 = {{1'd0}, io_ports_1_req_bits_addr[23:0]}; // @[memory_second.scala 90:64]
  wire  mask_temp_1_1 = io_ports_1_req_bits_mask[1]; // @[memory_second.scala 89:57]
  wire  mask_temp_1_2 = io_ports_1_req_bits_mask[2]; // @[memory_second.scala 89:57]
  wire  mask_temp_1_3 = io_ports_1_req_bits_mask[3]; // @[memory_second.scala 89:57]
  wire  mask_temp_1_4 = io_ports_1_req_bits_mask[4]; // @[memory_second.scala 89:57]
  wire  mask_temp_1_5 = io_ports_1_req_bits_mask[5]; // @[memory_second.scala 89:57]
  wire  mask_temp_1_6 = io_ports_1_req_bits_mask[6]; // @[memory_second.scala 89:57]
  wire  mask_temp_1_7 = io_ports_1_req_bits_mask[7]; // @[memory_second.scala 89:57]
  wire  _GEN_7 = io_ports_0_req_bits_wen & mask_temp_0_0; // @[memory_second.scala 107:21]
  wire  _GEN_17 = io_ports_0_req_bits_wen & mask_temp_0_1; // @[memory_second.scala 107:21]
  wire  _GEN_27 = io_ports_0_req_bits_wen & mask_temp_0_2; // @[memory_second.scala 107:21]
  wire  _GEN_37 = io_ports_0_req_bits_wen & mask_temp_0_3; // @[memory_second.scala 107:21]
  wire  _GEN_47 = io_ports_0_req_bits_wen & mask_temp_0_4; // @[memory_second.scala 107:21]
  wire  _GEN_57 = io_ports_0_req_bits_wen & mask_temp_0_5; // @[memory_second.scala 107:21]
  wire  _GEN_67 = io_ports_0_req_bits_wen & mask_temp_0_6; // @[memory_second.scala 107:21]
  wire  _GEN_77 = io_ports_0_req_bits_wen & mask_temp_0_7; // @[memory_second.scala 107:21]
  wire [7:0] rdata_temp_0_0 = mem__T_96_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_0_1 = mem__T_98_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_0_2 = mem__T_100_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_0_3 = mem__T_102_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_0_4 = mem__T_104_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_0_5 = mem__T_106_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_0_6 = mem__T_108_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_0_7 = mem__T_110_data; // @[memory_second.scala 99:13]
  wire  _GEN_145 = io_ports_1_req_bits_wen & mask_temp_1_0; // @[memory_second.scala 107:21]
  wire  _GEN_155 = io_ports_1_req_bits_wen & mask_temp_1_1; // @[memory_second.scala 107:21]
  wire  _GEN_165 = io_ports_1_req_bits_wen & mask_temp_1_2; // @[memory_second.scala 107:21]
  wire  _GEN_175 = io_ports_1_req_bits_wen & mask_temp_1_3; // @[memory_second.scala 107:21]
  wire  _GEN_185 = io_ports_1_req_bits_wen & mask_temp_1_4; // @[memory_second.scala 107:21]
  wire  _GEN_195 = io_ports_1_req_bits_wen & mask_temp_1_5; // @[memory_second.scala 107:21]
  wire  _GEN_205 = io_ports_1_req_bits_wen & mask_temp_1_6; // @[memory_second.scala 107:21]
  wire  _GEN_215 = io_ports_1_req_bits_wen & mask_temp_1_7; // @[memory_second.scala 107:21]
  wire [7:0] rdata_temp_1_0 = mem__T_112_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_1_1 = mem__T_114_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_1_2 = mem__T_116_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_1_3 = mem__T_118_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_1_4 = mem__T_120_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_1_5 = mem__T_122_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_1_6 = mem__T_124_data; // @[memory_second.scala 99:13]
  wire [7:0] rdata_temp_1_7 = mem__T_126_data; // @[memory_second.scala 99:13]
  wire [63:0] _T_134 = {rdata_temp_0_7,rdata_temp_0_6,rdata_temp_0_5,rdata_temp_0_4,rdata_temp_0_3,rdata_temp_0_2,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_135 = io_ports_0_req_bits_op == 3'h0; // @[memory_second.scala 126:42]
  wire [55:0] _T_138 = rdata_temp_0_0[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_139 = {_T_138,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_140 = io_ports_0_req_bits_op == 3'h1; // @[memory_second.scala 127:42]
  wire [63:0] _T_142 = {56'h0,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_143 = io_ports_0_req_bits_op == 3'h2; // @[memory_second.scala 128:42]
  wire [47:0] _T_146 = rdata_temp_0_1[7] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_148 = {_T_146,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_149 = io_ports_0_req_bits_op == 3'h3; // @[memory_second.scala 129:42]
  wire [63:0] _T_152 = {48'h0,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_153 = io_ports_0_req_bits_op == 3'h4; // @[memory_second.scala 130:42]
  wire [31:0] _T_156 = rdata_temp_0_3[7] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_160 = {_T_156,rdata_temp_0_3,rdata_temp_0_2,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire  _T_161 = io_ports_0_req_bits_op == 3'h5; // @[memory_second.scala 131:42]
  wire [63:0] _T_166 = {32'h0,rdata_temp_0_3,rdata_temp_0_2,rdata_temp_0_1,rdata_temp_0_0}; // @[Cat.scala 29:58]
  wire [63:0] _T_167 = _T_161 ? _T_166 : _T_134; // @[Mux.scala 98:16]
  wire [63:0] _T_168 = _T_153 ? _T_160 : _T_167; // @[Mux.scala 98:16]
  wire [63:0] _T_169 = _T_149 ? _T_152 : _T_168; // @[Mux.scala 98:16]
  wire [63:0] _T_170 = _T_143 ? _T_148 : _T_169; // @[Mux.scala 98:16]
  wire [63:0] _T_171 = _T_140 ? _T_142 : _T_170; // @[Mux.scala 98:16]
  wire [63:0] _T_179 = {rdata_temp_1_7,rdata_temp_1_6,rdata_temp_1_5,rdata_temp_1_4,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_180 = io_ports_1_req_bits_op == 3'h0; // @[memory_second.scala 126:42]
  wire [55:0] _T_183 = rdata_temp_1_0[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_184 = {_T_183,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_185 = io_ports_1_req_bits_op == 3'h1; // @[memory_second.scala 127:42]
  wire [63:0] _T_187 = {56'h0,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_188 = io_ports_1_req_bits_op == 3'h2; // @[memory_second.scala 128:42]
  wire [47:0] _T_191 = rdata_temp_1_1[7] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_193 = {_T_191,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_194 = io_ports_1_req_bits_op == 3'h3; // @[memory_second.scala 129:42]
  wire [63:0] _T_197 = {48'h0,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_198 = io_ports_1_req_bits_op == 3'h4; // @[memory_second.scala 130:42]
  wire [31:0] _T_201 = rdata_temp_1_3[7] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_205 = {_T_201,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire  _T_206 = io_ports_1_req_bits_op == 3'h5; // @[memory_second.scala 131:42]
  wire [63:0] _T_211 = {32'h0,rdata_temp_1_3,rdata_temp_1_2,rdata_temp_1_1,rdata_temp_1_0}; // @[Cat.scala 29:58]
  wire [63:0] _T_212 = _T_206 ? _T_211 : _T_179; // @[Mux.scala 98:16]
  wire [63:0] _T_213 = _T_198 ? _T_205 : _T_212; // @[Mux.scala 98:16]
  wire [63:0] _T_214 = _T_194 ? _T_197 : _T_213; // @[Mux.scala 98:16]
  wire [63:0] _T_215 = _T_188 ? _T_193 : _T_214; // @[Mux.scala 98:16]
  wire [63:0] _T_216 = _T_185 ? _T_187 : _T_215; // @[Mux.scala 98:16]
  assign mem__T_96_addr = _T_4[23:0];
  assign mem__T_96_data = mem[mem__T_96_addr]; // @[memory_second.scala 63:18]
  assign mem__T_98_addr = io_ports_0_req_bits_addr[23:0] + 24'h1;
  assign mem__T_98_data = mem[mem__T_98_addr]; // @[memory_second.scala 63:18]
  assign mem__T_100_addr = io_ports_0_req_bits_addr[23:0] + 24'h2;
  assign mem__T_100_data = mem[mem__T_100_addr]; // @[memory_second.scala 63:18]
  assign mem__T_102_addr = io_ports_0_req_bits_addr[23:0] + 24'h3;
  assign mem__T_102_data = mem[mem__T_102_addr]; // @[memory_second.scala 63:18]
  assign mem__T_104_addr = io_ports_0_req_bits_addr[23:0] + 24'h4;
  assign mem__T_104_data = mem[mem__T_104_addr]; // @[memory_second.scala 63:18]
  assign mem__T_106_addr = io_ports_0_req_bits_addr[23:0] + 24'h5;
  assign mem__T_106_data = mem[mem__T_106_addr]; // @[memory_second.scala 63:18]
  assign mem__T_108_addr = io_ports_0_req_bits_addr[23:0] + 24'h6;
  assign mem__T_108_data = mem[mem__T_108_addr]; // @[memory_second.scala 63:18]
  assign mem__T_110_addr = io_ports_0_req_bits_addr[23:0] + 24'h7;
  assign mem__T_110_data = mem[mem__T_110_addr]; // @[memory_second.scala 63:18]
  assign mem__T_112_addr = _T_52[23:0];
  assign mem__T_112_data = mem[mem__T_112_addr]; // @[memory_second.scala 63:18]
  assign mem__T_114_addr = io_ports_1_req_bits_addr[23:0] + 24'h1;
  assign mem__T_114_data = mem[mem__T_114_addr]; // @[memory_second.scala 63:18]
  assign mem__T_116_addr = io_ports_1_req_bits_addr[23:0] + 24'h2;
  assign mem__T_116_data = mem[mem__T_116_addr]; // @[memory_second.scala 63:18]
  assign mem__T_118_addr = io_ports_1_req_bits_addr[23:0] + 24'h3;
  assign mem__T_118_data = mem[mem__T_118_addr]; // @[memory_second.scala 63:18]
  assign mem__T_120_addr = io_ports_1_req_bits_addr[23:0] + 24'h4;
  assign mem__T_120_data = mem[mem__T_120_addr]; // @[memory_second.scala 63:18]
  assign mem__T_122_addr = io_ports_1_req_bits_addr[23:0] + 24'h5;
  assign mem__T_122_data = mem[mem__T_122_addr]; // @[memory_second.scala 63:18]
  assign mem__T_124_addr = io_ports_1_req_bits_addr[23:0] + 24'h6;
  assign mem__T_124_data = mem[mem__T_124_addr]; // @[memory_second.scala 63:18]
  assign mem__T_126_addr = io_ports_1_req_bits_addr[23:0] + 24'h7;
  assign mem__T_126_data = mem[mem__T_126_addr]; // @[memory_second.scala 63:18]
  assign mem__T_97_data = io_ports_0_req_bits_wdata[7:0];
  assign mem__T_97_addr = _T_4[23:0];
  assign mem__T_97_mask = 1'h1;
  assign mem__T_97_en = io_ports_0_req_bits_memen & _GEN_7;
  assign mem__T_99_data = io_ports_0_req_bits_wdata[15:8];
  assign mem__T_99_addr = io_ports_0_req_bits_addr[23:0] + 24'h1;
  assign mem__T_99_mask = 1'h1;
  assign mem__T_99_en = io_ports_0_req_bits_memen & _GEN_17;
  assign mem__T_101_data = io_ports_0_req_bits_wdata[23:16];
  assign mem__T_101_addr = io_ports_0_req_bits_addr[23:0] + 24'h2;
  assign mem__T_101_mask = 1'h1;
  assign mem__T_101_en = io_ports_0_req_bits_memen & _GEN_27;
  assign mem__T_103_data = io_ports_0_req_bits_wdata[31:24];
  assign mem__T_103_addr = io_ports_0_req_bits_addr[23:0] + 24'h3;
  assign mem__T_103_mask = 1'h1;
  assign mem__T_103_en = io_ports_0_req_bits_memen & _GEN_37;
  assign mem__T_105_data = io_ports_0_req_bits_wdata[39:32];
  assign mem__T_105_addr = io_ports_0_req_bits_addr[23:0] + 24'h4;
  assign mem__T_105_mask = 1'h1;
  assign mem__T_105_en = io_ports_0_req_bits_memen & _GEN_47;
  assign mem__T_107_data = io_ports_0_req_bits_wdata[47:40];
  assign mem__T_107_addr = io_ports_0_req_bits_addr[23:0] + 24'h5;
  assign mem__T_107_mask = 1'h1;
  assign mem__T_107_en = io_ports_0_req_bits_memen & _GEN_57;
  assign mem__T_109_data = io_ports_0_req_bits_wdata[55:48];
  assign mem__T_109_addr = io_ports_0_req_bits_addr[23:0] + 24'h6;
  assign mem__T_109_mask = 1'h1;
  assign mem__T_109_en = io_ports_0_req_bits_memen & _GEN_67;
  assign mem__T_111_data = io_ports_0_req_bits_wdata[63:56];
  assign mem__T_111_addr = io_ports_0_req_bits_addr[23:0] + 24'h7;
  assign mem__T_111_mask = 1'h1;
  assign mem__T_111_en = io_ports_0_req_bits_memen & _GEN_77;
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
  assign io_ports_0_req_ready = 1'h1; // @[memory_second.scala 73:31]
  assign io_ports_0_resp_valid = io_ports_0_req_valid; // @[memory_second.scala 72:32]
  assign io_ports_0_resp_bits_rdata = _T_135 ? _T_139 : _T_171; // @[memory_second.scala 125:45]
  assign io_ports_1_req_ready = 1'h1; // @[memory_second.scala 73:31]
  assign io_ports_1_resp_valid = io_ports_1_req_valid; // @[memory_second.scala 72:32]
  assign io_ports_1_resp_bits_rdata = _T_180 ? _T_184 : _T_216; // @[memory_second.scala 125:45]
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
      mem[mem__T_97_addr] <= mem__T_97_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_99_en & mem__T_99_mask) begin
      mem[mem__T_99_addr] <= mem__T_99_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_101_en & mem__T_101_mask) begin
      mem[mem__T_101_addr] <= mem__T_101_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_103_en & mem__T_103_mask) begin
      mem[mem__T_103_addr] <= mem__T_103_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_105_en & mem__T_105_mask) begin
      mem[mem__T_105_addr] <= mem__T_105_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_107_en & mem__T_107_mask) begin
      mem[mem__T_107_addr] <= mem__T_107_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_109_en & mem__T_109_mask) begin
      mem[mem__T_109_addr] <= mem__T_109_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_111_en & mem__T_111_mask) begin
      mem[mem__T_111_addr] <= mem__T_111_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_113_en & mem__T_113_mask) begin
      mem[mem__T_113_addr] <= mem__T_113_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_115_en & mem__T_115_mask) begin
      mem[mem__T_115_addr] <= mem__T_115_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_117_en & mem__T_117_mask) begin
      mem[mem__T_117_addr] <= mem__T_117_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_119_en & mem__T_119_mask) begin
      mem[mem__T_119_addr] <= mem__T_119_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_121_en & mem__T_121_mask) begin
      mem[mem__T_121_addr] <= mem__T_121_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_123_en & mem__T_123_mask) begin
      mem[mem__T_123_addr] <= mem__T_123_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_125_en & mem__T_125_mask) begin
      mem[mem__T_125_addr] <= mem__T_125_data; // @[memory_second.scala 63:18]
    end
    if(mem__T_127_en & mem__T_127_mask) begin
      mem[mem__T_127_addr] <= mem__T_127_data; // @[memory_second.scala 63:18]
    end
  end
endmodule
