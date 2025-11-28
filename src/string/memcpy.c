#include<stdio.h>

void my_memcpy(char *dest, const char *source, size_t byte) {
  char *a = dest;
  
  while(*a) a++;

  while(byte-- > 0 && ( *a++ = *source++));
}

int main() {
  char a[20] = "Hello ";
  const char b[] = "World!";
  size_t byte = 3;

  my_memcpy(a, b, byte);
  printf("%s\n", a);
  return 0;
}
