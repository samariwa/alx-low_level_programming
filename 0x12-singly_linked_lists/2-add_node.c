#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: the pointer to the current head
 * @str: string to be stored in new node
 * str is duplicated in the new node
 *
 * Return: address of the new element if successful, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	size_t len = 0;

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->str = strdup(str);
	while (str[len] != '\0')
	{
		len++;
	}

	new_head->len = len;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
