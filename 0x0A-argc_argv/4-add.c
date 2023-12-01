#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: int to be checked
 * @argv: int to be checked
 * Return: 0 if no number is passed,
 * Error if number has symbols,
 * else returns sum
 */
int main(int argc, char *argv[])
{
	int x = 1;
	unsigned int s = 0;
	unsigned int sum = 0;
	char *rr;

	if (argc > 1)
	{
		while (x < argc)
		{
			rr = argv[x];
			s = 0;
			while (s < strlen(rr))
			{
				if (rr[s] < '0' || rr[s] > '9')
				{
					printf("Error\n");
					return (1);
				}
				s++;
			}
			sum += atoi(rr);
			x++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
