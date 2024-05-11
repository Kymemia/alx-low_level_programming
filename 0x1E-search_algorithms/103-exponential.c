#include "search_algos.h"

/**
 * le_binary_search - runs a binary search of the array
 * in search of a value
 * @array: pointer to the first element of the array
 * @left: starting index of the subarray
 * @right: ending index of the subarry
 * @value: value to be searched
 * Return: -1 if value isn't found, else return correct index
 */

int le_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;
	size_t x;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			if (x == right)
				printf(" %d\n", array[x]);
			else
				printf(" %d", array[x]);
		}
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: -1 if value isn't present in array || array is NULL,
 * else return correct index of value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t x = 1;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (x < size && array[x] <= value)
	{
		printf("Value checked array [%lu] = [%d]\n", x, array[x]);
		x = x * 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			x / 2, (x < size) ? x : size - 1);

	return (le_binary_search(array, x / 2, (x < size) ? x : size - 1, value));
}
