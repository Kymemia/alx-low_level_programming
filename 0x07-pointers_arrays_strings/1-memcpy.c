#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: character to be copied
 * @src: character to be copied
 * @n: integer to be checked
 * Return: Returns copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ww = 0;

	do {
		dest[ww] = src[ww];
		ww++;
	} while(ww < n);
	return (dest);
}
