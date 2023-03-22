#include <stdio.h>

/**
 * main - Print the sum of all number to 1024 that are multiple of 3 or 5.
 *
 * Return: 0 (succes)
 */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	i++;
	}
	printf("%d\n", sum);

	return (0);
}
