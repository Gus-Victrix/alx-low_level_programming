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
	n %= 10;
	((n < 0) ? (n *= -1) : (n));

	_putchar(n + '0');

	return (n);
}
