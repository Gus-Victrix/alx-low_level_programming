#include "main.h"

/**
 * _strlen - Finds the length of input string.
 * @s: String whose length is to be returned.
 * Return: Length of input string.
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != 0; i++)
		continue;

	return (i);
}
