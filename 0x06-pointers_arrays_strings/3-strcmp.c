#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: prints compared string
 */
int _strcmp(char *s1, char *s2)
{
	int ww = 0;

	while (s1[ww] == s2[ww] && s1[ww] != '\0' && s2[ww] != '\0')
	{
		ww++;
	}
	return (s1[ww] - s2[ww]);
}
