#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the head of list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
