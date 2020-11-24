## 一生一芯项目

本仓库存放用于生成可以集成到soc的ysyx_lx的代码

### 修改

+ 11/15 为了给每一个module添加前缀，把core相关的使用到的BoringUtil去掉，因为他们之间会产生冲突导致报错
+ 11/16 添加buser，ruser信号，但不使用
+ 11/20 修改awaddr,araddr的位宽为32位
+ 11/24 修改awuser，aruser，bid的位宽