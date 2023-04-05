#include "main.h"

/**
 * factorial - Computes the factorial of input number.
 *
 * @n: The input number.
 *
 * Return: The factorial of the input number; -1 if input less than 0.
 */

int factorial(int n)
{
	if (!n || n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
