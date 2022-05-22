#include "libft.h"
#include <ctype.h>

int main () {
   char *a = "abcdef";
   char *b = "abCdef";

   printf("%d\n", ft_strnequ(a,b,4));
   
   return(0);
}