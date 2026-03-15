#include <ogc/unistd.h>

ssize_t ogc_write(int fd, const void *buf, size_t n) {
  return (ssize_t)sys_write(fd, (char*)buf, n);
}
