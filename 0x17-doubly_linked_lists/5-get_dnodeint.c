#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of list
 * @index: the nth index(starting at 0)
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (count != index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		count++;
	}

	return (temp);
}
