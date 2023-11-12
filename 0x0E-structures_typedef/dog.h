#include <stdlib.h>
#include <string.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, const char *name, float age, const char *owner)
{
	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		strcpy(d->name, name);
		d->age = age;

		d->owner = malloc(strlen(owner) + 1);
		strcpy(d->owner, owner);
	}
}
