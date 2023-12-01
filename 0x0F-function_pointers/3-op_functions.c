#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * op_add - adds two values
 * @a: int to be checked
 * @b: int to be checked
 * Return: sum of values
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: int to be checked
 * @b: int to be checked
 * Return: Subtracted value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two values
 * @a: int to be checked
 * @b: int to be checked
 * Return: product value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: numerator value
 * @b: denominator value
 * Return: Correct value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return (a / b);
}
/**
 * op_mod - calculates modulus
 * @a: int to be checked
 * @b: int to be checked
 * Return: modulus value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return (a % b);
}
