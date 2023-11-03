#include "hash_tables.h"

/**
 * hash_table_get - gets value associated with key
 * @ht: hash table to go through
 * @key: key to get
 * Return: returns string value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	hash_node_t *c;

	if (!ht || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	pos = key_index((const unsigned char *)key, ht->size);
	c = ht->array[pos];
	while (c)
	{
		if (!strcmp(c->key, key))
			return (c->value);
		c = c->next;
	}
	return (NULL);
}
