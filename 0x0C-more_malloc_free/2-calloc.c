#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: int to be checked
 * @size: int to be checked
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ham;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ham = malloc(nmemb * size);

	if (ham == NULL)
	{
		return (NULL);
	}
	memset(ham, 0, nmemb * size);
	return (ham);
}
