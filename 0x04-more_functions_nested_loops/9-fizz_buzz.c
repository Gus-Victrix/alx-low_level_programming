#include <stdio.h>

/**
 * main - prints 1-100 replacing multiples of 3 with Fizz and 5 with Buzz
 *		it prints FizzBuzz for a suitable number
 *	Return: 0
 */

int main(void)
{
	int i;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			if (a % 3 == 0)
				printf("Fizz");
			if (a % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", a);
		putchar(10);
	}
	return (0);
}
