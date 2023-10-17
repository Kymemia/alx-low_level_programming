#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	_putchar('\n');

	for (z = z - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
}
