#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to be created in the memory
 *
 * Return: pointer to allocated memory if successful, else 98
 */
void *malloc_checked(unsigned int b)
{
	int *temp;

	temp = malloc(b);

	if (temp == NULL)
	{
		exit(98);
	}

	return (temp);
}
