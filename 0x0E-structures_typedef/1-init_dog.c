#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 *
 * @d: Pointer to dog structure type.
 * @name: String representing the name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
