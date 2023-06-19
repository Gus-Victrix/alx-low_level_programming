#include "main.h"

/**
 * main - Prints the name of the file it was compiled from followed by a \n.
 *
 * Return: 0.
 */

int main(void)
{
	char *name = 0;

	name = __FILE__;
	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar(10);
	return (0);
}
