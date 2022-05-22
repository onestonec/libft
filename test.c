#include "libft.h"
#include <ctype.h>

int main () {
   int *a;

   a = ft_memalloc(20);
   for (int i = 0; i < 5; i++){

       printf("%d", a[i]);
   }
   
   return(0);
}