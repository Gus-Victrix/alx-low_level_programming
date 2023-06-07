#include "main.h"

/**
 * _pow_recursion - Returns the y exponent of x.
 *
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: -1 if there's an error. The y exponent of x otherwise.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
