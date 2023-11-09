#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: char to be checked
 * @n: int to be checked
 * Return: If separator is null, don't print
 * else print numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
	}
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));

		if (x != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
