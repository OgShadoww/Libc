.globl _sys_write
.align 2

_sys_write:
  // x0 = fd
  // x1 = char *
  // x2 = size of message

  mov X16, #4
  svc 0
  ret
