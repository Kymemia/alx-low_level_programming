#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
