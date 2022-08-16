#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a linked list
 * @head: the head of the linked list whose data is being summed
 *
 * Return: Sum of all the data (n) of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head != NULL)
	{
		while (current != NULL)
		{
			current = current->next;
			sum += current->n;
		}
		return (sum);
	}

	return (0);
}
