#include "main.h"
#include <string.h>
/**
 * _strncpy - copies string
 * @dest: string to be copied
 * @src: string to be copied
 * @n: string to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ww = 0;

	while (src[ww] != '\0')
	{
		dest[ww] = src[ww];
		ww++;
	}
	dest[ww] = '\0';
	dest[ww + n] = '\0';
	return (dest);
}
