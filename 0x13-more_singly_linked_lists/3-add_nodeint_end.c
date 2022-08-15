#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the head of the linked list
 * @n: the value of integer n of the struct
 *
 * Return: address of the new element if success, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->n = n;
		new_node->next = NULL;
	}


	return (new_node);
}
