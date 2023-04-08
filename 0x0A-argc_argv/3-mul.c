#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of two integers multiplied
 *
 * @argc: Number of input arguments.
 * @argv: Array of arguments to program.
 *
 * Return: 0 if successful, 1 if error encountered.
 */

int main(int argc, char **argv)
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[2]) * atoi(argv[1]);

	printf("%d\n", product);
	return (0);
}
