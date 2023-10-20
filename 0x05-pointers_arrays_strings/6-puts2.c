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
	int i;

	while (str[yy] != '\0')
	{
		yy++;
	}
	for ( i = 0; i < yy; i += 2)
	{
		_putchar(str[yy]);
	}
	_putchar('\n');
}
