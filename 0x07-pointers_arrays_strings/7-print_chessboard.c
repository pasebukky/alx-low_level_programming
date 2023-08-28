#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: chessboard 2D array
 */

void print_chessboard(char (*a)[8])
{
	int p;
	int q;

	for (p = 0; p < 8; p++)
	{
		for (q = 0; q < 8; q++)
		{
			_putchar(a[p][q]);
		}
		_putchar('\n');
	}
}
