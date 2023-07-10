#include "main.h"

/**
 * read_textfile - Reads text file and prints it to POSIX standard output.
 *
 * @filename: Name of file to be read.
 * @letters: Number of printed letters.
 *
 * Return: 0 if error is encountered, Number of letters printed otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, file, size;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || letters < 0 || buf == NULL)
	{
		free(buf);
		return (0);
	}
	/* Openning file*/
	file  = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}

	/* Reading the file*/
	size = read(file, buf, letters);
	/* Writting to stdout*/
	count = write(STDOUT_FILENO, buf, size);

	free(buf);
	close(file);

	if (size == -1 || count == -1 || size != count)
	{
		return (0);
	}

	return (size);
}
