#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Performs arthimetic operations on input string integers.
 *
 * @argc: The number of commandline arguments.
 * @argv: Array of commandline arguments.
 *
 * Description: Prints the result of the operation on terminal then exits.
 *
 * Return: 0 if successful, 100 if zero division, 99 if invalid operator,
 *			98 if wrong number of arguments passed.
 */

int main(int argc, char *argv[])
{
	int (*arithmetic)(int,int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!atoi(argv[3]) && (**(argv + 2) == '/' || **(argv + 2) == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	arithmetic = get_op_func(*(argv + 2));
	if (!arithmetic)
	{
		printf("Error\n");
		exit(99);
	}	

	num1 = atoi(*(argv + 1)), num2 = atoi(*(argv + 3));
	printf("%d\n", arithmetic(num1, num2));
	return (0);
}
