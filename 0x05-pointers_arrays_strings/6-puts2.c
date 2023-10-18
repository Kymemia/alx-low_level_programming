#include "main.h"
/**
 * puts2 - prints every other character,
 * starting with first character
 * then a new line
 * @str: string to be used
 */
void puts2(char *str)
{
	int yy = 0;

	while (str[yy] != '\0')
	{
		_putchar(str[yy]);
		yy += 2;
	}
	_putchar('\n');
}
