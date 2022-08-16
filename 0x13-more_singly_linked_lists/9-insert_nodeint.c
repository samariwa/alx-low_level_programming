#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at nth position
 * @h: the head of the linked list whose nth node is being sought
 * @idx: the index at which the new node is being inserted
 *
 * Return: The address of the new node, else NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t count = 0;
	listint_t *current = *head, *new_node;
	void *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (count == idx - 1)
        		{
				temp = current->next;
				current->next = new_node;
				new_node->n = n;
				new_node->next = temp;
                		return (new_node);
        		}
			current = current->next;
			count++;
		}
	}

	return (NULL);
}
