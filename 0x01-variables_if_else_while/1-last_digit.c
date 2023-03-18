#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tells the value of the last digit of an integer
 * Return: 0 upon successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	num = n % 10;
	printf("Last digit of %d is %d and is ", n, num);

	if (num > 5)
	{
		printf("greater than 5\n");
	}
	else if (num == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
