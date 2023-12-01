#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: int to be checked
 * @size: int to be checked
 * @cmp: int to be checked
 * Return: -1 if size <= 0,
 * else return return 1st element index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int yy = 0;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (yy = 0; yy < size; yy++)
		{
			if (cmp(array[yy]))
			{
				return (yy);
			}
		}
	}
	return (-1);
}
