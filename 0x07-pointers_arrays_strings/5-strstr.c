#include "main.h"

/**
 * _strstr - Returns pointer to first occurence of substring given in input.
 *
 * @haystack: String to be checked.
 * @needle: Substring to be found.
 *
 * Return: Pointer to first occurence of needle in haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	char *mark = haystack;
	unsigned int i;

	if (!mark)
		return (mark);

	while (*mark)
	{
		if (*mark == *needle)
			for (i = 0; needle[i] == mark[i]; i++)
			{
				if (!needle[i + 1])
					return (mark);
			}
		mark++;
	}
	mark = 0;

	return (mark);
}
