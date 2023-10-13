#include "main.h"

/**
 * print_most_numbers - prints numbers in a range
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
