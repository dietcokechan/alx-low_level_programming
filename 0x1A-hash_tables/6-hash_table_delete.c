#include "hash_tables.h"

/**
 * hash_table_delete - deletes and frees hash table
 * @ht: hash table to beat
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *f, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		f = ht->array[i];
		while (f)
		{
			tmp = f->next;
			free(f->key);
			free(f->value);
			free(f);
			f = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
