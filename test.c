#include "libft.h"
#include <ctype.h>

int main(){
    char a[16] = "abcdefghijklmnop";
    char b[16];

    memcpy(b,a,16);           // valid
    puts(b);
    memmove(&a[0], &a[1],10);          // Also valid, but slower than memcpy.
    puts(a);
    //memcpy(&a[0], &a[1],10);  // Not valid since it overlaps.
    ft_memmove(&a[0], &a[1],10); // valid. 

    puts(a);
    
    return 0;
}