#include "variadic_functions.h"


void print_int(va_list);
void print_float(va_list);
void print_char(va_list);
void print_str(va_list);


/**
 * print_all - Prints all possible argument types.
 *
 * @format: String containing passed types of arguments.
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator = "";

	va_list print;

	format_str p[] = {
	{"c", print_char},
	{"s", print_str},
	{"i", print_int},
	{"f", print_float},
	{NULL, NULL}
	};

	va_start(print, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (p[j].type)
		{
			if (*p[j].type == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				p[j].f(print);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(print);
	putchar('\n');
}

/**
 * print_int - Print an int
 *
 * @print: Int to print.
 */

void print_int(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 * print_float - Print a float
 *
 * @print: Float to print
 */

void print_float(va_list print)
{
	printf("%f", va_arg(print, double));
}

/**
 * print_char - Print a char
 *
 * @print: Char to print
 */

void print_char(va_list print)
{
	printf("%c", va_arg(print, int));
}

/**
 * print_str - Print a str
 *
 * @print: String to print.
 */

void print_str(va_list print)
{
	char *str = va_arg(print, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
