#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int to be checked
 * @argv: char to be checked
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char **arg = argv;

	printf("%d\n", argc);
	while (*arg != NULL)
	{
		printf("%s\n", *arg);
		arg++;
	}
	return (0);
}
