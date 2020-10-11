### From 10/11

+ [x] 描述：`ecall`指令发生跳转时出现错误

  + 级别：严重

  + 原因：在流水线的`MEM`级时检测异常处理进行跳转，这时会置位`pipeline_kill`信号，由于这个信号的优先级高于`pipeline_stall`所以在`IF`阶段还没有取到指令时以及跳转了。
  + 解决办法：调整`pipeline_stall`的优先级大于`pipeline_kill`的优先级