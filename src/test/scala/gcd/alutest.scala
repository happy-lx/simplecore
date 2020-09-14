// alutest.scala
package simplecore
 
import chisel3._
import chisel3.iotesters._

 
class alutest(c:alu_module) extends PeekPokeTester(c)
{
  poke(c.io.input1,5.U)
  poke(c.io.input2,2.U)

  poke(c.io.op,8.U)
  poke(c.io.res_ext_op,0.U)

  expect(c.io.res,1.U)

  poke(c.io.input1,5.U)
  poke(c.io.input2,2.U)

  poke(c.io.op,21.U)
  poke(c.io.res_ext_op,0.U)

  peek(c.io.res)
  
}

object testMain extends App {
  chisel3.iotesters.Driver.execute(args,() => new alu_module)(c => new alutest(c))
}


//sbt 'test:runMain simpleshell.testMain -td ./generated/alutest --is-verbose'
//sbt 'test:runMain simpleshell.testMain -td ./generated/alutest --backend-name verilator'