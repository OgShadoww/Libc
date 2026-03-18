.section __TEXT,
.global _mmap

_mmap:
  // x0 = void *addr
  // x1 = size_t len
  // x2 = int prot
  // x3 = int flags
  // x4 = int fd
  // x5 = off_t offset

  mov x16, #197
  svc 0
  ret
