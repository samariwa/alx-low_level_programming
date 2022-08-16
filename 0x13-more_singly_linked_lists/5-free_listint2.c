#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the head of the list to be freed
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}

	*head = temp;
}
