#include "main.h"

/**
 * print_numbers - outputs numbers in a range
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int rR;

	for (rR = 0; rR <= 9; rR++)
		_putchar(rR + '0');
	_putchar('\n');
}
