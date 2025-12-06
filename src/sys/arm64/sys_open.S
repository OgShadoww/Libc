.global _sys_open

_sys_open:
  // Arguments:
  // X0 = Path
  // X1 = Flags
  // X2 = Mode

  mov X16, #5
  svc 0
  ret
