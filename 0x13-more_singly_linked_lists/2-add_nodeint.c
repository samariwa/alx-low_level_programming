#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: the head of the linked list
 * @n: the value of integer n of the struct
 *
 * Return: address of the new element if success, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		new_head->next = NULL;
	}
	else
	{
		new_head->next = *head;
		new_head->n = n;
	}

	*head = new_head;

	return (new_head);
}
