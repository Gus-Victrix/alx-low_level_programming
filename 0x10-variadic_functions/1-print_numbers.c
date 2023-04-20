#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Print a list of given values, separated by a given separator
 *
 * @separator: Separator between nums
 * @n: Number of input values
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(nums);
}
