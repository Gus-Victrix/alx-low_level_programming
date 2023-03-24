#include <stdio.h>

/**
 * main - prints 1-100 replacing multiples of 3 with Fizz and 5 with Buzz
 *		it prints FizzBuzz for a suitable number
 *	Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
