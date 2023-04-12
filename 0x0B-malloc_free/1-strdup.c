#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strdup - Duplicate an input string.
 *
 * @str: String to duplicate.
 *
 * Return: 0 if issue encountered, pointer to the new string otherwise.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (!str)
		return (0);
	len = _strlen(str);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == 0)
		return (0);
	for (i = 0; i < len; i++)
		*(dup + i) = *(str + i);
	return (dup);
}

/**
 * _strlen - Measure length of a string.
 *
 * @s: String input
 *
 * Return: Length of input string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s)
		s++, i++;
	return (i);
}
