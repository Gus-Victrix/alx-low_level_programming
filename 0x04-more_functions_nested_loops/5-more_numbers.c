#include "main.h"

/**
 * more_numbers - Prints 1 - 14 ten times using putchar.
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(10);
	}
}
