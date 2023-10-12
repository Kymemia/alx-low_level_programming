#include "main.h"

/**
 * times_table - prints times table of 9, form 0
 *
 * @times_table - times table of 9
 */

void times_table(void)
{
	int num;
	int product;
	int numm;

	for (num = 0; num <= 9; num++)
	{
		for (numm = 0; numm <= 9; numm++)
		{
			product = num * numm;
			_putchar(product + '0');
		}
	}
	_putchar('\n');
}
