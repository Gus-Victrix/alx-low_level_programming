#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Gets the correct operation function based on input.
 *
 * @s: Operator used in argument to program.
 *
 * Return: Pointer to correct function to be used for the arithmetic operation.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
