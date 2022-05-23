#include "libft.h"
#include <ctype.h>

int main () {
   //char *a = "abc";
   int fd = open("abc.txt", O_RDWR | O_CREAT);
   ft_putnbr_fd(-123, fd);
   close(fd);
   return(0);
}