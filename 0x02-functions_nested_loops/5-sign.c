#include "main.h"

/**
 * Function print_sign - prints sign of number
 *
 * int n - character to be checked
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	else if (n < 0)
		_putchar('-');
	return (-1);
	else
		_putchar ('0');
	return (0);
}
