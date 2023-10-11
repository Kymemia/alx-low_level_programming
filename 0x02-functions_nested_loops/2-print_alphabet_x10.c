#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter;
	int freq;

	for (freq = 0; freq < 10; freq++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
	}
}
