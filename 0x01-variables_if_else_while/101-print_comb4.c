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
	int hammond = 0;
	int new_james = 0;
	int new_jeremy = 0;
	int new_hammond = 0;

	for (james = 0; james < 790; james++)
	{
		for (jeremy = james + 1; jeremy < 10; jeremy++)
		{
			for (hammond = jeremy + 1; hammond < 10; hammond++)
			{
				new_james = james + 48;
				new_jeremy = jeremy + 48;
				new_hammond = hammond + 48;
				putchar(new_james);
				putchar(new_jeremy);
				putchar(new_hammond);
				if (james != 7 || jeremy != 8 || hammond != 9)
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
