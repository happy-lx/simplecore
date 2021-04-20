package mycore

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.experimental.BundleLiterals._

object Config 
{
    val ConfigMap = scala.collection.mutable.Map[String,Boolean](
        "fastMU" -> false,
        "gShare" -> false
    )
    def get(name:String):Boolean = {
        if(ConfigMap.contains(name))
        {
            return ConfigMap(name)
        }else
        {
            return false
        }
    }
    def set(name:String,value:Boolean):Unit = 
    {
        if(ConfigMap.contains(name))
        {
            ConfigMap(name) = value
        }else
        {
            ConfigMap += (name -> value)
        }
    }

}