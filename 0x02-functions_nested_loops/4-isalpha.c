#include "main.h"
#include <ctype.h>

/**
 * Function _isalpha - Checks for alphabetic char.
 * parameter C - character to be checked
 * Return: 1 if char. Return 0 otherwise.
 */

int _isalpha(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
