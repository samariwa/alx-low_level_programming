#include "lists.h"



size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t count = 0;

	while(ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return(count);
}
