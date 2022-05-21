#include "libft.h"
#include <ctype.h>

int main(){
    // Take any two strings
   char src[50] = "efghijkl";
   char dest[50]= "abcd";
  
   // Appends 5 character from src to dest
   ft_strncat(dest, src, 5);
     
   // Prints the string
   printf("Source string : %s\n", src);
   printf("Destination string : %s", dest);
   
   return(0);
}