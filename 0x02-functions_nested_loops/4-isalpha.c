#include "main.h"

/**
 * Function _isalpha - Checks for alphabetic char.
 * parameter C - character to be checked
 * Return: 1 if char. Return 0 otherwise.
 */

int _isalpha(int c);
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
