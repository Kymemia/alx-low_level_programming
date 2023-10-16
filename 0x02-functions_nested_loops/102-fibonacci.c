#include <stdio.h>

/**
 * main - main block
 * Decription: Prints the first 50 fibonacci numbers, starting with 1 and 2
 * separate numbers with a comma and space
 * Return: 0
 */

int main(void)
{
	int count = 3;
	
	long int daffy = 1;
	long int buggs = 2;
	long int lola = daffy + buggs;

	printf("%lu, ", daffy);
	printf("%lu, ", buggs);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu \n", lola);
		}
		else
		{
			printf("%lu, ", lola);
		}

		daffy = buggs;
		buggs = lola;

		lola = daffy + buggs;
		count++;
	}
	return (0);
}
