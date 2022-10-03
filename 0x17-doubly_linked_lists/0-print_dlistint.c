#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to the head of list
 *
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
