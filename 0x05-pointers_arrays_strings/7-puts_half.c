#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: String to be measured.
 * Return: Length of input string.
 */

int _strlen(char *s)
{
	int i;
	
	for (i = 0; s[i] != 0; i++)
		continue;
	return (i);
}

/**
 * puts_half - Prints the second half of a string.
 * @str: String input.
 */

void puts_half(char *str)
{
	int length - _strlen(str);
	int half;

	for (half = (length + 1) / 2; half < length; half++)
		_putchar(str[half]);
	_putchar(10);
}
