#include "main.h"
#include <stdlib.h>
/**
 * reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of space for ptr
 * @new_size: size in bytes of new memory block
 * Free old pointer if all conditions for the new pointer are met
 *
 * Return: New pointer if conditions are met, else return old pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;
	int i = 0, j = 0;

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	
	while (ptr)
	{
		i++;
	}

	while (j < i)
	{
		new_ptr[j] = ptr + j;
		j++;
	}

	free (ptr);

	return (new_ptr);
}
