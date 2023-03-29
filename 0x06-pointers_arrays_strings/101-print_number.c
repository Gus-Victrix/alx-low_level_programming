#include "main.h"

/**
 * print_number - print an inputed number using only _putchar
 *
 * @n: inputed number to print
 *
 * Return: Anuthing, cause void function
 */
void print_number(int n)
{
	unsigned int number;

	if (n >= 0)
	{
		number = n;
	}
	else
	{
		_putchar(45);
		number = -n;
	}
	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar(number % 10 + '0');
}
