#include "libft.h"
#include <ctype.h>

int main(){
    const char haystack[20] = "TutorialsPoint";
   const char *needle = "oin";
   char *ret;

   

   printf("The substring is: %s\n", ft_strnstr(haystack, needle,30));
   
   return(0);
}