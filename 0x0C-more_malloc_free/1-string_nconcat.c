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
	long int i = 0, j = 0;

	/*Case: both strings null*/
	if (!s1 && !s2)
	{
		str = malloc(sizeof(*str));
		/*Returning empty string*/
		*str = '\0';
		return (str);
	}

	/*Case: only string 1 is null*/
	if (!s1)
	{
		str = malloc(sizeof(*str) * (n + 1));
		if (!str)
			return (0);
		/*Copying string 2*/
		while (*(s2 + i) && i < (int) n)
		{
			*(str + i) = *(s2 + i);
			i++;
		}
		/*Adding null terminator to end of string*/
		*(str + i) = 0;
		return (str);
	}

	/*Case: only string 2 is null*/
	if (!s2)
	{
		str = malloc(sizeof(*str) * (_strlen(s1) + 1));
		if (!str)
			return (0);
		/*Copying string 1*/
		while (*(s1 + i))
		{
			*(str + i) = *(s1 + i);
			i++;
		}
		/*Adding null terminator to end of string*/
		*(str + i) = 0;
		return (str);
	}

	/*Case: String 2 smaller than n characters*/
	if (_strlen(s2) < (int) n)
	{
		str = malloc(sizeof(*str) * (_strlen(s1) + _strlen(s2) + 1));
		/*Checking malloc() output*/
		if (!str)
			return (0);
		/*Copying string 1*/
		while (*(s1 + j))
		{
			*(str + j) = *(s1 + j);
			j++;
		}
		/*Copying string 2*/
		while (*(s2 + i))
		{
			*(str + j + i) = *(s2 + i);
			i++;
		}
		/*Adding null termination to string*/
		*(str + j + i) = 0;
		return (str);
	}

	/*Case: String 2 is longer than n*/
	str = malloc(sizeof(*str) * (_strlen(s1) + (int) n + 1));
	if (!str)
		return (0);
	/*Copying string 1*/
	while (*(s1 + j))
	{
		*(str + j) = *(s1 + j);
		j++;
	}
	/*Copying string 2*/
	while (j < (int) n)
	{
		*(str + j + i) = *(s2 + i);
		i++;
	}
	/*Adding null terminator*/
	*(str + j + i) = 0;
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
