.global _sys_nanosleep
.align 2

_sys_nanosleep:
  stp x29, x30, [sp, -48]!
  mov x29, sp
  
  str x0, [sp, 16]

  mov x0, #0          
  mov x1, #0              
  mov x2, #0            
  mov x3, #0          
  add x4, sp, 16
  
  mov x16, #93
  svc 0
  ldp x29, x30, [sp], 48
  ret
