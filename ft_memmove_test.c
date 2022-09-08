
#include <string.h>
#include <stdio.h>

int main () {
   char dest[] = "wapwap";
   const char src[]  = "new";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memcpy(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}