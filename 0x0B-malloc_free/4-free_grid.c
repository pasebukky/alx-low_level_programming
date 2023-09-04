#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees 2D grid previously created
 * @grid: 2D grid to be freed
 * @height: Grid height.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
int a;

if (grid == NULL)
	return;

for (a = 0; a < height; a++)
	free(grid[a]);

free(grid);
}
