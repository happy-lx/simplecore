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
    val zero0 = UInt(52.W)
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
class Mideleg extends Bundle
{
    val zero6 = UInt(52.W)
    val mei = Bool()
    val zero5 = Bool()
    val sei = Bool()
    val zero4 = Bool()
    val mti = Bool()
    val zero3 = Bool()
    val sti = Bool()
    val zero2 = Bool()
    val msi = Bool()
    val zero1 = Bool()
    val ssi = Bool()
    val zero0 = Bool()
}
class Medeleg extends Bundle
{
    val zero2 = UInt(48.W)
    val store_page_fault = Bool()
    val zero1 = Bool()
    val load_page_fault = Bool()
    val instr_page_fault = Bool()
    val ecall_m = UInt(1.W)
    val zero0 = Bool()
    val ecall_s = Bool()
    val ecall_u = Bool()
    val store_access_fault = Bool()
    val store_addr_misalign = Bool()
    val load_access_fault = Bool()
    val load_addr_misalign = Bool()
    val breakpoint = Bool()
    val illegal_instr = Bool()
    val instr_access_fault = Bool()
    val instr_addr_misalign = Bool()
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

    val reg_mideleg = RegInit(0.U.asTypeOf(new Mideleg))
    val reg_medeleg = RegInit(0.U.asTypeOf(new Medeleg))

    //S mode
    val reg_satp = RegInit(0.U(64.W))
    val reg_stvec = RegInit(UInt(64.W),MTVEC_ADDR.U)
    val reg_sepc = RegInit(UInt(64.W),0.U)
    val reg_stval = RegInit(0.U(64.W))
    val reg_sscratch = RegInit(0.U(64.W))
    val reg_scause = RegInit(0.U(64.W))

    //no actual regs of sstatus ,sie ,sip
    //it's a subset of mstatus ,mie ,mip
    val wire_sstatus = WireInit(reg_mstatus)
    wire_sstatus.mpp := 0.U(2.W)
    wire_sstatus.mie := false.B
    wire_sstatus.mpie := false.B 
    wire_sstatus.mprv := false.B 

    val wire_sie = WireInit(reg_mie)
    wire_sie.mei := false.B
    wire_sie.msi := false.B
    wire_sie.mti := false.B

    val wire_sip = WireInit(reg_mip)
    wire_sip.mei := false.B
    wire_sip.msi := false.B
    wire_sip.mti := false.B

    BoringUtils.addSource(reg_satp,"satp_val")


    //! change it from wire to reg not tested
    val prv_now = RegInit(PRV_M)

    val wire_csr_op = Wire(UInt(csr_op_sz))//reset csr operation if op is read only
    val wire_csr_index = WireInit(io.instruction(csr_MSB,csr_LSB))

    wire_csr_op := io.csr_op
    when((io.csr_op === csr_c || io.csr_op === csr_s) && io.instruction(rs1_MSB,rs1_LSB) === 0.U)
    {
        wire_csr_op := csr_r
    }

    val str_isa = "ima"//impliment rv64ima

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
        medeleg   -> reg_medeleg.asUInt,
        mideleg   -> reg_mideleg.asUInt,
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

        mcounterinhibit -> reg_mcounterinhibit,

        sstatus   -> wire_sstatus.asTypeOf(UInt(64.W)),
        sie       -> wire_sie.asTypeOf(UInt(64.W)),
        sip       -> wire_sip.asTypeOf(UInt(64.W)),
        stvec     -> reg_stvec,
        sepc      -> reg_sepc,
        scause    -> reg_scause,
        stval     -> reg_stval,
        sscratch  -> reg_sscratch,
        satp      -> reg_satp

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

    //indicate that whether satp has been modified 
    //when satp is modified , the pipeline should kill IF , EXE , DEC and flush TLB
    val satp_modified = WireInit(false.B)
    
    satp_modified := csr_wen && is_csr_of(satp)

    BoringUtils.addSource(satp_modified,"satp_tlb_flush")

    when(csr_wen)
    {
        when(is_csr_of(mstatus))
        {
            val temp_mstatus = csr_write_data.asTypeOf(new Mstatus)
            reg_mstatus.mie := temp_mstatus.mie
            reg_mstatus.mpie := temp_mstatus.mpie
            reg_mstatus.mpp := temp_mstatus.mpp

            reg_mstatus.sie := temp_mstatus.sie
            reg_mstatus.spie := temp_mstatus.spie
            reg_mstatus.spp := temp_mstatus.spp
        }

        when(is_csr_of(mie))
        {
            val temp_mie = csr_write_data.asTypeOf(new MIP)
            reg_mie.mti := temp_mie.mti
            reg_mie.msi := temp_mie.msi
            reg_mie.mei := temp_mie.mei

            reg_mie.sti := temp_mie.sti
            reg_mie.ssi := temp_mie.ssi
            reg_mie.sei := temp_mie.sei
        }
        when(is_csr_of(mip))
        {
            val temp_mip = csr_write_data.asTypeOf(new MIP)
            reg_mip.mti := temp_mip.mti
            reg_mip.msi := temp_mip.msi
            reg_mip.mei := temp_mip.mei

            reg_mip.sti := temp_mip.sti
            reg_mip.ssi := temp_mip.ssi
            reg_mip.sei := temp_mip.sei
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
        when(is_csr_of(mideleg)){
            val temp_mideleg = csr_write_data.asTypeOf(new Mideleg)

            reg_mideleg.sti := temp_mideleg.sti
            reg_mideleg.sei := temp_mideleg.sei
            reg_mideleg.ssi := temp_mideleg.ssi
        }
        when(is_csr_of(medeleg)){
            val temp_medeleg = csr_write_data.asTypeOf(new Medeleg)

            reg_medeleg.store_page_fault        := temp_medeleg.store_page_fault
            reg_medeleg.load_page_fault         := temp_medeleg.load_page_fault
            reg_medeleg.instr_page_fault        := temp_medeleg.instr_page_fault
            reg_medeleg.ecall_s                 := temp_medeleg.ecall_s
            reg_medeleg.ecall_u                 := temp_medeleg.ecall_u
            //ecall_m is hardwired to zero
            reg_medeleg.store_access_fault      := temp_medeleg.store_access_fault
            reg_medeleg.store_addr_misalign     := temp_medeleg.store_addr_misalign
            reg_medeleg.load_access_fault       := temp_medeleg.load_access_fault
            reg_medeleg.load_addr_misalign      := temp_medeleg.load_addr_misalign
            reg_medeleg.breakpoint              := temp_medeleg.breakpoint
            reg_medeleg.illegal_instr           := temp_medeleg.illegal_instr
            reg_medeleg.instr_access_fault      := temp_medeleg.instr_access_fault
            reg_medeleg.instr_addr_misalign     := temp_medeleg.instr_addr_misalign

        }
        when(is_csr_of(sstatus)){
            val temp_sstatus = csr_write_data.asTypeOf(new Mstatus)

            reg_mstatus.sie := temp_sstatus.sie
            reg_mstatus.spie := temp_sstatus.spie
            reg_mstatus.spp := temp_sstatus.spp
        }
        when(is_csr_of(sie)){
            val temp_sie = csr_write_data.asTypeOf(new MIP)

            reg_mie.sti := temp_sie.sti
            reg_mie.ssi := temp_sie.ssi
            reg_mie.sei := temp_sie.sei
        }
        when(is_csr_of(sip)){
            val temp_sip = csr_write_data.asTypeOf(new MIP)

            reg_mip.sti := temp_sip.sti
            reg_mip.ssi := temp_sip.ssi
            reg_mip.sei := temp_sip.sei
        }
        when(is_csr_of(stvec)){ reg_stvec := csr_write_data }
        when(is_csr_of(sepc)){ reg_sepc := csr_write_data }
        when(is_csr_of(scause)){ reg_scause := csr_write_data }
        when(is_csr_of(stval)){ reg_stval := csr_write_data }
        when(is_csr_of(sscratch)){ reg_sscratch := csr_write_data }
        when(is_csr_of(satp)){ reg_satp := csr_write_data }

        
    }

    //check exception
    //! notice: io.hasException is just invalid instruction exception from DEC 
    val csr_illegal_ins_exception = exception_in_csr || io.hasException

    //recieve exception from cpath 
    val csr_instr_page_fault    = WireInit(false.B)
    val csr_instr_missaligned   = WireInit(false.B)
    val csr_load_page_fault     = WireInit(false.B)
    val csr_load_missaligned    = WireInit(false.B)
    val csr_store_page_fault    = WireInit(false.B)
    val csr_store_missaligned   = WireInit(false.B)

    BoringUtils.addSink(csr_instr_page_fault,"cs_reg_mem_instr_page_fault")
    BoringUtils.addSink(csr_instr_missaligned,"cs_reg_mem_instr_missaligned")
    BoringUtils.addSink(csr_load_page_fault,"cs_wire_mem_load_page_fault")
    BoringUtils.addSink(csr_load_missaligned,"cs_wire_mem_load_missaligned")
    BoringUtils.addSink(csr_store_page_fault,"cs_wire_mem_store_page_fault")
    BoringUtils.addSink(csr_store_missaligned,"cs_wire_mem_store_missaligned")


    val csr_isecall = (io.csr_op === csr_prv) && (wire_csr_index === 0.U)
    val csr_isecall_m = csr_isecall && prv_now === PRV_M
    val csr_isecall_s = csr_isecall && prv_now === PRV_S
    val csr_isecall_u = csr_isecall && prv_now === PRV_U
    val csr_isebreak = (io.csr_op === csr_prv) && (wire_csr_index === 1.U)
    val csr_ismret = (io.csr_op === csr_prv) && (wire_csr_index === 0x302.U)
    val csr_issret = (io.csr_op === csr_prv) && (wire_csr_index === 0x102.U)

    val csr_hasexception = csr_illegal_ins_exception || csr_instr_page_fault || csr_instr_missaligned || csr_load_page_fault || csr_load_missaligned || csr_store_page_fault || csr_store_missaligned || csr_isecall || csr_isebreak
    //check if there is a time interrupt

    //! csr_illegal_ins_exception contians invalid instruction exception and other kinds of exceptions 
    //! it's just to tell dpath's WB stage not to write RF
    io.csr_illegal_ins_exception := csr_illegal_ins_exception || csr_instr_page_fault || csr_instr_missaligned || csr_load_page_fault || csr_load_missaligned || csr_store_page_fault || csr_store_missaligned

    //not sure
    // when(reg_mtime >= reg_mtimecmp)
    // {
    //     reg_mip.mti := true.B
    // }
    BoringUtils.addSink(reg_mip.mti,"time_interrupt")
    BoringUtils.addSink(reg_mip.msi,"clint_msi")
    
    // reg_mtime := reg_mtime + 1.U
    reg_mcycle := reg_mcycle + 1.U
    
    when(io.is_retire)
    {
        reg_minstret := reg_minstret + 1.U
    }

    val csr_hasinterrupt = Wire(Bool())

    //learn the way of handling interrupt from NutShell
    //the csr_hasinterrupt signal is the whole control signal
    val intr_vec = reg_mip.asUInt
    val intr_deleg_S = intr_vec & reg_mideleg.asUInt
    val intr_enable_vec = Wire(Vec(12,Bool()))

    for(i <- (0 until 12))
    {
        when(intr_deleg_S(i))
        {
            //check the global interrupt enalbe signal
            when((prv_now === PRV_S && reg_mstatus.sie) || prv_now === PRV_U){ intr_enable_vec(i) := true.B }
                                                                   .otherwise{ intr_enable_vec(i) := false.B }
        }.otherwise
        {
            when((prv_now === PRV_M && reg_mstatus.mie) || (prv_now === PRV_U || prv_now === PRV_S)){ intr_enable_vec(i) := true.B }
                                                                                          .otherwise{ intr_enable_vec(i) := false.B }
        }
    }
    val intr_vec_now = Cat(intr_enable_vec.reverse) & intr_vec(11,0) & (reg_mie.asTypeOf(UInt()))(11,0)

    csr_hasinterrupt := intr_vec_now.orR && io.in_mem_pc =/= 0.U

    val intr_cause_no = intr_priority_table.foldRight(0.U)( (now : UInt , pre : UInt) => Mux(intr_vec_now(now),now,pre))
    val intr_deleg_happen = csr_hasinterrupt && (reg_mideleg.asTypeOf(UInt()))(intr_cause_no)

    // when(reg_mip.mti && reg_mie.mti && reg_mstatus.mie && !io.hasStall && io.in_mem_pc =/= 0.U)
    // {
    //     //can process timer interrupt
    //     //when no stall happens , the redirect infomation can be set into registers 

    //     //also if there is a NOP in MEM stage and we have a time interrupt
    //     //the mepc will be wrong , so we should make sure the instruction
    //     //in MEM stage is not NOP , Maybe there will be some legal NOP 
    //     //instructions generated by compiler,we will emit this 
    //     csr_hasinterrupt := true.B
    // }.otherwise
    // {
    //     csr_hasinterrupt := false.B
    // }

    //set cause , trapaddr and return addr 
    val wire_trap_addr_m = WireInit(reg_mtvec)
    val wire_ret_addr_m = WireInit(reg_mepc)
    val wire_trap_addr_s = WireInit(reg_stvec)
    val wire_ret_addr_s = WireInit(reg_sepc)


    def exception_deg(exception_num : UInt) : Bool = {

        Mux((prv_now === PRV_M),false.B,Mux((reg_medeleg.asTypeOf(UInt()))(exception_num),true.B,false.B))
        // when(prv_now === PRV_M)
        // {
            //when privilege mode is M , and we have a exception 
            //just process this exception in M mode and ignore the deleg
        //     false.B
        // }.otherwise
        // {
            //now the privilege mode is S or U , and if the exception is delegated to S mode 
            //then process it in S mode ,otherwise process it in M mode
        //     when( (reg_medeleg.asUInt)(exception_num) )
        //     {
        //         true.B
        //     }.otherwise
        //     {
        //         false.B
        //     }
        // }
    }

    when(!io.hasStall)
    {
        when(csr_hasinterrupt)
        {
            val wire_mstatus_new = WireInit(reg_mstatus)
            val wire_mstatus_old = WireInit(reg_mstatus)
            // reg_mepc := io.in_mem_pc
            when(csr_ismret || csr_issret || csr_hasexception)
            {
                when(intr_deleg_happen){reg_sepc := io.in_mem_pc}
                .otherwise{reg_mepc := io.in_mem_pc}
            }.elsewhen(io.in_exe_pc =/= 0.U)
            {
                when(intr_deleg_happen){reg_sepc := io.in_exe_pc}
                .otherwise{reg_mepc := io.in_exe_pc}
            }.elsewhen(io.in_dec_pc =/= 0.U)
            {
                when(intr_deleg_happen){reg_sepc := io.in_dec_pc}
                .otherwise{reg_mepc := io.in_dec_pc}
            }.elsewhen(io.in_if_pc =/= 0.U)
            {
                when(intr_deleg_happen){reg_sepc := io.in_if_pc}
                .otherwise{reg_mepc := io.in_if_pc}
            }
            when(intr_deleg_happen)
            {
                reg_stval := io.in_mem_pc
                reg_scause := (BigInt(1)<<63).U(64.W) | intr_cause_no
            }.otherwise
            {
                reg_mtval := io.in_mem_pc
                reg_mcause := (BigInt(1)<<63).U(64.W) | intr_cause_no
            }
            when(intr_deleg_happen) 
            {
                wire_mstatus_new.sie := false.B
                wire_mstatus_new.spie := wire_mstatus_old.sie
                wire_mstatus_new.spp := prv_now
            }.otherwise
            {
                wire_mstatus_new.mie := false.B
                wire_mstatus_new.mpie := wire_mstatus_old.mie
                wire_mstatus_new.mpp := prv_now
            }
            when(intr_deleg_happen)
            {
                prv_now := PRV_S
            }.otherwise
            {
                prv_now := PRV_M
            }

            reg_mstatus := wire_mstatus_new

            when(intr_deleg_happen)
            {
                io.redir_target := wire_trap_addr_s
            }.otherwise
            {
                io.redir_target := wire_trap_addr_m
            }
        }.elsewhen(csr_ismret)
        {
            val wire_mstatus_new = WireInit(reg_mstatus)
            val wire_mstatus_old = WireInit(reg_mstatus)
            io.redir_target := wire_ret_addr_m
            wire_mstatus_new.mie := wire_mstatus_old.mpie
            wire_mstatus_new.mpie := true.B
            wire_mstatus_new.mpp := PRV_U
            prv_now := wire_mstatus_old.mpp

            reg_mstatus := wire_mstatus_new
        }.elsewhen(csr_issret)
        {
            val wire_mstatus_new = WireInit(reg_mstatus)
            val wire_mstatus_old = WireInit(reg_mstatus)
            io.redir_target := wire_ret_addr_s
            wire_mstatus_new.sie := wire_mstatus_old.spie
            wire_mstatus_new.spie := true.B
            wire_mstatus_new.spp := PRV_U
            prv_now := wire_mstatus_old.spp

            reg_mstatus := wire_mstatus_new
        }.elsewhen(csr_hasexception)
        {
            //according to the priority to process each of the exception

            def process_exception(Etype : UInt , tval : UInt) = {

                val wire_mstatus_new = WireInit(reg_mstatus)
                val wire_mstatus_old = WireInit(reg_mstatus)

                when(exception_deg(Etype))
                {
                    reg_sepc := io.in_mem_pc
                    reg_stval := tval
                    reg_scause := Etype
                    wire_mstatus_new.sie := false.B
                    wire_mstatus_new.spie := wire_mstatus_old.sie
                    wire_mstatus_new.spp := prv_now
                    prv_now := PRV_S
                    io.redir_target := wire_trap_addr_s
                }.otherwise
                {
                    reg_mepc := io.in_mem_pc
                    reg_mtval := tval
                    reg_mcause := Etype
                    wire_mstatus_new.mie := false.B
                    wire_mstatus_new.mpie := wire_mstatus_old.mie
                    wire_mstatus_new.mpp := prv_now
                    prv_now := PRV_M
                    io.redir_target := wire_trap_addr_m
                }
                reg_mstatus := wire_mstatus_new
            }

            when(csr_isebreak)
            {
                process_exception(Etype = breakpoint,tval = io.in_mem_pc)

            }.elsewhen(csr_instr_page_fault)
            {
                process_exception(Etype = instr_page_fault,tval = io.in_mem_pc)

            }.elsewhen(csr_illegal_ins_exception)
            {
                process_exception(Etype = illegal_instr,tval = io.instruction)

            }.elsewhen(csr_instr_missaligned)
            {
                process_exception(Etype = instr_addr_misalign,tval = io.in_mem_pc)

            }.elsewhen(csr_isecall)
            {
                when(csr_isecall_m)
                {
                    process_exception(Etype = ecall_m,tval = io.in_mem_pc)
                }.elsewhen(csr_isecall_s)
                {
                    process_exception(Etype = ecall_s,tval = io.in_mem_pc)
                }.elsewhen(csr_isecall_u)
                {
                    process_exception(Etype = ecall_u,tval = io.in_mem_pc)
                }

            }.elsewhen(csr_store_missaligned)
            {
                process_exception(Etype = store_addr_misalign,tval = io.instruction)
            }.elsewhen(csr_load_missaligned)
            {
                process_exception(Etype = load_addr_misalign,tval = io.instruction)
            }.elsewhen(csr_store_page_fault)
            {
                process_exception(Etype = store_page_fault,tval = io.instruction)
            }.elsewhen(csr_load_page_fault)
            {
                process_exception(Etype = load_page_fault,tval = io.instruction) 
            }

        }


    }


    when(csr_hasexception || csr_hasinterrupt || csr_ismret || csr_issret || satp_modified)
    {
        io.isredir := true.B
    }.otherwise
    {
        io.isredir := false.B
    }

    // when(csr_hasexception || csr_hasinterrupt)
    // {
    //     io.redir_target := wire_trap_addr
    // }.elsewhen(satp_modified)
    when(satp_modified)
    {
        //when we write to satp , the redirect target should be the next instruction of this instruciton
        when(io.in_exe_pc =/= 0.U)
        {
            io.redir_target := io.in_exe_pc
        }.elsewhen(io.in_dec_pc =/= 0.U)
        {
            io.redir_target := io.in_dec_pc
        }.elsewhen(io.in_if_pc =/= 0.U)
        {
            io.redir_target := io.in_if_pc
        }.otherwise
        {
            io.redir_target := io.in_mem_pc + 4.U
        }
    }

    //for difftest
    BoringUtils.addSource(reg_mstatus.asUInt(),"mstatus")
    BoringUtils.addSource(io.isredir,"isredir")
}

