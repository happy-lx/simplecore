## 一生一芯项目

本仓库用于记录一生一芯项目的工作进度和代码

### 目标

支持`RV64IMZicsr`指令集，实现M态，实现五级流水线，运行RT-Thread.:smile:

### 当前进度

+ 写完单周期的代码
+ 写完五级流水线代码
+ 完成csr模块，没有实现时钟中断
+ 利用`loadMemoryFromFile`和`verilator`和`nemu`对单周期代码涉及到的`RV64IMZicsr`指令集中的所有指令进行测试，测试通过

### 问题列表

+ [x] 代码主要借鉴`sodor`，其代码的访存模块有bug，数据通路和控制通路一起连接到内存，导致有覆盖的问题，编译出来的verilog代码跟自己想法不一样
+ [ ] 总线有点不太理解
+ [ ] csr模块对时钟中断的支持不太理解，手册上提到用`mtime`和`mtimecmp`两个`memory-mapped register`，但是在寄存器编号上没有找到这两个寄存器，不是很清楚这两个寄存器的具体使用方式

### 接下来的工作

- [x] 完善代码的csr模块
- [x] 编写单周期测试框架
- [x] 完成对单周期的测试
- [x] 同步将其修改为五级流水线
- [ ] 测试五级流水线代码
- [ ] 将测试框架重构以支持测试五级流水线
- [ ] 添加对于时钟中断的支持
- [ ] 深入读一下特权文档手册

