#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid
 * @grid: int to be checked
 * @height: int to be checked
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
