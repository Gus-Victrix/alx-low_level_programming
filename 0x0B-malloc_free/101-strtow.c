#include "main.h"
#include <stdlib.h>

int word_size(char *s);
int word_counter(char *str);

/**
 * strtow - Separates words in a string to individual strings.
 *
 * @str: String to be separated.
 *
 * Return: NULL if issue encountered, pointer to the new string otherwise.
 */

char **strtow(char *str)
{
	int i, word, letter, k, j = 0;
	char **result;

	if (!str || !*str)
		return (0);

	word = word_counter(str);
	if (word == 0)
		return (0);

	result = (char **)malloc(sizeof(char *) * (word + 1));
	if (result == 0)
		return (0);

	for (i = 0; i < word; i++)
	{
		while (*(str + j) == ' ')
			j++;

		letter = word_size(str + j);

		result[i] = (char *)malloc(sizeof(char) * letter + 1);

		if (!result[i])
		{
			for (; i >= 0; i--)
				free(result[i]);
			free(result);
			return (0);
		}

		for (k = 0; k < letter; k++)
			result[i][k] = str[j++];

		result[i][k] = 0;
	}
	result[i] = 0;
	return (result);
}

/**
 * word_size - Calculate length of a word
 *
 * @s: Input word.
 *
 * Return: Word length.
 */

int word_size(char *s)
{
	int i = 0;

	while (*(s + i) != ' ' && *(s + i))
		i++;
	return (i);
}

/**
 * word_counter - Calculate the number of words in string.
 *
 * @str: Input string.
 *
 * Return: Word count.
 */

int word_counter(char *str)
{
	int i = 0, word_count = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			word_count++;
			i += word_size(str + i);
		}
	}
	return (word_count);
}
