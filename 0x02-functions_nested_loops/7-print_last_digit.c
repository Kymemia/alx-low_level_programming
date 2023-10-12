#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *
 * @y: integer to be checked
 *
 * Return: The last digit
 */

int print_last_digit(int y)
{
	int lastLast = y % 10;

	if (lastLast < 0)
		lastLast = -lastLast;
	_putchar(lastLast + '0');

	return (lastLast);
}
