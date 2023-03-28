#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 *
 * @s: String to be measured.
 * Return: The length of the input string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		continue;
	return (i);
}

/**
 * puts2 - Prints every odd character of a string.
 * @str: Input string.
 */

void puts2(char *str)
{
	int length;

	for (length = 0; length < _strlen(str); length++)
		if (length % 2 == 0)
			_putchar(str[length]);
	_putchar(10);
}
