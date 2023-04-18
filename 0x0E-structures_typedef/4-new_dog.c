#include "dog.h"
#include <stdlib.h>

int _strlen(char *s)
{
	int i = 0;

	while (*s)
		s++, i++;
	return (i)
}
/**
 * new_dog - Creates a new dog.
 *
 * @name: Name of new dog.
 * @age: Age of new dog.
 * @owner: Name of the new dog's owener.
 *
 * Return: Pointer to new dog instance if successful, null otherwise.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i;
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->age = age;
	for (len_name = 0; *(name + len_name); len_name++)
		;
	for (len_owner = 0; *(owner + len_owner); len_owner++)
		;
	new_dog->name = malloc(len_name * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(len_owner * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
