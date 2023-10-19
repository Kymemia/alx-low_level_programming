#include "main.h"
#include <string.h>

/*
 * _strncat - concatenates two strings
 * @dest: string to be concatenated
 * @n: string to be concatenated
 * Return: dest concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destH = 0;
	int ww = 0;

	while (dest[destH] != '\0')
	{
		destH++;
	}
	while (src[ww] != '\0' && ww < n)
	{
		dest[destH + ww] = src[ww];
		ww++;
	}
	dest[destH + ww] = '\0';
	return (dest);
}
