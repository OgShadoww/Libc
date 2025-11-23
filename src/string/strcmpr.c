int my_strcmpr(const char *a, const char *b) {
  char *a1 = a;
  char *b1 = b;
  
  while(*a1 && (*a1++ == *b1++)) a1++; b1++;
  
  return *a1 - *b1;
}
