#include<stdio.h>

unsigned char *my_strcat(unsigned char *dest, const unsigned char *src) {
  unsigned char *d = dest;
  
  while(*d) d++;
  
  while((*d++ = *src++));
  
  return dest;
}
