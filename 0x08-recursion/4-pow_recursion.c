#include "main.h"

/**
 * _pow_recursion - Computes the y exponent of x.
 *
 * @x: Integer to be raised to power y.
 * @y: Integer power to which x is to be raised.
 *
 * Return: y exponent of x.
 */

int _pow_recursion(int x, int y)
{
	if (!y)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y--));
}
