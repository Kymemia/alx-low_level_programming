#include <stdio.h>

/**
 * main - entry point
 * Description: prints sum of even-valued terms in Fibonacci sequence
 * Return: 0
 */

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
