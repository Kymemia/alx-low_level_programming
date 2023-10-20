#include "main.h"
#include <string.h>
/**
 * _strcpy - function to copy string
 * @dest: string to be copied
 * @src: string to be copied
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int destH = 0;
	int ww = 0;
	int ploombe;

	while (src[ww] != '\0')
	{
		dest[destH + ww] = src[ww];
		ww++;
	}
	for (ploombe = 0; src[ploombe] != '\0'; ploombe++)
	{
		dest[ploombe] = src[ploombe];
	}
	dest[destH + ww] = '\0';
	dest[ploombe] = '\0';
	return (dest);
}
