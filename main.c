#include "libft.h"
#include <stdio.h>

int main() {
    int  src[]={12, 56, 89};
    int dest[50];
    memcpy(dest,src,sizeof(src));
    printf("%d",dest[1]);

}