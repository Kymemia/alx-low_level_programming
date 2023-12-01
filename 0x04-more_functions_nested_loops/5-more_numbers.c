#include "main.h"

/**
 * more_numbers - prints numbers
 */

void more_numbers(void)
{
	int num;
	int freq;

	for (freq = 0; freq <= 9; freq++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
			_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
