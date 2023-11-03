#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int last;
	hash_node_t *p;

	if (ht == NULL)
		return;
	last = ht->size - 1;
	while (!ht->array[last] && last != 0)
		last--;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			printf("'%s': '%s'", p->key, p->value);
			if (i != last)
				printf(", ");
			p = p->next;
		}
	}
	printf("}");
	printf("\n");
}
