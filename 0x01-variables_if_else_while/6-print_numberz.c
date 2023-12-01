#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tifosi = 0;

	while (tifosi < 10)
	{
		putchar (tifosi + '0');
		tifosi++;
	}
	putchar ('\n');

	return (0);
}
