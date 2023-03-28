#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src into dest address.
 * @dest: Destination address.
 * @src: Source address.
 * Return; destination address.
 */

char *_strcpy(char *dest, char *src)
{
	int counter, length = _strlen(src);

	for (counter = 0; counter <= length; counter++)
		dest[counter] = src[counter];
	return (dest);
}

/**
 * _strlen - Calculate the length of a string.
 * @s: String to measure length.
 * Return: Length of input string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		continue;
	return (i);
}
