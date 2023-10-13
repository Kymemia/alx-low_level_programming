#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int num;
	int freq;

	for (freq = 0; freq < 10; freq++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
