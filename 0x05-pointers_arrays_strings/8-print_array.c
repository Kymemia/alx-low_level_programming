#include "main.h"
/**
 * print_array - prints elements of array
 * @a: pointer of array
 * @n: integer to be printed
 */
void print_array(int *a, int n)
{
	int rr;

	for (rr = 0; rr < n; rr++)
	{
		int num = a[rr];
		int div = 1;
		int temp = num;

		if (num < 0)
		{
			_putchar('-');
			num *= -1;
		}
		while (temp > 9)
		{
			temp /= 10;
			div *= 10;
		}
		while (div >= 1)
		{
			_putchar(num / div + '0');
			num %= div;
			div /= 10;
		}
		if (rr < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
