#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = get_new_node(n);
	dlistint_t *temp = *head;

        if (*head == NULL)
        {
                *head = new_node;
                return(*head);
        }

	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
        new_node->prev = temp;

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
