#include "main.h"

int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);

/**
 * _strncpy - copy the string src to dest, up to a specificate size
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Number of charatere to copy
 *
 * Return: The destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; src[counter] != '\0' && counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
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
