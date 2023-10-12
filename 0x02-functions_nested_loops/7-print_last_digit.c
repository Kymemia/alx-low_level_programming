#include "main.h"

/**
 * Function print_last_digit - prints last digit of number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int lastLast;

	lastLast = num % 10;
	_putchar(lastLast + '0');

	return (lastLast);
}
