#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int bilbo;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		bilbo = (len - 1) / 2;
		bilbo++;
	}
	else
	{
		bilbo = len / 2;
	}
	while (str[bilbo] != '\0')
	{
		_putchar(str[bilbo]);
		bilbo++;
	}
	_putchar('\n');
}
