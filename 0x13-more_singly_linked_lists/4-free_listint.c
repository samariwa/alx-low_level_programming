#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list to be freed
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
