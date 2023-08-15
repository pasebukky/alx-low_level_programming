#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * by olubukunola pase
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int multiple;

	multiple = 0;

	while (multiple < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		multiple++;
	}
}
