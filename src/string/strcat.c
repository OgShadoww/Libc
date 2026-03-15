#include<ogc/string.h>

char *ogc_strcat(char *dest, const char *src) {
 char *d = dest;
  
  while(*d) d++;
  
  while((*d++ = *src++));
  
  return dest;
}
