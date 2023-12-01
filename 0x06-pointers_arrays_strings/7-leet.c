#include "main.h"
/**
 * leet - changes values of string to integers
 * @str: string to be worked on
 * Return: Returns modified string
*/
char *leet(char *str)
{
	int ww = 0;
	char zagadat;

	while ((zagadat = str[ww]) != '\0')
	{
		switch (zagadat)
		{
			case 'a':
			case 'A':
				str[ww] = '4';
				break;
			case 'e':
			case 'E':
				str[ww] = '3';
				break;
			case 'o':
			case 'O':
				str[ww] = '0';
				break;
			case 'l':
			case 'L':
				str[ww] = '7';
				break;
			default:
				break;
		}
		ww++;
	}
	return (str);
}
