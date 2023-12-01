#include "main.h"
/**
 * is_prime_number - checks if n is prime number
 * @n: int to be checked
 * Return: 1 if int is prime,
 * 0 if int isn't prime number
 */
int is_prime_number(int n)
{
	int ww;

	if (n <= 1)
	{
		return (0);
	}
		if (n == 2)
		{
			return (1);
		}
		if (n % 2 == 0)
		{
			return (0);
		}
		for (ww = 3; ww * ww <= n; ww += 2)
		{
			if (n % ww == 0)
			{
				return (0);
			}
		}
	return (1);
}
