#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int to be checked
 * @max: int to be checked
 * Return: null if malloc fails,
 * else returns array of integers
 */
int *array_range(int min, int max)
{
	int *may;
	int *jezza;
	int hamster;

	if (min > max)
	{
		return (NULL);
	}
	may = malloc(sizeof(int) * (max - min + 1));

	if (may == NULL)
	{
		return (NULL);
	}
	jezza = may;
	for (hamster = min; hamster <= max; hamster++)
	{
		*jezza = hamster;
		jezza++;
	}
	return (may);
}
