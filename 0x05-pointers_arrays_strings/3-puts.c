#include "main.h"

/**
 * _puts - Prints input string followed by newline to stdout.
 * @str: String to be printed.
 */

void _puts(char *str)
{
	while(*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
