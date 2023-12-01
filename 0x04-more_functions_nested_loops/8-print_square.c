#include "main.h"

/**
 * print_square - prints square
 * @size: print value
 *
 */

void print_square(int size)
{
	int zazu;
	int pumbaa;

	if (size > 0)
	{
		for (pumbaa = 0; pumbaa < size; pumbaa++)
		{
			for (zazu = 0; zazu < size; zazu++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
