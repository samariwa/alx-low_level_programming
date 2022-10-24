#include "hash_tables.h"


/**
 * hash_table_set - adds elements to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key to be stored in the hash table bucket
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeds, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp = malloc(sizeof(hash_node_t));
	
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}

	if (key == NULL || value == NULL)
	{
		return (0);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;
	temp->key = strdup(key);
	temp->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		temp->next = NULL;
		ht->array[index] = temp;
	}
	else
	{
		temp->next = ht->array[index];
        	ht->array[index] = temp;
	}

	return (1);
}
