/*
 * When compiled, the resulting executable of this file prints to stderror.
*/

#include <unistd.h>
#include <string.h>

int main(void)
{
	char words[] = "and that piece of art is useful\" - Dora Koprar, 2015-10-19\n"
		;

	write(1, words, strlen(words));

	return (1);
}
