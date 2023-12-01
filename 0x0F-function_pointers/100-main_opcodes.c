#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: int to be checked
 * @argv: char to be checked
 * Return: error if number isn't correct,
 * 2 if number of bytes is negative,
 * 0 if code is successful
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*address)(int, char**) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i < bytes - 1)
		{
			printf(" ");
		}

		address++;
	}
	printf("\n");

	return (0);
}
