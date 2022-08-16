#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 * @head: the pointer to the current head
 * @str: string to be stored in new node
 * str is duplicated in the new node
 *
 * Return: address of the new element if successful, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->len = len;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
