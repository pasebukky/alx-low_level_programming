#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of this program.
 * @av: Array of strings where arguments are stored.
 * @ac: Number of arguments.
 *
 * Return: Pointer to the new string. NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
int full_length, i;
char *outcome;

if (ac == 0 || av == NULL)
	return (NULL);

full_length = 0;

for (i = 0; i < ac; i++)
	full_length += strlen(av[i]) + 1;

outcome = malloc((full_length + 1) * sizeof(char));

if (outcome == NULL)
	return (NULL);

outcome[0] = '\0';

for (i = 0; i < ac; i++)
{
	strcat(outcome, av[i]);
	strcat(outcome, "\n");
}
return (outcome);
}
