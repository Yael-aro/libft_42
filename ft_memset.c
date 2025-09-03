#include "libft.h"
void *ft_memset(void *ptr, int value, size_t num)
{
    size_t i = 0;
    unsigned char *p = ptr;

    while (i < num)
    {
        p[i] = (unsigned char)value;
        i++;
    }
    return ptr;
}