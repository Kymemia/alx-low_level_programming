#include <stdio.h>

/**
 * main - Entry point
 * optimusPrime - works out largest prime factor
 * Return: Always 0 (Success)
 */

long optimusPrime(long stretch)
{
	long big_tinng = -1, pm = 2;

	while (pm * pm <= stretch)
	{
		if (stretch % pm == 0)
		{
			stretch = stretch / pm;
			big_tinng = pm;
		}
		else
		{
			pm = pm + 1;
		}
	}
	if (stretch > 1)
	{
		big_tinng = stretch;
	}
	return (big_tinng);
}

int main(void)
{
	long num = 612852475143;

	printf("The largest prime factor of %ld is: %ld\n", num, optimusPrime(num));
	return (0);
}
