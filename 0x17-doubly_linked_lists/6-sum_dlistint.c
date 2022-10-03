#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a dlinked list
 * @head: pointer to the head of list
 * Return: the sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
        int sum = 0;
        dlistint_t *temp = head;

        while (temp != NULL)
        {
		sum += temp->n;
                temp = temp->next;
        }

        return (sum);
}
