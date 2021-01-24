package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils


class difftestIO extends Bundle
{
    val r = Output(Vec(32,UInt(64.W)))
    val pc_data = Output(UInt(64.W))
    val mstatus = Output(UInt(64.W))
    val isredir = Output(Bool())
    val is_retire = Output(Bool())
    val instr_in_wb = Output(UInt(32.W))
    val is_valid = Output(Bool())
    // val pc_sel = Output(Bool())
    val alu_exe_stall = Output(Bool())
    val mul_result_hi = Output(UInt(64.W))
    val mul_result_lo = Output(UInt(64.W))
    val abs_op1 = Output(UInt(64.W))
    val abs_op2 = Output(UInt(64.W))
    val tlb_stage = Output(UInt(3.W))
    val ptw_stage = Output(UInt(3.W))
    val ptw_req_addr = Output(UInt(64.W))
    val ptw_resp_data = Output(UInt(64.W))
}

// class top extends Module {
//     val io = IO(new Bundle {
//         val diff = new difftestIO
//     })

//     val mycore = Module(new core)
//     val mymem  = Module(new AXI4_Ram("./test1.txt"))

//     mycore.io.axi4 <> mymem.io

//     val difftestwire = WireInit(0.U.asTypeOf(new difftestIO))

    // BoringUtils.addSink(difftestwire.r,"regs")
    // BoringUtils.addSink(difftestwire.pc_data,"pc_data")
    // BoringUtils.addSink(difftestwire.mstatus,"mstatus")
    // BoringUtils.addSink(difftestwire.isredir,"isredir")
    // BoringUtils.addSink(difftestwire.is_retire,"is_retire")
    // // BoringUtils.addSink(difftestwire.pc_sel,"pc_sel")
    // BoringUtils.addSink(difftestwire.instr_in_wb,"dp_wb_reg_instr")
    // BoringUtils.addSink(difftestwire.is_valid,"cs_valid_inst")
    // BoringUtils.addSink(difftestwire.alu_exe_stall,"exe_stall2")
    // BoringUtils.addSink(difftestwire.mul_result_hi,"mul_result_hi")
    // BoringUtils.addSink(difftestwire.mul_result_lo,"mul_result_lo")
    // BoringUtils.addSink(difftestwire.abs_op1,"abs_op1")
    // BoringUtils.addSink(difftestwire.abs_op2,"abs_op2")


//     io.diff := difftestwire

//     // io.pc_data := mycore.dpath.reg_pc

// }

// object start 
// {
//     def main(args: Array[String]): Unit = {
//         chisel3.Driver.execute(args, () => {new top
//         })
//     }
// }