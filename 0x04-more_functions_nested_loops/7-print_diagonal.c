#include "main.h"

/**
 * print_diagonal - Prints a diagonal input-specified size using '\'
 * @n: Length of diagonal
 */

void print_diagonal(int n);
{
	int i;
	int j;

	if (n <= 0)
		_putchar(10);
	for (i = 0; i < n; ++i)
	{
		for (j = i; j > 0; j--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
