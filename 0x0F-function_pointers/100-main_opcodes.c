#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcode - program that prints the opcode of its own main function.
 * @address: pointer to the main function
 * @n: number of bytes to print
 * Return: nothing.
 */
void print_opcode(char *address, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", address[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - prints the opcode of its own main function
 * @argc: integer
 * @argv: character
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcode((char *)&main, bytes);

	return (0);
}
