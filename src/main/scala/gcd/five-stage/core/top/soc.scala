package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._
import chisel3.util.experimental.BoringUtils

import constants.RV64I._
import constants.RV64M._
import constants.Constraints._

class top extends Module
{
    val io = IO(new Bundle{
        val diff = new difftestIO
    })

    val mycore = Module(new core)
    val uart = Module(new AXI4_UART)
    val mem  = Module(new AXI4_Ram("./test1.txt"))

    mycore.io.axi4_mem <> mem.io
    mycore.io.axi4_mmio<> uart.io

    val difftestwire = WireInit(0.U.asTypeOf(new difftestIO))

    BoringUtils.addSink(difftestwire.r,"regs")
    BoringUtils.addSink(difftestwire.pc_data,"pc_data")
    BoringUtils.addSink(difftestwire.mstatus,"mstatus")
    BoringUtils.addSink(difftestwire.isredir,"isredir")
    BoringUtils.addSink(difftestwire.is_retire,"is_retire")
    // BoringUtils.addSink(difftestwire.pc_sel,"pc_sel")
    BoringUtils.addSink(difftestwire.instr_in_wb,"dp_wb_reg_instr")
    BoringUtils.addSink(difftestwire.is_valid,"cs_valid_inst")
    BoringUtils.addSink(difftestwire.alu_exe_stall,"exe_stall2")
    BoringUtils.addSink(difftestwire.mul_result_hi,"mul_result_hi")
    BoringUtils.addSink(difftestwire.mul_result_lo,"mul_result_lo")
    BoringUtils.addSink(difftestwire.abs_op1,"abs_op1")
    BoringUtils.addSink(difftestwire.abs_op2,"abs_op2")
    BoringUtils.addSink(difftestwire.tlb_stage,"tlb_stage")
    BoringUtils.addSink(difftestwire.ptw_stage,"ptw_stage")
    BoringUtils.addSink(difftestwire.ptw_req_addr,"ptw_req_addr")
    BoringUtils.addSink(difftestwire.ptw_resp_data,"ptw_resp_data")
    BoringUtils.addSink(difftestwire.dptw_req_addr,"dptw_req_addr")
    BoringUtils.addSink(difftestwire.dptw_resp_data,"dptw_resp_data")

    io.diff := difftestwire

}

object start 
{
    def main(args: Array[String]): Unit = {
        chisel3.Driver.execute(args, () => {new top
        })
    }
}