#include "main.h"

/**
 * leet - Changes certain letter into numbers
 *
 * @str: String inputed
 *
 * Return: The new str, with modifications
 */
char *leet(char *str)
{
	char transoform[] = "4433007711";
	int sizeOfT = sizeof(transoform) / sizeof(char);
	char excludeChar[] = "aAeEoOtTlL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < sizeOfT; j++)
		{
			if (str[i] == excludeChar[j])
			{
				str[i] = transoform[j];
			}
		}
	}
	return (str);
}
