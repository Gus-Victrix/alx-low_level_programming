#include "main.h"
#include <stdio.h>

/**
* set_bit - Set a bit, at a given index, to 1
*
* @n: Number
* @index: Index
*
* Return: 1 if it's work, -1 else
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n |= 1 << index;
	return (1);
}

