#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int isnum(char *s);
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
		if (!isnum(argv[counter]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[counter]);
	}

	printf("%d\n", result);
	return (0);
}

/**
 * isnum - Checks if string output only contains base ten digits.
 *
 * @s: This is a pointer to the string to be checked.
 *
 * Return: 1 if input is purely a number string, 0 otherwise.
 */

int isnum(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
