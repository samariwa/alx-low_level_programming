#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @h: the head of the linked list whose nth node is being sought
 * @index: the index of the node being sought
 *
 * Return: The nth node of the list, else NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *current = head;

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (count == index)
        		{
                		return (current);
        		}
			current = current->next;
			count++;
		}
	}

	return (NULL);
}
