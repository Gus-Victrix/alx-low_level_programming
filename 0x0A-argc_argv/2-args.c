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
	while(argc--)
		printf("%s\n", argv[argc]);
	return (0);
}
