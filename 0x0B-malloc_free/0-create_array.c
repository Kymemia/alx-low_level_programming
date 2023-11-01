#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: int to be checked
 * @c: char to be checked
 * Return: Null if size is 0,
 * else return array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
