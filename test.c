#include "libft.h"
#include<string.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[16] = "abcdefghijklmnop";
    char b[16];

    memcpy(a,b,16);           // valid
    memmove(a,b,16);          // Also valid, but slower than memcpy.
    memcpy(&a[0], &a[1],10);  // Not valid since it overlaps.
    memmove(&a[0], &a[1],10); // valid. 
    
    return 0;
}