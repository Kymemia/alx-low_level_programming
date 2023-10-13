#include "main.h"

/**
 * print_line - Prints line corresponding to number.
 * @n: print value
 */

void print_line(int n)
{
	int zazu;

	if (n > 0)
	{
		for (zazu = 0; zazu < n; zazu++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
