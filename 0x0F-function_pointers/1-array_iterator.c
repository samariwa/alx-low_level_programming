#include "function_pointers.h"

/**
 * array_iterator - executes a function given as param on each element of array
 * @array: array whose elements will be used as parameters
 * @size: size of the array
 * @action: pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	
	if (size <= 0)
	{
		return;
	}

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
