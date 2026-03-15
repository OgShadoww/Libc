#include<ogc/string.h>

int ogc_strcmp(const char *a, const char *b) {
  const char *a1 = a;
  const char *b1 = b;
  
  while(*a1 && (*a1++ == *b1++));
  
  return *a1 - *b1;
}
