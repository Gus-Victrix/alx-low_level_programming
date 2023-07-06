#include "main.h"

/**
 * print_binary - Print a unsigned long int in binary
 *
 * @n: Unsigned long int
 *
 * Return: Anything, cause void function
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar(((n & 1) ? 1 : 0) + '0');
}
