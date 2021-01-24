## 一生一芯项目

*支持`RV64IMAZicsr`指令集，实现M/S/U模式，实现TLB和Cache，实现两位饱和计数器的分支预测*

```shell
git clone https://github.com/happy-lx/simplecore.git
make file=final
cd tool/elf && make install depth=16384 file=file_you_want_to_test
cd ../../src/test/scala/gcd/utest/ && bash make.sh
cd obj_dir && ./Vtop
```

开发进程见`log.md`

设计文档见`doc/`