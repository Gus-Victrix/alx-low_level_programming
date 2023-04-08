#include <stdio.h>

/**
 * main - Prints the number of commmandline arguments followed by a newline.
 *
 * @argc: Number of commandline arguments passed to the program.
 * @argv: Pointer to array of commandline arguments to the program.
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
