#include "lists.h"
  
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
        dlistint_t *temp = head;

        while (count != index)
        {
		if (temp == NULL)
		{
			return(NULL);
		}
                temp = temp->next;
		count++;
        }

        return (temp);
}
