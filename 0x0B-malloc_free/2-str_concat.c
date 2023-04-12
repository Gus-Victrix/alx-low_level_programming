#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - Concatenate 2 input strings.
 *
 * @s1: First input string.
 * @s2: Sexond input string.
 *
 * Return: 0 if issues, pointer to combined string otherwise.
 */

char *str_concat(char *s1, char *s2)
{
	char *str = 0;
	int len1, len2, ttlen, i;

	if (!s1)
		len1 = 0;
	else
		len1 = _strlen(s1);

	if (!s2)
		len2 = 0;
	else
		len2 = _strlen(s2);

	ttlen = len2 + len1;
	str = (char *)malloc(sizeof(char) * ttlen + 1);

	if (!str)
		return (0);

	for (i = 0; i < len1; i++)
		*(str + i) = *(s1 + i);
	for (i = 0; i < len2; i++)
		*(str + len1 + i) = *(s2 + i);
	*(str + len1 + len2) = 0;
	return (str);

}

/**
 * _strlen - Measure input string.
 *
 * @s: String input.
 *
 * Return: length of input string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s)
		s++, i++;
	return (i);
}
