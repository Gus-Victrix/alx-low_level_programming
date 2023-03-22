#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all number from the input, to 98.
 *
 * @n: The strating number
 *
 * Return: Anything, cause void function
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}

	}
	printf("%d\n", n);
}
