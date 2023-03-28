#include "main.h"

/**
 * _strlen - Finds length of input string.
 * @s: String to be measured.
 * Return: Length of iput string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		continue;
}

/**
 * print_rev - Prints the reverse of a string.
 * @s: Character string to be reversed.
 */

void print_rev(char *s)
{
	int length;

	for (length = _strlen(s) -1; length >= 0; length--)
		_putchar(s[length]);
	_putchar(10);
}
{
	char *tmp = s;

	while (*s != 0)
		s++;
	do {
		_putchar(*s);
		s--;
	} while (s != tmp - 1);
}
