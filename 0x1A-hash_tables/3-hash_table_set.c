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
	hash_node_t *node = malloc(sizeof(hash_node_t)), *temp;

	if (node == NULL || key == NULL || value == NULL)
	{
		free(node);
		return (0);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;
	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if(strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}

	return (1);
}
