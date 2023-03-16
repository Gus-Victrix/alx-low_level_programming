#include <unistd.h>
#include <string.h>

/**
 * main - It contains the program
 * @words[]: The string to be printed.
 *
 * Description: The function calls the write() function to write words in:
 *	1. standard error.
 *	2. standard output.
 * The function strlen() has been used to determine length of the string for
 * write().
 *
 * Return: 1 after successful execution
 */
int main(void)
{
	char *words = "and that piece of art is useful\" - Dora Koprar, 2015-10-19\n";
	char *message = "This is not easy... In fact, it's downright annoying:(
				einigierjfieieedffqefqaefawefqaef";

	write(1, words, strlen(words));
	write(STDERR_FILENO, message, strlen(words));
	perror("Error not found");

	return (1);
}
