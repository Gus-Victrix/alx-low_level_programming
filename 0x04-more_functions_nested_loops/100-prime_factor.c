#include <stdio.h>

/**
 * main - Finds largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long int factor, number;

	number = 612852475143;

	for (factor = number - 1; factor > 0; factor--)
	{
		if (number % factor != 0)
			continue;
		else
		{
			printf("%lu\n", factor);
			break;
		}
	}
	return (0);
}
