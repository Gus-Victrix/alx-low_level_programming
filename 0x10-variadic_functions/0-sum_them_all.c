#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Sum all the arg given
 *
 * @n: number of given arg
 *
 * Return: the sum of all given arg, 0 else
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list param;

	if (n == 0)
		return (0);

	va_start(param, n);

	for (i = 0; i < n; i++)
		sum += va_arg(param, int);

	va_end(param);
	return (sum);
}
