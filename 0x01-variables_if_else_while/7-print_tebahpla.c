#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char loki = 'z';

	while (loki >= 'a')
	{
		putchar(loki);
		loki++;
	}
	putchar('\n');
	return (0);
}
