#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 using _putchar()
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar(n + '0');
	_putchar('\n');
}
