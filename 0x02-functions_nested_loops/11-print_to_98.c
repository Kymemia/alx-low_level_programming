#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: first int to be print
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int nat;

	for (nat = n; nat <= 98; nat++)
	{
		printf("%d\n", nat);
	}
		for (nat = n; nat >= 98; nat--)
		{
		printf("%d\n", nat);
	}
}
