#include <stdio.h>
#include "main.h"

/**
 * main - Prints it's own name then exits.
 *
 * @argc: Number of commandline arguments passed to program.
 * @argv: Array of pointers to commandline arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	printf("%s", *argv);

	return (0);
}
