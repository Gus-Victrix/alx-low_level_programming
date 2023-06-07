#include "main.h"

/**
 * _print_rev_recursion - Prints a reversed string.
 *
 * @s: String to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (!s)
		return;
	if (*s)
	{
		_print_rev_recursion(s + sizeof(char));
		_putchar(*s);
	}
}
