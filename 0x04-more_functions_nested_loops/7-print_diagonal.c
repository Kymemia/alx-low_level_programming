#include "main.h"

/**
 * print_diagonal - print line corresponding to number
 * @n: print value
 */

void print_diagonal(int n)
{
	int zazu;
	int indent = 0;

	if (n > 0)
	{
		for (zazu = 0; zazu < n; zazu++)
		{
			int yy;

			for (yy = 0; yy < indent; yy++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			indent++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
