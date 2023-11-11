#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * product - gives product of 2 numbers
 * @a: int to be checked
 * @b: int to be checked
 * Return: Error if code doesn't receive arguments,
 * else returns said product
 */
int product(int a, int b)
{
	return (a * b);
}

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n",  product(a,b));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
				
