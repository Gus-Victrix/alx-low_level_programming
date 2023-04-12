#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Find lenght of input string.
 *
 * @s: String whose length is to be calculated.
 *
 * Return: Length of string to be measured.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s)
		s++, i++;
	return (i);
}

/**
 * _strdup - Duplicates string and returns pointer to duplicated string in heap
 *
 * @str: String to be dupllicated.
 *
 * Return: NULL if str = NULL, pointer to duplicate otherwise.
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *dup;

	if (!str)
		return (0);

	i = _strlen(str) + 1;
	dup = (char *)malloc(sizeof(char) * i);
	if (!dup)
		return (0);

	do {
		*(dup + i) = *(str + i);
	} while (*(str + i));

	return (dup);
}
