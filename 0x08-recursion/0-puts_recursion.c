#include "main.h"

/**
 * _puts_recursion - Prints a character string followed by newline.
 *
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
