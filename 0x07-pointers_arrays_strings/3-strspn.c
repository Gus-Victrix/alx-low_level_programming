#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: String being searched.
 * @accept: Characters contained in prefix string.
 *
 * Return: Number of bytes in initial part of s that match characters in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int steps = 0;
	int scan = 0;
	unsigned char indicator = 1;

	if (!s)
		return (steps);

	while (*(s + steps) && indicator)
	{
		while (accept[scan])
		{
			indicator = 0;

			if (*(s + steps) == accept[scan])
			{
				indicator = 1;
				break;
			}
			scan++;
		}
		if (indicator == 0)
			break;
		scan = 0;
		steps++;
	}

	return (steps);
}
