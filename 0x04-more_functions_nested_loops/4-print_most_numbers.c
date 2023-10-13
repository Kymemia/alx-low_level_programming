#include "main.h"

/**
 * print_most_numbers - prints numbers in a range
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
		{
			_putchar((num % 10) + '0');
		}
		num++;
	}
	_putchar('\n');
}
