#include "main.h"

/**
 * print_line - Uses '_' to create a line of input length
 * @n: The length of the line to be printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar(10);
}
