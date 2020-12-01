## 一生一芯项目

本仓库存放用于生成可以集成到soc的ysyx_lx的代码

### 修改

+ 11/15 为了给每一个module添加前缀，把core相关的使用到的BoringUtil去掉，因为他们之间会产生冲突导致报错
+ 11/16 添加buser，ruser信号，但不使用
+ 11/20 修改awaddr,araddr的位宽为32位
+ 11/24 修改awuser，aruser，bid的位宽
+ 11/26 修改核内的一个bug，当取余的时候操作数如果有负数的时候会发生
+ 12/01 修改bus_bridge的awvalid和arvalid置位的条件，并且让rready和bready始终为1,使得核不需要依赖外设的设计