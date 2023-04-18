#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct of type dog.
 *
 * @d: Pointer to struct to be printed.
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age : (nil)\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
