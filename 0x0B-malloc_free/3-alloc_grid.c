#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates integers in 2D grid
 * @width: Grid width.
 * @height: Grid heingh.
 *
 * Return: Pointer to allocated grid. NULL if it fails.
 */

int **alloc_grid(int width, int height)
{
int **grid, *input, a;

if (width <= 0 || height <= 0)
	return (NULL);

grid = malloc(height * sizeof(int *));

if (grid == NULL)
	return (NULL);

input = malloc(width * height * sizeof(int));

if (input == NULL)
{
	free(grid);
	return (NULL);
}

for (a = 0; a < height; a++)
	grid[a] = input + (a * width);

for (a = 0; a < width * height; a++)
	input[a] = 0;

return (grid);
}
