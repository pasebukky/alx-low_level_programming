#include <stdio.h>

/**
 * main - Prints 'FizzBuzz' for multiples of
 * both 3 and 5, 'Fizz' for multiples of 3,
 * and 'Buzz' for multiples of 5
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
            putchar(' ');
        }
        else if (i % 3 == 0)
        {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
            putchar(' ');
        }
        else if (i % 5 == 0)
        {
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
            putchar(' ');
        }
        else
        {
            int j;
	    int num = i;
            int digits[10];
            
            int count = 0;
            while (num > 0)
            {
                digits[count] = num % 10;
                num /= 10;
                count++;
            }
            
            for (j = count - 1; j >= 0; j--)
                putchar(digits[j] + '0');
            
            putchar(' ');
        }
    }
    
    putchar('\n');
    
    return 0;
}

