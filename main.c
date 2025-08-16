#include "libft.h"
#include <stdio.h>

int main() {
    char buffer[11];
    memset(buffer, '4', 10);
    buffer[10] = '\0';          

    printf("%s\n", buffer);
    return 0;
}