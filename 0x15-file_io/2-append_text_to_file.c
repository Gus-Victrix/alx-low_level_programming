#include "main.h"

/**
* append_text_to_file - Append a text at the end of a file
*
* @filename: Name of the file
* @text_content: Contents to fill into the file
*
* Return: -1 if any issues during the run, 1 is succes
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, test_write, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; *(text_content + i); i++)
			;
		test_write = write(file, text_content, i);
	}
	close(file);
	if (test_write == -1)
		return (-1);
	return (1);
}
