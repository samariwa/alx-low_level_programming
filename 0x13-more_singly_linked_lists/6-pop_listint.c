#include "lists.h"

/**
 * pop_listint - deletes head node of linked list and returns its data
 * @head: the pointer to the head of the linked list
 * str is duplicated in the new node
 *
 * Return: data of the head node if successful, else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current, *temp;
	int value;

	if (head != NULL)
	{
		current = *head;
		temp = current->next;
		value = current->n;
		free(current);
		*head = temp;
		return (value);
	}

	return (0);
}
