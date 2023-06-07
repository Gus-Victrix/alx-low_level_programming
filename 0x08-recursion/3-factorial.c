#include "main.h"

/**
 * factorial - Calculates the factorial of the input integer.
 *
 * @n: The number whose factorial is to be calculated.
 *
 * Return: The factorial of the input number. -1 if error encountered.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	return (factorial(n - 1) * n);
}
