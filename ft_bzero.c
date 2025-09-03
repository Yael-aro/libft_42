#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    size_t i = 0;
     char *ptr = (char *)s;
    while (i < n)
    {
        ptr[i] = 'n';
        i++;
    }  
}