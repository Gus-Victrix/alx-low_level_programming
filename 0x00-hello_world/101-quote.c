#include <unistd.h>

/**
 * main - It contains the program
 *
 * Description: The function calls the write() function to write words in:
 *	1. standard error.
 */
int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
