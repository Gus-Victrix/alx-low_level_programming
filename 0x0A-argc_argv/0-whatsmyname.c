#include <stdio.h>

/**
 * main - Prints it's own name then exits.
 *
 * @argc: Number of commandline arguments passed to program.
 * @argv: Array of pointers to commandline arguments.
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
