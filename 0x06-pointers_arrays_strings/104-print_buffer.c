#include "main.h"
#include <stdio.h>

/**
 * print_new_line - print a new line
 *
 * @b: String inputed
 * @i: Position on the sting
 * @size: Size of the the string
 *
 * Return: Anything, cause void function
 */

void print_new_line(char *b, int i, int size)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if ((j + i) >= size)
			printf("  ");

		else
			printf("%02x", b[j + i]);

		if ((j % 2) != 0)
			printf(" ");
	}

	for (j = 0; j < 10; j++)
	{
		if ((j + i) >= size)
			break;

		else if (b[j + i] >= 31 && b[j + i] <= 126)
			printf("%c", b[j + i]);
		else
			printf(".");
	}
}

/**
 * print_buffer - print the buffer
 *
 * @b: String inputed
 * @size: Size of the the string
 *
 * Return: Anything, cause void function
 */

void print_buffer(char *b, int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			print_new_line(b, i, size);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
