#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts first number of a string to an integer.
 *
 * @s: String input.
 *
 * Return: intger in string if any, 0 otherwise.
 */

int _atoi(char *s)
{
	int counter = 0, sign = 1;
	unsigned int num = 0;

	while ((s[counter] > '9' || s[counter] < '0') && s[counter] != 0)
	{
		if (s[counter] = '-')
			sign *= -1;
		counter++;
	}
	while (s[counter] <= '9' && s[counter] >= '0')
	{
		num = num * 10 + (s[counter] - 48);
		counter++;
	}
	return (num * sign);
}