#include "main.h"

/**
 * _strcmp - Compares value of two strings.
 *
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: Ascii value of s1 - Ascii vlue of s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (!(*(s1 + i)) || !(*(s2 + i)))
			break;
		i++;
	}

	return (*(s1 + i) - *(s2 + i));
}
