#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char myChar = 'a';
	char mandemChar = 'A';

	for (myChar = 'a'; myChar <= 'z'; myChar++)
	{
		putchar(myChar);
	}
	for (mandemChar = 'A'; mandemChar <= 'Z'; mandemChar++)
	{
		putchar(mandemChar);
	}
	putchar('\n');

	return (0);
}
