#include "main.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	if (size > 0)
	{
		ht = malloc(sizeof(hash_node_t));
		if (!ht)
			return (NULL);
		ht->size = size;
		ht->array = malloc(sizeof(hash_node_t *) * size);
		if (!ht->array)
		{
			free(ht);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			ht->array[i] = NULL;
		return (ht);
	}
	return (NULL);
}