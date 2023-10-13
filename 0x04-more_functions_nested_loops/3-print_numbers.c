#include "main.h"

/**
 * print_numbers - outputs numbers in a range
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
