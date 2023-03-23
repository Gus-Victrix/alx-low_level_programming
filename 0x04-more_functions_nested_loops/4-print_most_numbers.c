#include "main.h"

/**
 * print_most_numbers - Prints all single digit numbers apart from 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + '0');
	}
	_putchar('\n');
}
