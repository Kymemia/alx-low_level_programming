#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n: int to be checked
 * Return: 0 if n == 0
 * else returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int x = 0;

	if (n != 0)
	{
		va_start(args, n);
	}
	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
