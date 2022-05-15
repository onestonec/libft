#include "libft.h"

int main(){
    char str[100] = "Libc is the standard library.\0";

    char csrc[] = "GeeksforGeeks";
    char cdest[100];

    ft_memcpy(cdest, str, 100);
    printf("%s", cdest);
    return 0;
}