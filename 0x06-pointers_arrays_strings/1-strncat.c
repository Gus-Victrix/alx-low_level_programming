#include "main.h"

int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - Concatanate 2 string up to a inputed size
 *
 * @dest: Destination of the concatenation
 * @src: String to concatenate
 * @n: Inputed size
 *
 * Return: The new string
 */

char *_strncat(char *dest, char *src, int n)
{
	/*     i : Index for dest, j : Index for src     */

	int i, j;
	int sizeDest = _strlen(dest), globalSize = sizeDest + _strlen(src);

	sizeDest + n < globalSize ? globalSize = sizeDest + n : 0;

	for (i = _strlen(dest), j = 0 ; i < globalSize; i ++, j++)
	{
		dest[i] = src[j];
	}

	dest[i + 1] = '\0';

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
