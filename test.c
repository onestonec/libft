#include "libft.h"
#include <ctype.h>

int main(){
   char word[] = "Hello";

   char new[100];
   ft_strncpy(new, word,2);

   printf("%s", new);
   
   
   return(0);
}