#include "main.h"
/**
 * factorial - returns factorials of n
 * @n: number to return factorials
 * Return: factorials
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
