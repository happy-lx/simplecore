;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit AND : 
  module AND : 
    output io : {flip a : UInt<1>, flip b : UInt<1>, c : UInt<1>}
    
    node _T = and(io.a, io.b) @[AND.scala 14:16]
    io.c <= _T @[AND.scala 14:8]
    
