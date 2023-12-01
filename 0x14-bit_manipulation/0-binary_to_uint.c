#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to be checked
 * Return: 0 if fail, int if success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int leta = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		leta = (leta << 1) + (*b++ - '0');
	}
	return (leta);
}
