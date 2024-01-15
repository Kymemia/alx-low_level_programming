#include "main.h"

/**
 * _abs - computes absolute value of integer
 *
 * @fig: integer to be computed
 *
 * Return: absolute value
 */

int _abs(int fig)
{
	if (fig < 0)
		return (-fig);
	return (fig);
}
