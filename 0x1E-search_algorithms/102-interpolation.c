#include "search_algos.h"

/**
 * interpolation_search - function searches for a value
 * in a sorted array of integers using Interpolation search algo.
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value isn't present in array || array is NULL,
 * else return correct value being searched
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = (size - 1);
	size_t pos;

	if (!array || size == 0 || !value)
		return (-1);

	while (1)
	{
		pos = lo + (((double)(hi - lo) /
					(array[hi] - array[lo])) * (value - array[lo]));

		if (value < array[0] || value > array[size - 1])
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (lo == hi)
		{
			if (array[lo] == value)
				return (lo);
			return (-1);
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
}
