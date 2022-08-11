#include "lists.h"

/**
 * free_list - frees a list
 * @head: the head of the list to be freed
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	if (head != NULL)
	{
		current = head;

		while (current != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
	}
}
