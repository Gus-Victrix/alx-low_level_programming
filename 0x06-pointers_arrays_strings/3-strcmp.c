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
	int result = 0;
	int i;

	for (i = 0; *(s1 + i) != 0; i++)
		result += *(s1 + i);
	for (i = 0; *(s2 + i) != 0; i++)
		result -= *(s2 + i);

	return (result);
}
