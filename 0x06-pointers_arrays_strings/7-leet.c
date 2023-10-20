#include "main.h"
/**
 * leet - changes values of string to integers
 * @str: string to be worked on
 * Return: Returns modified string
*/
char *leet(char *str)
{
	int ww = 0;

	while (str[ww] != '\0')
	{
		char zagadat = str[ww];

		if (zagadat == 'a' || zagadat == 'A')
			str[ww] = '4';
		else if (zagadat == 'e' || zagadat == 'E')
			str[ww] = '3';
		else if (zagadat == 'o' || zagadat == 'O')
			str[ww] = '0';
		else if (zagadat == 't' || zagadat == 'T')
			str[ww] = '7';
		else if (zagadat == 'l' || zagadat == 'L')
			str[ww] = '1';
		ww++;
	}
	return (str);
}
