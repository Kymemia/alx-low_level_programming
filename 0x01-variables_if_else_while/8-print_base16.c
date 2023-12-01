#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int berk = 0;

	for (berk = 0; berk <= 15; berk++)
	{
		if (berk < 10)
		{
			putchar(berk + '0');
		}
		else
		{
			putchar(berk - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
