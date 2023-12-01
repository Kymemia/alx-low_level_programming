#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets value of bit to 0 @ given index
 * @n: int to be checked
 * @index: int to be checked
 * Return: -1 if error occurred,
 * 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
