#include "main.h"

/**
 * _strpbrk - returns pointer to first occurence characters in accept.
 *
 * @s: String to be searched.
 * @accept: Set of characters to be searched for.
 *
 * Return: Pointer to first occurence of set accept in s; NULL otherwise.
 */

char *_strpbrk(char *s, char *accept)
{
	char *address = s;
	int i;

	while (*address)
	{
		for (i = 0; accept[i] ; i++)
			if (*address == accept[i])
				return (address);
		address++;
	}
	if (!*address)
		address = 0;

	return (address);
}
