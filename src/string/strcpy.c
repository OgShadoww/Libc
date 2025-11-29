unsigned char *my_strcpy(unsigned char *dest, const unsigned char *src) {
  unsigned char *d = dest;

  while((*d++ = *src++));

  return dest;
}
