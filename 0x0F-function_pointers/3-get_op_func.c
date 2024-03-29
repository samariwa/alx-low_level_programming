#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: The operator asked by the user
 *
 * Returns the pointer to the function corresponding to the operator
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
	int i;

	i = 0;

	while (i < 6)
	{
		if (ops[i].op == NULL)
		{
			return (NULL);
		}

		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
