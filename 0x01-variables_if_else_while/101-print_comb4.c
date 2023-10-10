#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int james = 0;
	int jeremy = 0;
	int richard = 0;
	int new_james = 0;
	int new_jeremy = 0;
	int new_richard = 0;

	for (james = 0; james < 790; james++)
	{
		for (jeremy = james+1; jeremy < 10; jeremy++)
		{
			for (richard = jeremy+1; richard<10; richard++)
			{
				new_james = james + 48;
				new_jeremy = jeremy + 48;
				new_richard = richard + 48;
				putchar(new_james);
				putchar(new_jeremy);
				putchar(new_richard);
				if (james != 7 || jeremy != 9 || richard != 0)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
