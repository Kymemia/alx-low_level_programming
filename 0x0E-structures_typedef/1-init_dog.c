#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variable of struct dog
 * @name: char to be checked
 * @age: float to be checked
 * @owner: char to be checked
 * @d: structure to be checked
 */
void init_dog(struct dog *d, const char *name, float age, const char *owner)
{
	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		d->owner = malloc(strlen(owner) + 1);
		if (d->name != NULL && d->owner != NULL)
		{
			strncpy(d->name, name, sizeof(d->name) - 1);
			d->name[sizeof(d->name) - 1] = '\0';
			d->age = age;

			strncpy(d->owner, owner, sizeof(d->owner) - 1);
			d->owner[sizeof(d->owner) - 1] = '\0';
		}
		else
		{
			if (d->name != NULL)
			{
				free(d->name);
				d->name = NULL;
			}
			if (d->owner != NULL)
			{
				free(d->owner);
				d->owner = NULL;
			}
		}
	}
}
