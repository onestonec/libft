#include "libft.h"
#include<string.h>
#include <string.h>
#include <ctype.h>

int main(){
    const char src[] = "Stars: Altair, Sun, Vega.";
    const char terminal[] = {':', ' ', ',', '.', '!'};
    char dest[sizeof src];
    const char alt = '@';
 
    for (size_t i = 0; i != sizeof terminal; ++i) {
 
        void *to = ft_memccpy(dest, src, terminal[i], sizeof dest);
 
        printf("Terminal '%c' (%s):\t\"", terminal[i], to ? "found" : "absent");
 
        // if `terminal` character was not found - print the whole `dest`
        to = to ? to : dest + sizeof dest;
 
        for (char *from = dest; from != to; ++from)
            putchar(isprint(*from) ? *from : alt);
 
        puts("\"");
    }
    
    
    return 0;
}