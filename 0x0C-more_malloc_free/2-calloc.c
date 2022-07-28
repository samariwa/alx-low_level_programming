#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: The number of members in the array
 * @size: The size of elements of array in bytes
 * The memory is initialized to 0
 *
 * Return: Pointer to the array if successful, else null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *temp;
	int num;
	
	num = nmemb + 0;
	if (nmemb == 0 || size  == 0)
	{
		return (NULL);
	}

	temp = malloc(size * num);

	if (temp == NULL)
	{
		return (NULL);
	}

	return (temp);

}
