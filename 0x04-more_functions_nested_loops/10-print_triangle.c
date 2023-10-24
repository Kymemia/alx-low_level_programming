#include "main.h"

/**
 * print_triangle - prints a # triangle
 * @size: print value
 */
void print_triangle(int size)
{
	int pumbaa;
	int zazu;
	int sutn;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (pumbaa = 0; pumbaa <= size; pumbaa++)
	{
		for (zazu = 0; zazu < size - pumbaa - 1; zazu++)
		{
			_putchar(' ');
		}
		for (sutn = 0; sutn <= pumbaa; sutn++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
