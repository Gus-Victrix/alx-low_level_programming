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
	char separators[] = " \t\n,;.!?\"(){}";
	int i, j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i - 1] == separators[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 'a' - 'A';
				break;
			}
		}
	}
	return (str);
}
