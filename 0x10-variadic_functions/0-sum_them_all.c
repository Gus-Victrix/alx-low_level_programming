#include "variadic_functions.h"
/**
 * sum_them_all - Sums up all integral parameters.
 *
 * @n: Number of input integers
 *
 * Return: Sum of input parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (!n)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
