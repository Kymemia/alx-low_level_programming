#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks the program
 * @argc: int to be checked
 * @argv: char to be checked
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
