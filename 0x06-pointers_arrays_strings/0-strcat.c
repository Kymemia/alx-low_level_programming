#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
*/
char *_strcat(char *dest, char *src)
{
	int destH, ww;

	while (dest[destH] != '\0')
	{
		destH++;
	}
	for (ww = 0; src[ww] != '\0'; ww++)
	{
		dest[destH + ww] = src[ww];
	}
	dest[destH + ww] = '\0';

	return (dest);
}
