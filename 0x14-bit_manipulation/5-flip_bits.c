#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * flip_bits - returns no. of bits needed
 * to flip to get from 1 no. to the next
 * @n: int to be checked
 * @m: int to be checked
 * Return: Said number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int zaza = 0;
	unsigned long int mask = n ^ m;

	while (mask)
	{
		zaza += mask & 1;
		mask >>= 1;
	}
	return (zaza);
}
