#include <ogc/string.h>

char *ogc_memcpy(void *dest, const void *source, size_t n) {
  unsigned char *d = dest;
  const unsigned char *s = source;
  
  while(n--) *d++ = *s++;
  return dest;
}
