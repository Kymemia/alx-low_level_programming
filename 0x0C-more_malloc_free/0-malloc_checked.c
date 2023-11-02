#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: int to be checked
 * Return: 98 if malloc fails,
 * else return allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *prr;

	prr = malloc(10 * sizeof(b));
	if (prr == NULL)
	{
		exit(98);
	}
	return (prr);
}
