#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates string
 * @str: string to be duplicated
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	char *clone;

	if (str == NULL)
	{
		return (NULL);
	}
	clone = strdup(str);

	if (clone == NULL)
	{
		return (NULL);
	}
	return (clone);
}
