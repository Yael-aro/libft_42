#include "libft.h"
char *cpy(char *dst, const char *src)
{
    int i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
    
}
char	*ft_strdup(const char *s1)
{
    char *ptr; 

    ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
    if(!ptr)
    {
        return NULL;
    }
    cpy(ptr, s1);
    return ptr;
}