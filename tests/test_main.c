#include <ogc/unistd.h>
#include <ogc/string.h>

int main() {
  const char *buf = "Hello world\n";
  size_t len = ogc_strlen(buf);
  ogc_write(STDOUT_FILENO, (char*)buf, len);

  return 0;
}
