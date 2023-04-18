#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a record for use in recording dog data.
 *
 * @name: This is the name of the dog.
 * @age: This is the age of the dog.
 * @owner: This is the name of the dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog;

#endif /*DOG_H*/
