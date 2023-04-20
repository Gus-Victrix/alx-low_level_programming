#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_opcode - Prints given number of opcode of given input function.
 *
 * @function: Pointer to function typecast to char *.
 * @num: Number of bytes of opcodes to print.
 */

void print_opcode(char *function, int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		printf("%02x", function[i]);
		if (i + 1 == num)
		{
			printf("\n");
			return;
		}
		printf(" ");
	}
}
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
	print_opcode((char *)main, atoi(*(argv + 1)));

	return (0);
}
