#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: Name to be printed.
 * @f: Function to be used for alter the name while printing it.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
