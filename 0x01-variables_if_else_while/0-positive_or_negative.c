#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main (void) {

   /* variable definition */
   int n;
   n = rand() - RAND_MAX/2;
 
   /* check the boolean condition */
   if( n > 0 ) {
      /* if condition is true then print the following */
      printf("%d\n : is positive\n" , n);
   } else if (n == 0) {
      /* if condition is true then print the following */
      printf("%d\n : is zero\n" , n);
   } else (n < 0) {
      /* if condition is true then print the following */
      printf("%d\n : is negative\n" , n);
   }
 
   return 0;
}
