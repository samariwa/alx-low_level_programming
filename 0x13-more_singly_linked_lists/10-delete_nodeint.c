#include "lists.h"

/**
 * delete_nodeint_at_index - inserts new node at nth position
 * @head: the head of the linked list whose nth node is being deleted
 * @index: the index at which the new node is being deleted
 *
 * Return: 1 if it succeeded, else -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t count = 0;
	listint_t *current = *head;
	void *temp;

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (count == index - 1)
        		{
				temp = current->next->next;
				free(current->next);
				current->next = temp;
                		return (1);
        		}
			current = current->next;
			count++;
		}
	}

	return (-1);
}
