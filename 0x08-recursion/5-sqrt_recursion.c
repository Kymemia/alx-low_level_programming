#include "main.h"
/**
 * get_sqrt - get sq. root recursively
 * @n: int to be checked
 * @hgn: int to be checked
 * Return: natural square root
 * _sqrt_recursion - gets square root
 */
int get_sqrt(int n, int hgn)
{
	if (hgn * hgn == n)
	{
		return (hgn);
	}
	if (hgn * hgn > n)
	{
		return (-1);
	}
	return (get_sqrt(n, hgn + 1));
}
/**
 * _sqrt_recursion - gets the square root of n
 * @n: int to be checked
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (get_sqrt(n, 1));
}
