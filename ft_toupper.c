#include "libft.h"
int toupper(int c)
{
    unsigned char i = (unsigned char  ) c;
    if( i >= 65 && i <= 90)
    {
        return i;
    }
    else if(i >= 97 && i <= 122)
    {
        i -= 32;
    }
    return i;
}