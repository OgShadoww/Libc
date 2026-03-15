#include<ogc/string.h>

size_t ogc_strlen(const char *str) {
  const char *s = str;
  
  while(*s) s++;

  return (int)(s - str);
}
