#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 */
void *malloc_checked(unsigned int b)
{
	void *prr;
	
	prr = malloc(10 * sizeof(b));
	if (prr == NULL)
	{
		exit(98);
	}
	return(prr);
}
