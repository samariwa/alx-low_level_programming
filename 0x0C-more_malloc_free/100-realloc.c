#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
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
	unsigned int j = 1;
	char *p;

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		if (old_size > new_size)
			new_ptr = malloc(old_size);
		else if (new_size > old_size)
			new_ptr = malloc(new_size);
	}

	else
	{
		p = ptr;
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		while (j <= old_size)
		{
			*(new_ptr + j) = *(p + j);
			j++;
		}

		free(ptr);
	}

	return (new_ptr);
}
