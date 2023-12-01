#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: int to be checked
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int uno = 0;
	unsigned int dos = 0;
	unsigned int both = 0;
	char *catt;

	while (s1[uno] != '\0')
	{
		uno++;
	}
	while (s2[dos] != '\0' && dos < n)
	{
		dos++;
	}
	both = uno + dos;
	catt = malloc(both + 1);

	if (catt == NULL)
	{
		return (NULL);
	}
	uno = 0;
	dos = 0;

	while (s1[uno] != '\0')
	{
		catt[uno] = s1[uno];
		uno++;
	}
	while (s2[dos] != '\0' && dos < n)
	{
		catt[uno] = s2[dos];
		uno++;
		dos++;
	}
	catt[both] = '\0';
	return (catt);
}
