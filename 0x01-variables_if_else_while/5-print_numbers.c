#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int q = 0;

	while (q < 10)
	{
		printf("%d", q);
		q++;
	}
	putchar('\n');

	return (0);
}
