#include "main.h"

/**
 * print_number - prints any input integer using only _putchar();
 * @n: integer input
 */

void print_number(int n)
{
	int diff = 0;
	int sig;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 1000000000 > 0)
	{
		_putchar((n / 1000000000) + 48);
		n -= ((n / 10000000000) * 1000000000);
		sig = 1;
	}
	if (n / 100000000 > 0 || sig == 1)
	{
		_putchar((n / 100000000) + 48);
		n -= ((n / 100000000) * 100000000);
		sig = 1;
	}
	if (n / 10000000 > 0 || sig == 1)
	{
		_putchar((n / 10000000) + 48);
		n -= ((n / 10000000) * 10000000);
		sig = 1;
	}
	if (n / 1000000 > 0 || sig == 1)
	{
		_putchar((n / 1000000) + 48);
		n -= ((n / 1000000) * 1000000);
		sig = 1;
	}
	if (n / 100000 > 0 || sig == 1)
	{
		_putchar((n / 100000) + 48);
		n -= ((n / 100000) * 100000);
		sig = 1;
	}
	if (n / 10000 > 0 || sig == 1)
	{
		_putchar((n / 10000) + 48);
		n -= ((n / 10000) * 10000);
		sig = 1;
	}
	if (n / 1000 > 0 || sig == 1)
	{
		_putchar((n / 1000) + 48);
		n -= ((n / 1000) * 1000);
		sig = 1;
	}
	if (n / 100 > 0 || sig == 1)
	{
		_putchar((n / 100) + 48);
		n -= ((n / 100) * 100);
		sig = 1;
	}
	if (n / 10 > 0 || sig == 1)
	{
		_putchar((n / 10) + 48);
		n -= ((n / 10) * 10);
		sig = 1;
	}
	if (n / 1 > 0 || sig == 1)
	{
		_putchar((n / 1) + 48);
		n -= ((n / 1) * 1);
		sig = 1;
	}
	_putchar(10);
}
