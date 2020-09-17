## 一生一芯项目

本仓库用于记录一生一芯项目的工作进度和代码

### 目标

支持RV64IMZicsr指令集，实现M态，实现五级流水线，运行RT-Thread.:smile:

### 当前进度

+ 写完单周期的代码
+ 完成语法测试
+ 利用`loadMemoryFromFile`和`verilator`测试了lui,addi等指令
+ 没有添加csr模块

### 问题列表

+ [x] 代码主要借鉴sodor，其代码的访存模块有bug，数据通路和控制通路一起连接到内存，导致有覆盖的问题，编译出来的verilog代码跟自己想法不一样
+ [ ] 总线有点不太理解
+ [ ] csr模块对时钟中断的支持不太理解，看手册上是用两个寄存器就行，代码里面用了perfcnt不太清楚是什么，没有找到相关的资料

### 接下来的工作

- [ ] 完善代码
- [ ] 学习difftest框架
- [ ] 编写测试框架
- [ ] 完成对单周期的测试
- [ ] 同步将其修改为五级流水线

