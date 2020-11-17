package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._
import constants.Cause._

class MIP extends Bundle
{
    //可以处理的中断
    val zero0 = UInt(4.W)
    val mei = Bool()
    val zero1 = Bool()
    val sei = Bool()
    val zero2 = Bool()
    val mti = Bool()
    val zero3 = Bool()
    val sti = Bool()
    val zero4 = Bool()
    val msi = Bool()
    val zero5 = Bool()
    val ssi = Bool()
    val zero6 = Bool()
}

class Mstatus extends Bundle
{
    val sd = Bool()
    val zero1 = UInt(40.W)
    val tsr = Bool()
    val tw = Bool()
    val tvm = Bool()
    val mxr = Bool()
    val sum = Bool()
    val mprv = Bool()
    val xs = UInt(2.W) 
    val fs = UInt(2.W) 
    val mpp = UInt(2.W) 
    val zero2 = UInt(2.W) 
    val spp = Bool()
    val mpie = Bool()
    val zero3 = Bool()
    val spie = Bool()
    val upie = Bool()
    val mie = Bool()
    val zero4 = Bool()
    val sie = Bool()
    val uie = Bool()
}

class CSRIO extends Bundle
{
    //maybe there will be some NOP instruction in pipeline
    //and if we have a time interrupt , the mepc will be set a wrong value
    val instruction = Input(UInt(32.W))
    val csr_op = Input(UInt(csr_op_sz))
    val data_in = Input(UInt(64.W))
    val hasException = Input(Bool())
    val hasStall = Input(Bool())
    val in_mem_pc = Input(UInt(64.W))
    val in_exe_pc = Input(UInt(64.W))
    val in_dec_pc = Input(UInt(64.W))
    val in_if_pc = Input(UInt(64.W))
    val is_retire = Input(Bool())
    

    val redir_target = Output(UInt(64.W))
    val csr_info = Output(UInt(64.W))
    val isredir = Output(Bool())
    val csr_illegal_ins_exception = Output(Bool())

    val time_interrupt = Input(Bool())
}

class CSRfile extends Module
{
    val io = IO(new CSRIO)

    io := DontCare

    //当是特定的操作，并且没有异常发生，也没有阻塞的时候，才可以写
    // val wen = WireInit((io.csr_op === csr_w || io.csr_op === csr_s || io.csr_op === csr_c) && !io.hasException && !io.hasStall)

    val reg_mtvec = RegInit(UInt(64.W),MTVEC_ADDR.U)
    val reg_mepc = RegInit(UInt(64.W),0.U)
    val reg_mcause = RegInit(UInt(64.W),0.U)//默认值代表了一个异常情况，但是并不一定会触发
    val reg_mie = RegInit(0.U.asTypeOf(new MIP()))
    val reg_mip = RegInit(0.U.asTypeOf(new MIP()))
    val reg_mtval = RegInit(0.U(64.W))
    val reg_mscratch = RegInit(0.U(64.W))
    val reg_mstatus = RegInit(0.U.asTypeOf(new Mstatus()))
    // val reg_mtimecmp = RegInit(UInt(64.W),0.U)
    // val reg_mtime = RegInit(UInt(64.W),0.U)//??
    // val reg_misa = WireInit(UInt(64.W),0.U)
    val reg_mcounteren = RegInit(0.U(64.W))

    val reg_pmpcfg0 = RegInit(0.U(64.W))
    val reg_pmpcfg1 = RegInit(0.U(64.W))
    // val regs_pmpaddr = VecInit.tabulate(16){i => RegInit(0.U(64.W))}//pmpaddr0 - pmpaddr15
    val regs_pmpaddr = RegInit(VecInit.tabulate(16){i => 0.U(64.W)})//pmpaddr0 - pmpaddr15

    val reg_mcycle = RegInit(0.U(64.W))
    val reg_minstret = RegInit(0.U(64.W))
    val regs_mhpmcounter = RegInit(VecInit.tabulate(mhpmcounter_number){i => (0.U(64.W))})
    val reg_mcounterinhibit = RegInit(0.U(64.W))
    val regs_mhpmevet = RegInit(VecInit.tabulate(mhpmevent_number){i => (0.U(64.W))})


    val prv_now = WireInit(PRV_M)

    val wire_csr_op = Wire(UInt(csr_op_sz))//reset csr operation if op is read only
    val wire_csr_index = WireInit(io.instruction(csr_MSB,csr_LSB))

    wire_csr_op := io.csr_op
    when((io.csr_op === csr_c || io.csr_op === csr_s) && io.instruction(rs1_MSB,rs1_LSB) === 0.U)
    {
        wire_csr_op := csr_r
    }

    val str_isa = "im"//impliment rv64im

    def gen_isa(str : String) = str_isa.map{case x:Char => 1 << (x - 'a')}.reduce(_ | _)
    val wire_isa = WireInit(gen_isa(str_isa).U(64.W))
    val csr_wire_isa = wire_isa | (BigInt(2) << 62).U(64.W)//to tell MLEN = 64
    // reg_misa := wire_isa

    //check whether csr register can be written when op is set clear write
    val csr_read_only = wire_csr_index(11,10).andR
    val write_illgal = ((wire_csr_op === csr_w || wire_csr_op === csr_c || wire_csr_op === csr_s) && csr_read_only)

    //check whether csr register number is illegal when op is not csr.N
    val csr_read_map = collection.mutable.LinkedHashMap[Int,Bits](
        mvendorid -> 0.U(64.W),
        marchid   -> 0.U(64.W),
        mimpid    -> 0.U(64.W),
        mhartid   -> 0.U(64.W),

        mstatus   -> reg_mstatus.asTypeOf(UInt(64.W)),
        misa      -> csr_wire_isa,
        medelege  -> 0.U(64.W),
        midelege  -> 0.U(64.W),
        mie       -> reg_mie.asTypeOf(UInt(64.W)),
        mip       -> reg_mip.asTypeOf(UInt(64.W)),
        mtvec     -> reg_mtvec,
        mcounteren-> reg_mcounteren,

        mscratch  -> reg_mscratch,
        mepc      -> reg_mepc,
        mcause    -> reg_mcause,
        mtval     -> reg_mtval,
        
        pmpcfg0   -> reg_pmpcfg0,
        pmpcfg1   -> reg_pmpcfg1,

        mcycle    -> reg_mcycle,
        minstret  -> reg_minstret,

        mcounterinhibit -> reg_mcounterinhibit
    )

    for( i <- (0 until 16))
    {
        csr_read_map += ((pmpaddr0 + i) -> regs_pmpaddr(i))
    }

    for(i <- (0 until mhpmcounter_number))
    {
        csr_read_map += ((mhpmcounter_start + i) -> regs_mhpmcounter(i))
    }

    for(i <- (0 until mhpmevent_number))
    {
        csr_read_map += ((mhpmevent_start + i) -> regs_mhpmevet(i))
    }

    val legalcsrnumber : Bool = csr_read_map.map{case(k : Int , v : Bits) => (wire_csr_index === k.U)}.reduce(_ || _)
    val read_illegal = (io.csr_op =/= csr_n && io.csr_op =/= csr_prv) && !legalcsrnumber

    val exception_in_csr = read_illegal || write_illgal // illegal instruction detected in csr file
    
    val csr_read_enable = (io.csr_op =/= csr_n && io.csr_op =/= csr_prv) && !read_illegal//need to read and index is not illegal
    //according to csr map to set data to be readed 
    val csr_read_data = WireInit(0.U(64.W))

    def is_csr_of(index : Int) = {
        val temp = csr_read_map.map{case (k,v) => k -> (k.U === wire_csr_index)}
        temp(index)
    }

    when(csr_read_enable)
    {
        csr_read_data := Mux1H(for((k,v) <- csr_read_map) yield (is_csr_of(k) -> v))
    }

    io.csr_info := csr_read_data

    //according to the readed data to generate write(set or clear) or write(write) data
    //some csr can only be changed in some bits 
    val csr_write_data = MuxCase(csr_read_data,Array(
        (io.csr_op === csr_w) -> io.data_in,
        (io.csr_op === csr_s) -> (csr_read_data | io.data_in),
        (io.csr_op === csr_c) -> (csr_read_data & (~io.data_in))
    ))

    val csr_wen = !write_illgal && legalcsrnumber && !io.hasException && !io.hasStall && (wire_csr_op =/= csr_n && wire_csr_op =/= csr_prv && wire_csr_op =/= csr_r)

    
    when(csr_wen)
    {
        when(is_csr_of(mstatus))
        {
            val temp_mstatmstatusus = csr_write_data.asTypeOf(new Mstatus)
            reg_mstatus.mie := temp_mstatmstatusus.mie
            reg_mstatus.mpie := temp_mstatmstatusus.mpie
        }

        when(is_csr_of(mie))
        {
            val temp_mie = csr_write_data.asTypeOf(new MIP)
            reg_mie.mti := temp_mie.mti
            reg_mie.msi := temp_mie.msi
        }
        when(is_csr_of(mip))
        {
            val temp_mip = csr_write_data.asTypeOf(new MIP)
            reg_mip.mti := temp_mip.mti
            reg_mip.msi := temp_mip.msi
        }
        when(is_csr_of(mtvec)) {reg_mtvec := csr_write_data}
        when(is_csr_of(mscratch)) {reg_mscratch := csr_write_data}
        when(is_csr_of(mepc)) {reg_mepc := ((csr_write_data >> 2)<<2).asUInt()}
        when(is_csr_of(mcause)) {reg_mcause := csr_write_data}
        when(is_csr_of(pmpcfg0)) {reg_pmpcfg0 := csr_write_data}
        when(is_csr_of(pmpcfg1)) {reg_pmpcfg1 := csr_write_data}
        when(is_csr_of(mcycle)) {reg_mcycle := csr_write_data}
        when(is_csr_of(minstret)) {reg_minstret := csr_write_data}
        when(is_csr_of(mcounterinhibit)) {reg_mcounterinhibit := csr_write_data}

        
        for(i <- 0 until 16)
        {
            when(is_csr_of(pmpaddr0 + i))
            {
                regs_pmpaddr(i) := csr_write_data
            }
        }
        for(i <- 0 until mhpmcounter_number)
        {
            when(is_csr_of(mhpmcounter_start + i))
            {
                regs_mhpmcounter(i) := csr_write_data
            }
        }
        for(i <- 0 until mhpmevent_number)
        {
            when(is_csr_of(mhpmevent_start + i))
            {
                regs_mhpmevet(i) := csr_write_data
            }
        }
        
    }

    //check exception
    val csr_illegal_ins_exception = exception_in_csr || io.hasException

    val csr_isecall = (io.csr_op === csr_prv) && (wire_csr_index === 0.U)
    val csr_isebreak = (io.csr_op === csr_prv) && (wire_csr_index === 1.U)
    val csr_ismret = (io.csr_op === csr_prv) && (wire_csr_index === 0x302.U)

    val csr_hasexception = csr_illegal_ins_exception || csr_isecall || csr_isebreak
    //check if there is a time interrupt

    io.csr_illegal_ins_exception := csr_illegal_ins_exception

    //not sure
    // when(reg_mtime >= reg_mtimecmp)
    // {
    //     reg_mip.mti := true.B
    // }
    // BoringUtils.addSink(reg_mip.mti,"time_interrupt")
    reg_mip.mti := io.time_interrupt
    
    // reg_mtime := reg_mtime + 1.U
    reg_mcycle := reg_mcycle + 1.U
    
    when(io.is_retire)
    {
        reg_minstret := reg_minstret + 1.U
    }

    val csr_hasinterrupt = Wire(Bool())

    when(reg_mip.mti && reg_mie.mti && reg_mstatus.mie && !io.hasStall && io.in_mem_pc =/= 0.U)
    {
        //can process timer interrupt
        //when no stall happens , the redirect infomation can be set into registers 

        //also if there is a NOP in MEM stage and we have a time interrupt
        //the mepc will be wrong , so we should make sure the instruction
        //in MEM stage is not NOP , Maybe there will be some legal NOP 
        //instructions generated by compiler,we will emit this 
        csr_hasinterrupt := true.B
    }.otherwise
    {
        csr_hasinterrupt := false.B
    }

    //set cause , trapaddr and return addr 
    val wire_trap_addr = WireInit(reg_mtvec)
    val wire_ret_addr = WireInit(reg_mepc)


    when(!io.hasStall)
    {
        when(csr_hasinterrupt)
        {
            val wire_mstatus_new = WireInit(reg_mstatus)
            val wire_mstatus_old = WireInit(reg_mstatus)
            // reg_mepc := io.in_mem_pc
            when(csr_ismret || csr_hasexception)
            {
                reg_mepc := io.in_mem_pc
            }.elsewhen(io.in_exe_pc =/= 0.U)
            {
                reg_mepc := io.in_exe_pc
            }.elsewhen(io.in_dec_pc =/= 0.U)
            {
                reg_mepc := io.in_dec_pc
            }.elsewhen(io.in_if_pc =/= 0.U)
            {
                reg_mepc := io.in_if_pc
            }
            reg_mtval := io.in_mem_pc

            reg_mcause := (BigInt(1)<<63).U(64.W) | m_timer_interrupt
                
            wire_mstatus_new.mie := false.B
            wire_mstatus_new.mpie := wire_mstatus_old.mie
            wire_mstatus_new.mpp := prv_now

            reg_mstatus := wire_mstatus_new
        }.elsewhen(csr_ismret)
        {
            val wire_mstatus_new = WireInit(reg_mstatus)
            val wire_mstatus_old = WireInit(reg_mstatus)
            io.redir_target := wire_ret_addr
            wire_mstatus_new.mie := wire_mstatus_old.mpie
            wire_mstatus_new.mpie := true.B
            prv_now := wire_mstatus_old.mpp

            reg_mstatus := wire_mstatus_new
        }.elsewhen(csr_hasexception)
        {
            val wire_mstatus_new = WireInit(reg_mstatus)
            val wire_mstatus_old = WireInit(reg_mstatus)
            when(csr_illegal_ins_exception)
            {
                reg_mepc := io.in_mem_pc
                reg_mtval := io.instruction

                reg_mcause := illegal_instr
                
                wire_mstatus_new.mie := false.B
                wire_mstatus_new.mpie := wire_mstatus_old.mie
                wire_mstatus_new.mpp := prv_now

                reg_mstatus := wire_mstatus_new
                
            }.elsewhen(csr_isecall)
            {
                reg_mepc := io.in_mem_pc
                reg_mtval := io.in_mem_pc

                reg_mcause := ecall_m
                
                wire_mstatus_new.mie := false.B
                wire_mstatus_new.mpie := wire_mstatus_old.mie
                wire_mstatus_new.mpp := prv_now

                reg_mstatus := wire_mstatus_new
            }.elsewhen(csr_isebreak)
            {
                reg_mepc := io.in_mem_pc
                reg_mtval := io.in_mem_pc

                reg_mcause := breakpoint
                
                wire_mstatus_new.mie := false.B
                wire_mstatus_new.mpie := wire_mstatus_old.mie
                wire_mstatus_new.mpp := prv_now

                reg_mstatus := wire_mstatus_new
            }
        }


    }


    when(csr_hasexception || csr_hasinterrupt || csr_ismret)
    {
        io.isredir := true.B
    }.otherwise
    {
        io.isredir := false.B
    }

    when(csr_hasexception || csr_hasinterrupt)
    {
        io.redir_target := wire_trap_addr
    }

    //for difftest
    // BoringUtils.addSource(reg_mstatus.asUInt(),"mstatus")
    // BoringUtils.addSource(io.isredir,"isredir")
}

