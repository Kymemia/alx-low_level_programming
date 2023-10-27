#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int destH = 0;
	int ww = 0;

	while (dest[destH] != '\0')
	{
		destH++;
	}
	while (src[ww] != '\0')
	{
		dest[destH + ww] = src[ww];
		ww++;
	}
	dest[destH + ww] = '\0';

	return (dest);
}
