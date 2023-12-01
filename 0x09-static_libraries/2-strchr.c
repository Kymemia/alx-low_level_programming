#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be worked on
 * @c: string to be worked on
 * Return: NULL if string isn't found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
	{
		return (s);
	}
	}
	return (NULL);
}
