#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: Pointer to the list whose elements should be printed
 * prints (nil) if the string in the structure is null
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *current = (list_t*)h;

	while (current != NULL)
	{
		count++;
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}

	return (count);
}
