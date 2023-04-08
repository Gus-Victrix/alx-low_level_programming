#include <stdio.h>

/**
 * main - Prints all the arguments of a program including its name followed by
 *			newline
 * @argc: Number of commandline arguments.
 * @argv: Array of commmandline arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	short i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
