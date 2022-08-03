#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: The operator asked by the user
 *
 * Returns the pointer to the function corresponding to the operator
 */
int (*get_op_func(char *s))(int , int)
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
		if (ops[i] == *s)
		{
			return (ops[i].f());
		}
		i++;
	}
}
