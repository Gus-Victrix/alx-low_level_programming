#include "main.h"

/**
 * cap_string - Capitalizes the first character of each word in input string.
 *
 * @str: Input string.
 *
 * Return: Pointer to output string.
 */

char *cap_string(char *str)
{
	char *mark;

	if (str == NULL)
		return (NULL);

	mark = str;

	if (*mark >= 97 && *mark <= 122)
	{
		*mark -= 32;
		mark++;
	}

	while (*mark)
	{
		if (*(mark - 1) == 10 || *(mark - 1) == 9 || *(mark - 1) >= 32 &&
				*(mark - 1) <= 34 || *(mark - 1) == 44 || *(mark - 1) == 46 ||
				*(mark - 1) == 63 || *(mark - 1) == 58 || *(mark - 1) == 59 ||
				*(mark - 1) == 40 || *(mark - 1) == 41 || *(mark - 1) == 123 ||
				*(mark - 1) == 125)
			if (*mark >= 97 && *mark <= 122)
				*mark -= 32;
		mark++;
	}

	return (str);
}
