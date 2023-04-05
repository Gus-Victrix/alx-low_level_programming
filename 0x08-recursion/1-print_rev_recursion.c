#include "main.h"

/**
 * _print_rev_recursion - Prints reversed string using recursion.
 *
 * @s: String to be reversed.
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
