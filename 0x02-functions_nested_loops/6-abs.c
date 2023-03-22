#include "main.h"

/**
 * _abs - prints the absolute value of the input
 *
 * @n: this is the input whose absolute value is to be printed.
 *
 * Return: The absolute value of input.
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
