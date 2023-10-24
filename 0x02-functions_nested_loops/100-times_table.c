#include "main.h"

/**
 * times_table - prints times table of integer to be input
 *
 * Return: times table of said integer
 */

void print_times_table(int y)
{
        int num;
        int product;
        int numm;

	if (y >= 0 && y <= 15)
	{
		for (num = 1; num <= y; num++)
        {
                _putchar('0');

                for (numm = 1; numm <= y; numm++)
                {
                        product = num * numm;
                        if (numm > 0)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                        if (product <= 10)
                        {
                                _putchar(' ');
                        }
                        if (product >= 100)
                        {
                                _putchar(product / 100 + '0');
			}
			_putchar(product % 10 + '0');
                }
                _putchar('\n');
        }
}

