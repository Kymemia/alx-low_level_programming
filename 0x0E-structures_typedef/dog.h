#ifndef _HEADER_
#define _HEADER_

#include <stdlib.h>
#include <string.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, const char *name, float age, const char *owner);
void print_dog(struct dog *d);
#endif
