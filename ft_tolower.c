#include "libft.h"
int ft_tolower(int c)
{
    unsigned char i = (unsigned char ) c;
    if(i >= 97 && i <= 122)
    {
        return i - 32;
    }
    return i;
}