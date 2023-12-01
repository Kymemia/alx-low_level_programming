#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints binary representation of a number
 * @n: int to be checked
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
