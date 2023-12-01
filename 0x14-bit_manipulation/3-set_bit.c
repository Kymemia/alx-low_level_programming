#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - sets the value of bit to 1 @ given index
 * @n: pointer to be checked
 * @index: int to be checked
 * Return: 1 if successful, -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((*n |= 1 << index) ? 1 : -1);
}
