#include "search_algos.h"

/**
 * linear_search - searches for a value using linear search algorithm
 * @array: pointer to the first element of array being searched
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: -1 if value isn't present + array is NULL,
 * else return position of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
