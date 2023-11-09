#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: char to be checked
 * @f: char to be checked
 * Return: printed name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
