#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid- free a 2 dimensional array of integers
 *@grid : pointer to the array
 *@height: the height of the array
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
