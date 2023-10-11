#include "main.h"

/**
 * main - check the code
 * _islower(int c) - function checks for lowercase character
 *
 * Return: 1 if char is lowercase, else 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
