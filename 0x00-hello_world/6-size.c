#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	puts("Size of a char: %zu byte(s)", sizeof(char));
	puts("Size of in int: %zu byte(s)", sizeof(int));
	puts("Size of a long int: %zu byte(s)", sizeof(long int));
	puts("Size of a long long int: %zu byte(s)", sizeof(long long int));
	puts("Size of float: %zu byte(s)", sizeof(float));
	return (0);
}
