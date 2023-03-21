#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by newline using _putchar.
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return;
}
