.global _sys_close

_sys_close:
  // Get X0 File descriptor from arguments
  
  mov X16, #6
  svc 0
  ret
