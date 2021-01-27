### mstatus

为了保证完整实现了M/S/U模式，对mstatus中的某一些位进行支持

+ The MXR (Make eXecutable Readable) bit
  + 当MXR=0时，load操作只有当PTE的R位为1才成功
  + 当MXR=1时，load操作PTE的R或者X位为1都成功
+ The SUM (permit Supervisor User Memory access) bit
  + 当SUM=0时，如果当前的特权级为S，访问U位为1的用户页表会发生page fault
  + 当SUM=1时，特权级S访问U位为1的用户页表可以被接受
+ The TVM (Trap Virtual Memory) bit
  + 当TVM=1时，如果当前为S模式，读写satp或者执行sfence.vma的操作会引起非法指令异常
  + 当TVM=0时，以上行为可以被接受
+ The TSR (Trap SRET) bit
  + 当TSR=1时，S模式下的SRET指令执行会导致非法指令异常
  + 当TSR=0时，S模式下的SRET可以正常执行
+ The MPRV (Modify PRiVilege) bit
  + 当MPRV=0时，没有任何效果
  + 当MPRV=1时，load和store指令在进行地址转换和访问过程中的行为与MPP中的特权级保持一致
  + 如果MPRV=1，MPP中为S，那么就像S模式一样去进行PMP protection