#include "main.h"
/**
 * wildcmp - compares 2 strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && s2[1] == '\0')))
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (s1[0] && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
