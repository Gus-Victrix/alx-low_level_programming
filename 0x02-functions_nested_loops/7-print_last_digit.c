#include "main.h"

/**
 * print_last_digit - prints the last digit of input number.
 *
 * @n: This is the input number whose last digit is to be printed.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	n %= 10;

	_putchar(n + '0');

	return (0);
}
