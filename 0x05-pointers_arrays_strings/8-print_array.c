#include "main.h"
/**
 * print_array - prints elements of array
 * @a: pointer of array
 * @n: integer to be printed
 */
void print_array(int *a, int n)
{
	int rr;

	for (rr = 0; rr < n; ++rr)
	{
		printf("%d", a[rr]);
		if (rr < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
