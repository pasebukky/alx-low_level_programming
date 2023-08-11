#include <stdio.h>
 
int main () {

   /* variable definition */
   int n = rand();
 
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
