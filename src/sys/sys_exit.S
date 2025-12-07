.global _sys_exit

_sys_exit:
  // Taking X0 from arugemnt
  mov X16, #1
  svc 0
  ret
