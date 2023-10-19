#include "main.h"
#include <ctype.h>
/**
 * string_toupper - prints string in uppercase
 * @str: string to be converted
 * Return: converted string
 */
char *string_toupper(char *str)
{
	char *st = str;

	for (; *str != '\0'; str++)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = toupper(*str);
		}
	}
	return (st);
}
