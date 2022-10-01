#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a linked list
 * @head: double pointer to the head of list
 * @n: new node's integer value
 * Return: address of the new element if successful, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = get_new_node(n);

	if (head == NULL)
	{
		*head = new_node;
		return(*head);
	}

	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

dlistint_t *get_new_node(const int n)
{
	dlistint_t *new_node = (dlistint_t*)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;

	return(new_node);
}
