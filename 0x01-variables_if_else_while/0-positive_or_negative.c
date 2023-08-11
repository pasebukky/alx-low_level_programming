#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Main - Starting point
 *Return - Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0) 
      		printf("%d\n : is positive\n", n);
	else if (n == 0) 
      		printf("%d\n : is zero\n", n);
   	else 
      		printf("%d\n : is negative\n", n);
	return (0);
}

