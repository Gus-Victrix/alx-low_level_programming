#include "main.h"

/**
* read_textfile - Read n char of a file text
*
* @filename: File
* @letters: Number of letter to read
*
* Return: The number of char printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, size, size_write;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	size = read(file, buffer, letters);
	size_write = write(STDOUT_FILENO, buffer, size);

	if (size == -1 || size_write == -1 || size != size_write)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);
	return (size);
}
