#include "libft.h"
#include <ctype.h>

int main () {
   char *a = "abcdef";
   char *b = "ABCDEF";
   char *res = ft_strsub(a, 1,3);

   printf("%s\n", res);
   
   return(0);
}