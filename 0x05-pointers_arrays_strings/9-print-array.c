#include "main.h"
/**
 * print_array - prints elements of array
 * @a: pointer of array
 * @n: integer to be printed
 */
void print_array(int *a, int n)
{
	int rr;

	for (int rr = 0; rr < n; rr++)
	{
		if (rr < n - 1)
		{
			_putchar(a[rr] + '0');
			_putchar(', ');
		}
	}
	_putchar('\n');
}
