#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

/**
 * struct dog - Describe a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: No more info.
 */
struct dog
{
	char *name;
	double age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
