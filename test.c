#include "libft.h"
#include <ctype.h>

int main(){
    const char str[] = "http";
   const char ch = 'h';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}