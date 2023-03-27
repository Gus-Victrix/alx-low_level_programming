#include "main.h"

/**
 * _strlen - Finds the length of input string.
 * @s: String whose length is to be returned.
 * Return: Length of input string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		i++;
		s++;
	}

	return (i);
}
