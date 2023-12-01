#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with constant byte
 * @s: character to be worked on
 * @b: char to be worked on
 * @n: int to be worked on
 * Return: Returns modified character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ww = 0;

	do {
		s[ww] = b;
		ww++;
	} while (ww < n);
	return (s);
}
