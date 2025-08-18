#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);
size_t strlen(const char *s);
void *memset(void *ptr, int value, size_t num);
void bzero(void *s, size_t n);
void *memcpy(void *dest, const void *src, size_t n);

#endif