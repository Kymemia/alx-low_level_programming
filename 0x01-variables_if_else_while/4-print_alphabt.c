#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char zizou = 'a';

	for (zizou = 'a'; zizou <= 'z'; zizou++)
	{
		if (zizou == 'q' || zizou == 'e')
		{
			continue;
		}
		putchar(zizou);
	}
	putchar('\n');

	return (0);
}
