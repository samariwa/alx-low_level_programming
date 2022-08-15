#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gets the number of elements in a linked list
 * @h: the head of the linked list whose elements are to be counted
 *
 * Return: The number of the elements of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
