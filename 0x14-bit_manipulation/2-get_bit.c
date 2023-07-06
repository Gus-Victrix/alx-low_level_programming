#include "main.h"

/**
* get_bit - Get the bit at a certain index
*
* @n : Number to get its bits
* @index: Value of index, start from the right, and value 0
*
* Return: The value of the bit, -1 is any issues
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
