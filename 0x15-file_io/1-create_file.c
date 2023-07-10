#include "main.h"

/**
* create_file - Create a file with text in
*
* @filename: Name of the file
* @text_content: Contents to fill into the file
*
* Return: -1 if any issues during the run, 1 is succes
*/
int create_file(const char *filename, char *text_content)
{
	int file, write_test, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; *(text_content + i); i++)
			;
		write_test = write(file, text_content, i);
	}
	close(file);
	if (write_test == -1)
		return (-1);
	return (1);
}
