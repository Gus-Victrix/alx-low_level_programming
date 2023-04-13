#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 * string_nconcat - Concatenates n characters of s2 with s1 and then terminates
 *					the string with null.
 *
 * @s1: First string.
 * @s2: Second string from which n bytes are to be obtained.
 * @n: Number of bytes of s2 to be added to end of s1.
 *
 * Description: If NULL is passed, treats it as if empty string passed.
 *				If n >= length of s2, uses entire s2 string.
 *
 * Return: Address of memory containing the output string. NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = 0;
	int i = 0, j = 0;

	if (!s1 && !s2)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	if (!s1)
		goto PLAIN_S2;
	if (!s2)
		goto PLAIN_S1;
	if (_strlen(s2) < (int) n)
	{
		str = malloc(_strlen(s1) + _strlen(s2) + 1);
		if (!str)
			return (0);
		while (*(s1 + j))
		{
			*(str + j) = *(s1 + j);
			j++;
		}
		while (*(s2 + i))
		{
			*(str + j + i) = *(s2 + i);
			i++;
		}
		*(str + j + i) = 0;
		return (str);
	}

	if (_strlen(s2) >= (int) n)
	{
		str = malloc(_strlen(s1) + (int) n + 1);
		if (!str)
			return (0);
		while (*(s1 + j))
		{
			*(str + j) = *(s1 + j);
			j++;
		}
		while (j < (int) n)
		{
			*(str + j + i) = *(s2 + i);
			i++;
		}
		*(str + j + i) = 0;
		return (str);
	}
PLAIN_S1:
	str = malloc(_strlen(s1) + 1);
	if (!str)
		return (0);
	while (*(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	*(str + i) = 0;
	return (str);
PLAIN_S2:
	str = malloc(n + 1);
	if (!str)
		return (0);
	while (*(s2 + i) && i < (int) n)
	{
		*(str + i) = *(s2 + i);
		i++;
	}
	*(str + i) = 0;
	return (str);
}

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
