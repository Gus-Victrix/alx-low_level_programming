#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate 2 strings into a new one
 *
 * @s1: String one
 * @s2: Strign two
 * @n: Size of interest in s2
 *
 * Return: 0 if issues, pointer to new str else (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i;

	if (s1 == 0)
		len1 = 0;
	else
	{
		for (len1 = 0; *(s1 + len1); len1++)
			;
	}
	if (s2 == 0)
		len2 = 0;
	else
	{
		for (len2 = 0; *(s2 + len2); len2++)
			;
	}
	if (n < len2)
		len2 = n;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == 0)
		return (0);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	*(result + len1 + len2) = '\0';
	return (result);
}
