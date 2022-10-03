#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: double pointer to the head of list
 * @n: new node's integer value
 * Return: address of the new element or NULL
 */
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

/**
 * get_new_node - creates a new node
 * @n: node's integer value
 *
 * Return: The new node
 */
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
