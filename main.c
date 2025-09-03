#include "libft.h"
#include <stdio.h>
int main()
{
    char str[] = "hello";
    char *copie = ft_strdup(str);
    if(copie == NULL)
    {
        printf("allocation failed \n");
    }
    else
    printf("allocation has ben allocated in COPIE %s", copie);
}