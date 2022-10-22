#include "hash_tables.h"

/**
 *hash_table_create - creates a new hash table
 *@size: the size of the array to be used
 *
 *Return: The pointer of the newly created hash table if successful else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *new_array = malloc(sizeof(hash_node_t) * size);
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	hash_table->size = size;
	hash_table->array = &new_array;
	
	return (hash_table);
}
