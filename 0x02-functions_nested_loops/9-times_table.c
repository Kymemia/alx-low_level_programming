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

	for (num = 0; num <= 10; num++)
	{
		product = 9 * num;
		_putchar(product + '0');
		_putchar('\n');
	}
}
