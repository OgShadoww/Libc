unsigned char *my_memcpy(unsigned char *dest, const unsigned char *source, size_t n) {
  unsigned char *a = dest;
  
  while(n--) *a++ = *source++;
  return dest;
}
