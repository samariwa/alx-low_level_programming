#include "lists.h"

/**
 * list_len - prints the number of elements in a list
 * @h: Pointer to the list whose elements should be printed
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *current = (list_t *)h;

	while (current != NULL)
	{
		count++;
	}

	return (count);
}

