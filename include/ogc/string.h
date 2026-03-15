#ifndef STRING_H
#define STRING_H

#include "stddef.h"

char *ogc_memcpy(void *dest, const void *source, size_t n);
char *ogc_strcat(char *dest, const char *source);
int ogc_strcmp(const char *a, const char *b);
char *ogc_strcpy(char *dest, const char *source);
size_t ogc_strlen(const char *str);

#endif
