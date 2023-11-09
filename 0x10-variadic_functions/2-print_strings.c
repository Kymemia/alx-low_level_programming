#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by \n
 * @separator: char to be checked
 * @n: int to be checked
 * Return: printed string
 * else don't print if separator is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
	}
	for (x = 0; x < n; ++x)
	{
		char *string = va_arg(args, char *);

		if (string == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", string);
	}
	if (x != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(args);
	}
	printf("\n");
}

