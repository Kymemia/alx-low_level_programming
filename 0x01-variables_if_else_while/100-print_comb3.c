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
	int dos = 0;
	int new_atrani = 0;
	int new_dos = 0;

	for (atrani = 0; atrani < 90; atrani++)
	{
		for (dos = atrani + 1; dos < 10; dos++)
		{
			new_atrani = atrani + 48;
			new_dos = dos + 48;
			putchar(new_atrani);
			putchar(new_dos);
			if (atrani != 8 || dos != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
