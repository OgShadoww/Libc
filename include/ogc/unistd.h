#ifndef OGC_UNISTD_H
#define OGC_UNISTD_H

#include "stddef.h"
#include "sys/syscall.h"

// Basic descriptors
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

ssize_t ogc_read(int fd, void *buf, size_t n);
ssize_t ogc_write(int fd, const void *buf, size_t n);

#define NULL (void*)0

#endif
