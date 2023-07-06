#include "main.h"

/**
 * binary_to_uint - Convert a binary number into an int.
 *
 * @b: Binary number to convert
 *
 * Return: The binary number, or 0 if issues
 */
unsigned int binary_to_uint(const char *b)
{
	char numb;
	unsigned int result = 0;
	int i, mul_of_two = 1;

	if (b == NULL)
		return (0);

	for (i = 0; *(b + i); i++)
		;

	for (i -= 1 ; i >= 0; i--)
	{
		numb = *(b + i);
		if (numb != '0' && numb != '1')
			return (0);
		result += (numb - '0') * mul_of_two;
		mul_of_two *= 2;
	}
	return (result);
}
