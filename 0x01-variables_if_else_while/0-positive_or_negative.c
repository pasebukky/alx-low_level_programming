#include <stdio.h>
 
int main () {

   /* variable definition */
   int n = rand();
 
   /* check the boolean condition */
   if( n > 0 ) {
      /* if condition is true then print the following */
      printf( "%d\n : is positive" );
   } else if (n == 0) {
      /* if condition is true then print the following */
      printf( "%d\n : is zero" );
   } else (n < 0) {
      /* if condition is true then print the following */
      printf( "%d\n : is negative" );
   }
 
   return 0;
}
