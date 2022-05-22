#include "libft.h"
#include <ctype.h>

int main () {
   char *a = "abcdef";
   char *res = ft_strsub(a, 1, 6);

   printf("%s\n", res);
   
   return(0);
}