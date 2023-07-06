#include "main.h"

/**
* clear_bit - Clear a bit at a given index
*
* @n: Pointer to number
* @index: index
*
* Return: 1 if work, -1 else
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
