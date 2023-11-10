#include "function_pointers.h"
/**
 * array_iterator - executes funtion given
 * as a parameter on each array's element
 * @array: int to be checked
 * @size: size of array
 * @action: int to be checked
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		int *end = array + size;

		for (; array < end; array++)
		{
			action(*array);
		}
	}
}
