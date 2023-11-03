#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add or update
 * @key: key to add
 * @value: value to associate with key
 * Return: 1 or 0 if succeed or fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int pos;
	hash_node_t *c, *new;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	pos = key_index((const unsigned char *)key, ht->size);
	c = ht->array[pos];
	while (c)
	{
		if (!strcmp(c->key, key))
		{
			free(c->value);
			c->value = strdup((char *)value);
			if (!c->value)
				return (0);
			return (1);
		}
		c = c->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	if (!new->key)
	{
		free(new);
		exit(0);
	}
	new->value = strdup((char *)value);
	if (!new->value)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[pos];
	ht->array[pos] = new;
	return (1);
}
