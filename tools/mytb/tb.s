addi t0, x0, 100; # t0 = tx0100mm
addi ra, x0, 500; # t0 1 tx0500mm
addi sp, x0, 501; # t0 1 tx0500mm
addi gp, x0, 502; # t0 1 tx0500mm
addi tp, x0, 503; # t0 1 tx0500mm
addi t0, x0, 504; # t0 1 tx0500mm
addi t1, x0, 505; # t0 1 tx0500mm
addi t2, x0, 506; # t0 1 tx0500mm
addi t3, x0, 507; # t0 1 tx0500mm
addi t4, x0, 508; # t0 1 tx0500mm
addi t5, x0, 509; # t0 1 tx0500mm
addi t6, x0, 521; # t0 1 tx0500mm
addi s0, x0, 522; # t0 1 tx0500mm
addi s1, x0, 523; # t0 1 tx0500mm
addi s2, x0, 524; # t0 1 tx0500mm
addi s3, x0, 525; # t0 1 tx0500mm
addi s4, x0, 521; # t0 1 tx0500mm
addi s5, x0, 50; # t0 1 tx0500mm
addi s6, x0, 1210; # t0 1 tx0500mm
addi s7, x0, 1310; # t0 1 tx0500mm
addi s8, x0, 12; # t0 1 tx0500mm
addi s9, x0, -500; # t0 1 tx0500mm
addi s10, x0, -890; # t0 1 tx0500mm
addi s11, x0, -1300; # t0 1 tx0500mm
addi a0, x0, 135; # t0 1 tx0500mm
addi a1, x0, 520; # t0 1 tx0500mm
addi a2, x0, 562; # t0 1 tx0500mm
addi a3, x0, 131; # t0 1 tx0500mm
addi a4, x0, 512; # t0 1 tx0500mm
addi a5, x0, 555; # t0 1 tx0500mm
addi a6, x0, 559; # t0 1 tx0500mm
addi a7, x0, 500; # t0 1 tx0500mm
auipc s1,0x200
fence.i


sw t1, 0(s1) # 
sw t2, 4(s1) # 
sw t3, 8(s1) # 
sw t4, 12(s1) # 
sw t5, 16(s1) # 
sw t6, 20(s1) # 
sw s4, 24(s1) # 
sw s2, 28(s1) # 
lw t1, 0(s1) # 
lw t2, 4(s1) # 
lw t3, 8(s1) # 
lwu t3, 8(s1) # 
lw t4, 12(s1) #
add t3 , t3 , t4
lwu t4, 8(s1) # 
add t3 , t3 , t4
lw t5, 16(s1) # 
lwu t5, 8(s1) #
lw t6, 20(s1) # 
lwu t6, 8(s1) #
lw s4, 24(s1) # 
lwu s4, 8(s1) #
lw s2, 28(s1) # 

sd t1, 0(s1) # 
# sd t2, 4(s1) # 
sd t3, 8(s1) # 
# sd t4, 12(s1) # 
sd t5, 16(s1) # 
# sd t6, 20(s1) # 
sd s4, 24(s1) # 
# sd s2, 28(s1) # 
ld t1, 0(s1) # 
# ld t2, 4(s1) # 
ld t3, 8(s1) # 
# ld t4, 12(s1) # 
ld t5, 16(s1) # 
# ld t6, 20(s1) # 
ld s4, 24(s1) # 
# ld s2, 28(s1) # 

sh t1, 0(s1) # 
sh t2, 4(s1) # 
sh t3, 8(s1) # 
sh t4, 12(s1) # 
sh t5, 16(s1) # 
sh t6, 20(s1) # 
sh s4, 24(s1) # 
sh s2, 28(s1) # 
lh t1, 0(s1) # 
lh t2, 4(s1) # 
lhu t2, 4(s1) # 
lh t3, 8(s1) # 
lhu t3, 8(s1) # 
lh t4, 12(s1) # 
lhu t4, 12(s1) # 
lh t5, 16(s1) # 
lh t6, 20(s1) # 
lh s4, 24(s1) # 
lh s2, 28(s1) # 

xor t1,t2,t3
sb t1, 0(s1) # 
sb t2, 4(s1) # 
sb t3, 8(s1) # 
sb t4, 12(s1) # 
sb t5, 16(s1) # 
sb t6, 20(s1) # 
sb s4, 24(s1) # 
sb s2, 28(s1) # 
lb t1, 0(s1) # 
lb t2, 4(s1) # 
lb t3, 8(s1) # 
lbu t3, 8(s1) # 
lb t4, 12(s1) # 
lbu t4, 8(s1) # 
lb t5, 16(s1) #
lbu t5, 8(s1) #  
lb t6, 20(s1) #
lbu t6, 8(s1) #  
lb s4, 24(s1) # 
lb s2, 28(s1) # 


lui t0 , 0x500
lui t1 , 0x820
sub t2 , t0,t1
subw t2,t0,t1
xor t2,t0,t1
add t2,t0,t1
addw t2,t0,t1
and t2,t0,t1
or t2,t0,t1
mul t2,t0,t1
mulh t2,t0,t1
mulhsu t2,t0,t1
mulhu t2,t0,t1
mulw t2,t0,t1
rem t2,t0,t1
remu t2,t0,t1
remuw t2,t0,t1
remw t2,t0,t1
div t2,t0,t1
divu t2,t0,t1
divu t2,t0,t1
divuw t2,t0,t1
divw t2,t0,t1

bne t0, t1, next1 # if t0 != t1 then target
slli t0 ,t0 ,5
slli t1 , t1 ,5
sraiw  t0 , t0 ,5
sraiw t1 , t1 ,5
srai  t0 , t0 ,5
srai t1 , t1 ,5
sraw t1 , t1 , t2
sra t1 , t1 , t2
srl t1 , t1 , t2
srl t1 , t1 , t2
sll t1 , t1 , t2
sllw t1 , t1 , t2
srli  t0 , t0 ,5
srli t1 , t1 ,5

next1:
bge t1, t0, next2 # if t1 >=0t1 then target
slli t0 ,t0 ,5
slli t1 , t1 ,5
sraiw  t0 , t0 ,5
sraiw t1 , t1 ,5
srai  t0 , t0 ,5
srai t1 , t1 ,5
sraw t1 , t1 , t2
sra t1 , t1 , t2
srl t1 , t1 , t2
srl t1 , t1 , t2
sll t1 , t1 , t2
sllw t1 , t1 , t2
srli  t0 , t0 ,5
srli t1 , t1 ,5

next2:

csrw	mtvec,t0
csrw mepc , s2
csrw mcause , s3

csrr t1 , mtvec
sub t2, t1 ,t2
csrr t2 , mepc
csrr t3 , mcause

jal func  # jump to func and save position to ra
this:
j this

func:
    li t6,0x1245
    ret






