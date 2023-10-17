#include "main.h"
#include <string.h>
/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int ll = strlen(s);
	int yy = 0;

	if (s != NULL)
	{
		for (yy = 0; yy < ll / 2; yy++)
		{
			char temp = s[yy];

			s[yy] = s[ll - yy - 1];
			s[ll - yy - 1] = temp;
		}
	}
}
