#include "main.h"

/**
 * print_last_digit - prints the last digit of input number.
 *
 * @n: This is the input number whose last digit is to be printed.
 *
 * Return: The last value of input.
 */
int print_last_digit(int n)
{
	int l;
	if (n < 0)
		n = n * -1;

	n = (n % 10);
	l = n + '0';

	_putchar(l);

	return (n);
}
