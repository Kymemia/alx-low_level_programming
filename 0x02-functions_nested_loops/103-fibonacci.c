#include <stdio.h>

/**
 * main - Entry point of code
 * Description: This function prints sum
 * of even-valued terms in Fibonacci sequence
 * Return: sum of even values
 */

long int allaDat(int limit)
{
	long int ef1 = 0;
	long int ef2 = 2;
	long int sum = ef1 + ef2;
	
	if (limit < 2)
		return (0);

	while (ef2 <= limit)
	{
		long int ef3 = 4 * ef2 + ef1;

		if (ef3 > limit)
			break;

		ef1 = ef2;
		ef2 = ef3;
		sum += ef2;
	}

	return (sum);
}

int main(void)
{
	long int daffy = 1;
	long int buggs = 2;
	long int lola = daffy + buggs;
	long int sum = 0;

	printf("%lu, ", daffy);
	printf("%lu, ", buggs);

	while (lola <= 4000000)
	{
		if (lola % 2 == 0)
		{
			printf("%lu\n", lola);
			sum += lola;
		}

		daffy = buggs;
		buggs = lola;

		lola = daffy + buggs;
	}

	printf("%lu\n", lola);
	return (0);
}
