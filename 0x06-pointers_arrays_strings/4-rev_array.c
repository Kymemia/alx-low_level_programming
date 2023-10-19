#include "main.h"
/**
 * reverse_array - reverses integers in an array
 * @a: array to be reversed
 * @n: array to be reversed
 */
void reverse_array(int *a, int n)
{
	int ww;
	int temp;

	for (ww = 0; ww < n / 2; ww++)
	{
		temp = a[ww];
		a[ww] = a[n - ww - 1];
		a[n - ww - 1] = temp;
	}
}
