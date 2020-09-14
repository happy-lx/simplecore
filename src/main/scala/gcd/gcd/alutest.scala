// ANDtest.scala
package simpleshell
 
import chisel3._
 
object testMain extends App {
  Driver.execute(args, () => new alu_module)
}
