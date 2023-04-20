#ifndef VARARG_H
#define VARARG_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *, const unsigned int, ...);

void print_strings(const char *, const unsigned int, ...);

void print_all(const char * const, ...);

/**
 * struct format_str - Format str
 *
 * @type: Type of the argu
 * @f: Pointer to function to print argu
 */
typedef struct format_str
{
	char *type;
	void (*f)(va_list);
} format_str;

#endif /*VARARG_H*/
