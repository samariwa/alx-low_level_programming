#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t count = 0;

	while(ptr != NULL)
	{
		printf("%d\n", ptr->n);
                ptr = ptr->next;
		count++;
	}

	return(count);
}
