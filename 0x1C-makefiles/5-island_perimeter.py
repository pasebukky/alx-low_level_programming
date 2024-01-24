#!/usr/bin/python3

""" Defines a functions that finds the perimeter of island """

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of lists of integers): 2D grid representing the island.

    Returns:
    - int: Perimeter of the island.

    Requirements:
    - The island doesn't have "lakes"
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100.
    - Grid is completely surrounded by water & there is one island or nothing
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 1 if i == 0 or grid[i-1][j] == 0 else 0
                perimeter += 1 if j == 0 or grid[i][j-1] == 0 else 0
                perimeter += 1 if i == len(grid)-1 or grid[i+1][j] == 0 else 0
                perimeter += 1 if j == len(grid[0])-1 or grid[i][j+1] == 0 \
                    else 0
    return perimeter
