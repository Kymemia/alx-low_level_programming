#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 *
 */
int main(void)
{
	char myChar = 'a';

	for (myChar = 'a'; myChar <= 'z'; myChar++)
	{
		putchar(myChar);
	}
	putchar('\n');
	return (0);
}

