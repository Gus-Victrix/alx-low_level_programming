#include "lists.h"

void print_message(void) __attribute__((constructor));

/**
 * print_message - Prints the message before main function is executed.
 */
void print_message(void)
{
	char *str1 = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
