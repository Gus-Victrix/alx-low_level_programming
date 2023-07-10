#include "main.h"
#define BUFFER_SIZE 1024

void check(int a, int b, int exit_code, char *file_name, char *buffer);

void close_file(int file);

/**
* main - Copy contents form a file to another, create the file
* if the file doesn't exist.
*
* @argc: Number of arg
* @argv: Arg
*
* Return: Exit statements if any issues during the run, 0 if succesful
*/
int main(int argc, char *argv[])
{
	char *buffer;
	int file_from, file_to, size, test_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	size = read(file_from, buffer, BUFFER_SIZE);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		check(file_from, size, 98, argv[1], buffer);
		test_write = write(file_to, buffer, size);
		check(file_to, test_write, 99, argv[2], buffer);
		size = read(file_from, buffer, BUFFER_SIZE);
	} while (size > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
* check - Check if the file was openned and reading or
* writing goes well
*
* @a: Check int
* @b: Check int
* @exit_code: Code exit to print, in case of
* @file_name: File name to print it
* @buffer: Buffer to clean in case of
*
* Return: Exit code in case of fail, anything else, cause void function
*/
void check(int a, int b, int exit_code, char *file_name, char *buffer)
{
	if (exit_code == 98)
	{
		if (a == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			free(buffer);
			exit(exit_code);
		}
	}
	else if (exit_code == 99)
	{
		if (a == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			free(buffer);
			exit(exit_code);
		}
	}
}


/**
* close_file - Close a file, verify that he been well close
*
* @file: File to close
*
* Return: Anything, cause void function
*/
void close_file(int file)
{
	int test_close;

	test_close = close(file);
	if (test_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
