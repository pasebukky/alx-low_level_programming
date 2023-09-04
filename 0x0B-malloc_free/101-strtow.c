#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: Input string.
 *
 * Return: Pointer to an array of strings (words). NULL if it fails.
 */
char **strtow(char *str)
{
int a, b, c, count;
char **words;
if (str == NULL || *str == '\0')
	return (NULL);
words = NULL;
for (a = 0; str[a]; a++)
	if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		count++;
if (count == 0)
	return (NULL);
words = malloc((count + 1) * sizeof(char *));
if (words == NULL)
	return (NULL);
a = 0;
while (*str)
{
	if (*str == ' ')
		str++;
	else
	{
		b = 0;
		while (str[b] && str[b] != ' ')
			b++;
		words[a] = malloc((b + 1) * sizeof(char));
		if (words[a] == NULL)
		{
			for (c = 0; c < a; c++)
				free(words[c]);
			free(words);
			return (NULL);
		}
		for (c = 0; c < b; c++)
			words[a][c] = str[c];
		words[a][b] = '\0';
		a++;
		str += b;
	}
}
words[a] = NULL;
return (words);
}
