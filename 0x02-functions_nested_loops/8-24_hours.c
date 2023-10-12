#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar("%02d:%02dn\n", hour, min);
		}
	}
	_putchar('\n');
	return (0);
}
