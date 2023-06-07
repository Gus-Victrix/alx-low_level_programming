#include "main.h"

/**
 * _puts_recursion - Prints a string onto the console using recursion.
 *
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (!s)
		return;
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + sizeof(char));
	}
	else
		_putchar('\n');
}
