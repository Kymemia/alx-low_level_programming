#include "main.h"
#include <string.h>
/**
 * _strncpy - copies string
 * @dest: string to be copied
 * @src: string to be copied
 * @n: string to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ww = 0;

	while (src[ww] != '\0' && ww < n)
	{
		dest[ww] = src[ww];
		ww++;
	}
	while (ww < n)
	{
		dest[ww] = '\0';
		ww++;
	}
	return (dest);
}
