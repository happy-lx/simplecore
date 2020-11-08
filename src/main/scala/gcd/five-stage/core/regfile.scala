package mycore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

//reg file 
class RegfileIO() extends Bundle
{
    //read port 
    val rp1 = Input(UInt(5.W))
    val rp2 = Input(UInt(5.W))

    val rp1_data = Output(UInt(64.W))
    val rp2_data = Output(UInt(64.W))

    //write port
    val wp = Input(UInt(5.W))
    
    val wp_data = Input(UInt(64.W))
    val wp_en = Input(Bool())
}


class Regfile extends Module
{
    val io = IO(new RegfileIO())

    val regs = Mem(32,UInt(64.W));

    when(io.wp_en)
    {
        regs(io.wp) := Mux(io.wp === 0.U,0.U,io.wp_data);
    }

    io.rp1_data := Mux(io.rp1 === 0.U,0.U,regs(io.rp1))
    io.rp2_data := Mux(io.rp2 === 0.U,0.U,regs(io.rp2))

    //for diff test
    // BoringUtils.addSource(VecInit((0 until 32).map(i => regs(i))),"regs")


}