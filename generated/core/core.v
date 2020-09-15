module core(
  input   clock,
  input   reset,
  output  io_result
);
  wire  _T_1 = ~reset; // @[core.scala 34:11]
  assign io_result = 1'h1; // @[core.scala 32:15]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"core has been built!"); // @[core.scala 34:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
