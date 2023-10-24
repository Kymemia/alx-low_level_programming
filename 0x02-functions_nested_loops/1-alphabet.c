#include "main.h"

/**
 * main - check the code
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
}
