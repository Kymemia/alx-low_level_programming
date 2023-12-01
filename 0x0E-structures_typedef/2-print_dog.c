#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: value to be checked
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		puts("Name:");
		puts((d->name) ? d->name : "(nil)");
		puts("Age:");
		printf("%f\n", (d->age) ? d->age : 0.0);
		puts("Owner:");
		puts((d->owner) ? d->owner : "(nil)");
	}
}
