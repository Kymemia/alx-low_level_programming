#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - returns value of index's given bit
 * @n: int to be checked
 * @index: int to be checked
 * Return: -1 if error occured,
 * else return accurate value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	return (n >> index & 1);
}
