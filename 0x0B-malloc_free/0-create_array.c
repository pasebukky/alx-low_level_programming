#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and
 * initializes it with a special character
 * @size: Array size
 * @c: Character the array is to be initialized with
 *
 * Return: Pointer to the newly created array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int a;
char *array;

if (size == 0)
	return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
	return (NULL);

for (a = 0; a < size; a++)
{
	array[a] = c;
}
return (array);
}
