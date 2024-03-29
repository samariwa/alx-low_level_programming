#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list to be freed
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
