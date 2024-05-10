#include "search_algos.h"

/**
 *
 */

int min(int i, int j)
{
	if (j > i)
		return (i);
	else
		return (j);
}

/**
 *
 */

int jump_search(int *array, size_t size, int value)
{
	int hop = sqrt(size);
	int prev = 0;
	int current;
	int i;

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	while (array[min(hop, size) - 1] < value)
	{
		prev = hop;
		hop += sqrt(size);

		if (prev >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev - hop + 1, (int)size - 1);
			for (i = prev - hop + 1; i < (int)size; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			}
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	current = min(hop, (int)size) - 1;
	printf("Value found between indexes [%d] and [%d]\n", prev - hop + 1, current);

	for (i = prev - hop + 1; i <= current; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
