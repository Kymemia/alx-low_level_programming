#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9, followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
	return (0);
}
