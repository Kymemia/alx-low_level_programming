#include "main.h"

/**
 * _puts - prints out string
 * @str: string in its entirety
 */

void _puts(char *str)
{
	for (; *str != '\0'; ++str)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
