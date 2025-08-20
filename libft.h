#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
//#include <stdlib.h>
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);
size_t strlen(const char *s);
void *memset(void *ptr, int value, size_t num);
void bzero(void *s, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t strlcpy(char *dst, const char *src, size_t size);
size_t strlcat(char *dst, const char *src, size_t size);
int toupper(int c);
int tolower(int c);
char *strchr(const char *s, int c);
 int atoi(const char *str);

#endif