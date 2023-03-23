#include "main.h"

/**
 * print_square - Prints a square of pounds based on input parameter
 * @size: The size of the square
 */

void print_square(int size)
{
	int length, height;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (length = 0; length < size; length++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
