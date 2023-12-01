#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 */
char *str_concat(char *s1, char *s2)
{
	int ss1 = 0;
	int ss2 = 0;
	int i;
	int g;
	char *catcat;

	if (s1)
	{
		ss1 = strlen(s1);
	}
	if (ss2)
	{
		ss2 = strlen(s2);
	}
	catcat = malloc(ss1 + ss2 + 1);

	if (catcat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ss1; i++)
	{
		catcat[i] = s1[i];
	}
	for (g = 0; g < ss2; g++)
	{
		catcat[i + g] = s2[g];
	}
	catcat[i + g] = '\0';

	return (catcat);
}
