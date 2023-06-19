#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated to dog_t instance.
 *
 * @d: Pointer to dog_t type instance.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
