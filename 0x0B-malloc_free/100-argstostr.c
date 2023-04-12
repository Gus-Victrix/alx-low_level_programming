#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all commandline arguments of a program.
 *
 * @ac: Number of commandline arguments.
 * @av: Array of pointers to commandline arguments.
 *
 * Return: NULL if issue encountered, pointer to the combined argv string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (!ac || !av)
		return (0);

	for (i = 0; i < ac; i++, len++)
		for (j = 0; *(*(av + i) + j); j++, len++)
			continue;

	str = (char *)malloc(sizeof(char) * len + 1);

	if (!str)
		return (0);

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; *(*(av + i) + j); j++, k++)
			*(str + k) = *(*(av + i) + j);
		*(str + k) = '\n';
	}
	*(str + k) = '\0';
	return (str);
}
