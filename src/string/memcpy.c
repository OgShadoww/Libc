#include"../../include/ogc/stddef.h"

char *my_memcpy(char *dest, const unsigned char *source, size_t n) {
  char *a = dest;
  
  while(n--) *a++ = *source++;
  return dest;
}
