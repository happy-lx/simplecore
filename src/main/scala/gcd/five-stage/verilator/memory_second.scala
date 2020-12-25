package mycore

import chisel3._
import chisel3.util._

import constants.Constraints._
import chisel3.util.experimental.loadMemoryFromFile
import chisel3.util.experimental._
// import chisel3.util.experimental.MemoryLoadFileType

class readportio extends Bundle
{
    val addr = Input(UInt(32.W))
    val rdata = Output(UInt(64.W))
    val op = Input(UInt(3.W))//读memory时候的操作码

}

class writeportio extends Bundle
{
    val addr = Input(UInt(32.W))
    val mask = Input(UInt(8.W))//写memory时候的掩码
    val wdata = Input(UInt(64.W))
    val wen = Input(Bool())
}

class memory_req_io extends Bundle
{
    val addr = Output(UInt(32.W))
    val mask = Output(UInt(8.W))//写memory时候的掩码
    val op = Output(UInt(3.W))//读memory时候的操作码
    val wdata = Output(UInt(64.W))
    val memen = Output(Bool())//是否需要启动mem
    val wen = Output(Bool())

    override def cloneType = {new memory_req_io().asInstanceOf[this.type]}
}

class memory_resp_io extends Bundle
{
    val rdata = Output(UInt(64.W))

    override def cloneType = {new memory_resp_io().asInstanceOf[this.type]}
}

class memory_port_io extends Bundle
{
    val req = Flipped(Decoupled(new memory_req_io))
    val resp = Decoupled(new memory_resp_io)

    override def cloneType = {new memory_port_io().asInstanceOf[this.type]}
}

class sram_like_io extends Bundle
{
    val addr = Output(UInt(64.W))
    val mask = Output(UInt(8.W))//写memory时候的掩码
    val op = Output(UInt(3.W))//读memory时候的操作码
    val wdata = Output(UInt(64.W))
    val memen = Output(Bool())//是否需要启动mem
    val wen = Output(Bool())
    val rdata = Input(UInt(64.W))
    
    val data_valid = Input(Bool())
}


class memorymodule(memdir : String = "") extends Module
{
    val io = IO(new Bundle {
        val ports = Vec(2,new memory_port_io)
    })

    //two ports , one is for instruction , one is for data 
    io := DontCare
    

    val mem = Mem((1L<<24),UInt(8.W))

    if(memdir != "")
    {
        loadMemoryFromFile(mem,memdir)
    }

    for(i <- 0 until 2)
    {
        io.ports(i).resp.valid := io.ports(i).req.valid
        io.ports(i).req.ready := true.B
    }

    val wdata_temp = Wire(Vec(2,Vec(8,UInt(8.W))))
    val rdata_temp = Wire(Vec(2,Vec(8,UInt(8.W))))
    val mask_temp = Wire(Vec(2,Vec(8,Bool())))
    val addr_temp = Wire(Vec(2,Vec(8,UInt(24.W))))

    rdata_temp := DontCare

    for(i <- 0 until 2)
    {
        for(j <- 0 until 8)
        {
            //for each port , split the mask , wdata into 8 bits width Vec
            wdata_temp(i)(j) := io.ports(i).req.bits.wdata(7+8*j,8*j)
            mask_temp(i)(j) := io.ports(i).req.bits.mask(j).asBool
            addr_temp(i)(j) := io.ports(i).req.bits.addr(23,0) + j.U(23.W)
        }
    }

    // to read and write
    
        for(i <- 0 until 2)
        {
            when(io.ports(i).req.bits.memen)
            {
                for(j <- 0 until 8)
                {
                    //read 
                    rdata_temp(i)(j) := mem(addr_temp(i)(j))

                    //write
                    when(io.ports(i).req.bits.wen)
                    {
                        when(mask_temp(i)(j))
                        {
                        mem(addr_temp(i)(j)) :=  wdata_temp(i)(j)
                        }
                    }
                }

            }
        }
    

    //use op to reset the data output
   
        for(i <- 0 until 2)
        {
            when(io.ports(i).req.bits.memen)
            {
                io.ports(i).resp.bits.rdata := MuxCase(Cat(rdata_temp(i)(7),rdata_temp(i)(6),rdata_temp(i)(5),rdata_temp(i)(4),rdata_temp(i)(3),rdata_temp(i)(2),rdata_temp(i)(1),rdata_temp(i)(0)),Array(
                (io.ports(i).req.bits.op === op_b) -> Cat(Fill(56,rdata_temp(i)(0)(7)),rdata_temp(i)(0)),
                (io.ports(i).req.bits.op === op_bu) -> Cat(Fill(56,0.U(1.W)),rdata_temp(i)(0)),
                (io.ports(i).req.bits.op === op_hb) -> Cat(Fill(48,rdata_temp(i)(1)(7)),rdata_temp(i)(1),rdata_temp(i)(0)),
                (io.ports(i).req.bits.op === op_hbu) -> Cat(Fill(48,0.U(1.W)),rdata_temp(i)(1),rdata_temp(i)(0)),
                (io.ports(i).req.bits.op === op_w) -> Cat(Fill(32,rdata_temp(i)(3)(7)),rdata_temp(i)(3),rdata_temp(i)(2),rdata_temp(i)(1),rdata_temp(i)(0)),
                (io.ports(i).req.bits.op === op_wu) -> Cat(Fill(32,0.U(1.W)),rdata_temp(i)(3),rdata_temp(i)(2),rdata_temp(i)(1),rdata_temp(i)(0))
                ))

            }
        }


    // BoringUtils.addSource(io.ports(0).resp.bits,"imem_resp_bits")
    // BoringUtils.addSource(io.ports(0).resp.valid,"imem_resp_valid")
    // BoringUtils.addSink(io.ports(0).resp.ready,"imem_resp_ready")

    // BoringUtils.addSource(io.ports(1).resp.bits,"dmem_resp_bits")
    // BoringUtils.addSource(io.ports(1).resp.valid,"dmem_resp_valid")
    // BoringUtils.addSink(io.ports(1).resp.ready,"dmem_resp_ready")


    // BoringUtils.addSink(io.ports(0).req.bits,"imem_req_bits")
    // BoringUtils.addSink(io.ports(0).req.valid,"imem_req_valid")
    // BoringUtils.addSource(io.ports(0).req.ready,"imem_req_ready")


    // BoringUtils.addSink(io.ports(1).req.bits,"dmem_req_bits")
    // BoringUtils.addSink(io.ports(1).req.valid,"dmem_req_valid")
    // BoringUtils.addSource(io.ports(1).req.ready,"dmem_req_ready")
    


}