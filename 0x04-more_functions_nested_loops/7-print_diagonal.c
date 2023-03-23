#include "main.h"

/**
 * print_diagonal - Prints a diagonal input-specified size using '\'
 * @n: Length of diagonal
 */

void print_diagonal(int n);
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
				_putchar(32);
			_putchar(92);

			if (length == n - 1)
				continue;

			_putchar(10);
		}
	}

	_putchar(10);
}
