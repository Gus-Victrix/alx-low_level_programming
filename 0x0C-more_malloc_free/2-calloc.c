#include "main.h"
#include <stdlib.h>
#define UINT_MAX ((unsigned int) -1)

/**
 * _calloc - Allocates memory for an array using malloc.
 *
 * @nmemb: Number of array members.
 * @size: Size of each array member.
 *
 * Description: It initializes all members of the array to 0.
 *
 * Return: NULL if malloc() fails, nmemb, or size is 0. Else, pointer returned.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = 0;
	unsigned int i = 0;

	/*Check if total size would overflow*/
	if (UINT_MAX / nmemb < size)
		return (0);
	/*Check if either nmemb or size is 0*/
	if (!(nmemb && size))
		return (0);

	/*Multiply nmemb by size and call malloc on it*/
	array = malloc(size * nmemb);

	/*Check for success of malloc*/
	if (!array)
		return (0);

	/*Initialize array to zero*/
	while (i < (nmemb * size))
	{
		*((char *)array + i) = 0;
		i++;
	}
	return (array);
}
