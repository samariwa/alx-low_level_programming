#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array in which the integer is being sought
 * @size: size of the array
 * @cmp: function to provide the found integer as parameter
 *
 * Return: index of integer that doesnt return 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	for (; i <= size; i++)
	{
		if (i == size)
		{
			return (-1);
		}
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (0);
}
