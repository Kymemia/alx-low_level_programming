#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 * Union: array to access bytes,
 * variable to store unsigned int
 */
int get_endianness(void)
{
	union
	{
		unsigned char byte[4];
		unsigned int m;
	} u;
	u.m = 1;

	if (u.byte[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
