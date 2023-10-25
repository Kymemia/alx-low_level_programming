#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
