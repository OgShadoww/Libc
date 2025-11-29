int my_strcmpr(const unsigned char *a, const unsigned char *b) {
  const unsigned char *a1 = a;
  const unsigned char *b1 = b;
  
  while(*a1 && (*a1++ == *b1++));
  
  return *a1 - *b1;
}
