.global _sys_read
.align 2

_sys_read:
  // x0 = fd
  // x1 = buff to save
  // x2 = bytes to read

  mov X16, #3
  svc 0
  b.cs error
  ret

error:
  mov x0, #-1
  ret
