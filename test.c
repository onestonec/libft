#include "libft.h"
#include <ctype.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abcd");
   strcpy(str2, "abcdef");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   
   return(0);
}