#include "main.h"

/**
 * times_table - prints times table of 9
 *
 * Return: times table of 9
 */

void times_table(void)
{
	int num;
	int product;
	int numm;

	for (num = 0; num <= 9; num++)
	{
		for (numm = 1; numm <= 9; numm++)
		{
			product = num * numm;
			if (numm > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product <= 9)
			{
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
