#include "main.h"

int _strlen(char *s);
char *_strcat(char *dest, char *src);

/**
 * _strcat - Concatanate 2 string
 *
 * @dest: Destination of the concatenation
 * @src: String to concatenate
 *
 * Return: The new string
 */

char *_strcat(char *dest, char *src)
{
	/*     i : Index for dest, j : Index for src     */

	int i, j, size = _strlen(dest) + _strlen(src);

	for (i = _strlen(dest), j = 0 ; i < size; i ++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}

/**
 * _strlen - Calculate the length of a string.
 *
 * @s: String to manipulate.
 *
 * Return: The length of the inputed string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
