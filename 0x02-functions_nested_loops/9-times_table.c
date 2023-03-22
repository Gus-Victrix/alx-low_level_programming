#include "main.h"

/**
 * times_table - Print all the tables of multipliacation
 *
 * Return: Anything cause void function
 */
void times_table(void)
{
	int i = 0, j, result;

	while (i <= 9)
	{
		_putchar(48);
		j = 1;
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');
			result = j * i;
			if (result >= 10)
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(result + 48);
			}
			j++;
		}
	_putchar('\n');
	i++;
	}
}
