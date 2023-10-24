#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes first letter of every word
 * @str: string to be checked
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	char *fangio = str;
	int v = 0;

	if (str != 0 && str[v] >= 'a' && str[v] <= 'z')
	{
		str[v] = toupper(str[v]);
		v++;
	}
	while (str[v] != '\0')
	{
		if ((str[v] >= 'a' && str[v] <= 'z') &&
				(str[v - 1] == ' ' || str[v - 1] == ',' || str[v - 1] == ';'
				 || str[v - 1] == '.' || str[v - 1] == '!' || str[v - 1] == '?'
				 || str[v - 1] == '"' || str[v - 1] == '(' || str[v - 1] ==  '\n'
				 || str[v - 1] == ')' || str[v - 1] == '{' || str[v - 1] == '}'
				 || str[v - 1] == '\t'))
		{
			str[v] = toupper(str[v]);
		}
		v++;
	}
	return (fangio);
}
