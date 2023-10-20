#include "main.h"
#include <unistd.h>
/**
 * print_number - prints integer
 * @n: integer to be checked
 */
void print_number(int n)
{
	write(1, &n, 1);
}

