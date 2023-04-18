#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

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


int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

endif /*DOG_H*/
