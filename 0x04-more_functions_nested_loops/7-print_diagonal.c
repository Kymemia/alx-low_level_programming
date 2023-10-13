#include "main.h"

/**
 * print_diagonal - print line corresponding to number
 * @n: print value
 */

void print_diagonal(int n)
{
	int zazu;

	if (n > 0)
	{
		for (zazu = 0; zazu < n; zazu++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
