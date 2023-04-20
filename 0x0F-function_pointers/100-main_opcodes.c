#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - Prints it's own opcode and exits.
 *
 * @argc: Number of commandline arguments.
 * @argv: Array of commandline arguments.
 *
 * Return: exit with status 2 if number of bytes to be printed is negative,
 *			exit with status 1 if number of arguments given is incorrect, 0
 *			otherwise.
 */

int main(int argc, char *argv[])
{
	unsigned char *main_ptr;
	size_t size, i;

	size = atoi(argv[1]);
	main_ptr = (unsigned char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(*(argv + 1)) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		printf("%02x ", main_ptr[i]);
	}
	printf("\n");

	return (0);
}
