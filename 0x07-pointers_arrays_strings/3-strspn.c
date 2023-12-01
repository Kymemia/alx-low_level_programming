#include "main.h"
#include <string.h>
/**
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ww = 0;
	int count = 0;
	int get = 0;

	while (s[ww] != '\0')
	{
		for (count = 0; accept[count] != '\0'; count++)
	{
		if (s[ww] == accept[count])
		{
			get = 1;
			break;
		}
		if (get)
		{
			ww++;
		}
		else
		{
			break;
		}
	}
	}
	return (ww);
}
