.globl _main
.align 2

_main:
  b _printf 
  b _terminate

_terminate:
  mov X0, #0
  mov X16, #55
  svc 0

_printf:
  mov X0, #1
  adr X1, helloworld
  mov X2, #12
  mov X16, #4
  svc 0
  ret

helloworld: .ascii "helLo world\n"
