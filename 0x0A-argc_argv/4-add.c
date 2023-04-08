#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers given as program arguments and prints out sum.
 *
 * @argc: Number of commandline arguments.
 * @argv: Array of commandline arguments.
 *
 * Return: 0 if successful, 1 otherwise.
 */

int main(int argc, char **argv)
{
	int counter, result = 0;

	for (counter = 1; counter < argc; counter++)
	{
		if (atoi(argv[counter]) == 0)
		{
			printf("Error\n");
				return (1);
		}
		result += atoi(argv[counter]);
	}
	printf("%d\n", result);
	return (0);
}
