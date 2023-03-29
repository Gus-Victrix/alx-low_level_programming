#include "main.h"

/**
 * cap_string - Uppercase some letter who follow separator
 *
 * @str: String inputed
 *
 * Return: The new string
 */
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i, j;

	if (str[0] > 96 && str[0] < 123)
	{
		str[0] -= 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i - 1] == separators[j] && (str[i] > 96 && str[i] < 123))
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
