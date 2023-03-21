#include "main.h"

/**
 * _isalpha - checks if input is a letter.
 *
 * @c: this is the input to be checked.
 *
 * Return: 1 if c is a letter; 0 otherwise.
 */
int _isalpha(int c);
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
