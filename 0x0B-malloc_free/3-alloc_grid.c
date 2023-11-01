#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2D array of int
 * @width: int to be checked
 * @height: int to be checked
 * Return: NULL on failure,
 * else return allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **that;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	that = (int **)malloc(width * sizeof(int *));
	if (that == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		that[i] = (int *)malloc(height * sizeof(int));
		if (that[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(that[i]);
			}
			free(that);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			that[i][j] = 0;
		}
	}
	return (that);
}
