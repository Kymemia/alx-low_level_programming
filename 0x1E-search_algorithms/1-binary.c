#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: pointer to the first element of array being searched
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: -1 if value isn't present in array + array is NULL,
 * else return position of value
 */

int binary_search(int *array, size_t size, int value)
{
	int lv = 0, mid;
	size_t hv = size - 1, x;

	while (lv <= (int)hv)
	{
		printf("Searching in array: ");
		for (x = lv; x <= hv; x++)
		{
			printf("%d", array[x]);
			if (x < hv)
				printf(", ");
		}
		printf("\n");

		mid = lv + (hv - lv) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			lv = mid + 1;
		else
			hv = mid - 1;
	}
	return (-1);
}
