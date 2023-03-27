#include "main.h"

/**
 * print_rev - Prints the reverse of a string.
 * @s: Character string to be reversed.
 */

void print_rev(char *s)
{
	char *tmp = s;

	while (*s != 0)
		s++;
	do {
		_putchar(*s);
		s--;
	} while (s != tmp);
	_putchar(10);
}
