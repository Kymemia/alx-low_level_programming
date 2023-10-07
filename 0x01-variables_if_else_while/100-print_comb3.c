#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int atrani = 0;

	for (atrani = 0; atrani < 90; atrani++)
	{
		if (atrani % 10 != 0)
		{
			putchar((atrani / 10) + '0');
			putchar((atrani % 10) + '0');
			if (atrani < 90)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
