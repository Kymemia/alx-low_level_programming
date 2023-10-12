#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: int to be added
 * @nat: int to be input
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int nat;
	
	for (nat = n; nat <= 98; nat++)
	{
		printf("%d", &nat);
		if (nat < 98)
		{
			_putchar(", ");
		}
	}
	printf("\n");
}
