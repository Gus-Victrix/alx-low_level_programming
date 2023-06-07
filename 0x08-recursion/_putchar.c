#include "main.h"

/**
 * _putchar - Writes a character to the console.
 *
 * @c: Character to be printed.
 *
 * Return: 0 upon success.
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
