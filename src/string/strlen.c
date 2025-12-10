#include<ogc/stddef.h>

size_t my_strlen(const unsigned char *str) {
  const unsigned char *s = str;
  
  while(*s) s++;

  return (int)(s - str);
}
