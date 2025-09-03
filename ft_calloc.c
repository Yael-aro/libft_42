#include "libft.h"
 void *ft_calloc(size_t count, size_t size)
 {
    size_t total = count * size;
    void *ptr = malloc(total);
    if(!ptr)
    {
        return NULL;
    }
    ft_memset(ptr, 0, total);
    return ptr;
 }