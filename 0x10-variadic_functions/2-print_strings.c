#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print all input strings.
 *
 * @separator: String separators.
 * @n: Number of strings.
 *
 * Return: Anything, cause void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list _str;

	va_start(_str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(_str, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(_str);
}
