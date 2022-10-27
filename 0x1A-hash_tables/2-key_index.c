#include "hash_tables.h"


/**
 * key_index - gives the index of the provided key for the hash table
 * @key: the key whose index is to be established
 * @size: the size of the hashtable array
 * Description: The function makes use of the hash_djb2 algorithm
 * to get the hash value to be used to find the index using modulo
 *
 * Return:  The index of the key in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((unsigned char *)key), index = hash % size;

	return (index);
}
