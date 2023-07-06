#include "main.h"

/**
* get_endianness - Check if our machine is Little or big
* endianness
*
* Return: 1 if little, 0 else
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
