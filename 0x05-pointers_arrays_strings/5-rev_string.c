#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int begin = 0;
int finish = 0;
char temp;

while (s[finish] != '\0')
	finish++;
finish--;

while (begin < finish)
{
       	temp = s[begin];
        s[begin] = s[finish];
        s[finish] = temp;
	begin++;
	finish--;
}
}
