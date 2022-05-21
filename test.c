#include "libft.h"
#include <ctype.h>

int main(){
    // Take any two strings
   char src[20] = "efghijkl";
   char dest[50]= "abcd";
   char s[6] = {'s', 't', 'r', 'i', 'n', 'g'};
  
   // Appends 5 character from src to dest
   //ft_strlcat(dest, src, 5);
     
   // Prints the string
   printf("ft_isalnum:  %d\n", ft_isalnum('1'));
   //printf("Destination string : %s", dest);
   
   return(0);
}