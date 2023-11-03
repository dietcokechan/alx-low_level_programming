#include "hash_tables.h"

/**
 * shash_table_create - create stuff
 * @size: size of table
 * Return: table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *t;
	unsigned int i;

	if (size > 0)
	{
		t = malloc(sizeof(shash_table_t));
		if (!t)
			return (NULL);
		t->size = size;
		t->array = malloc(sizeof(shash_node_t *) * size);
		t->shead = NULL;
		t->stail = NULL;
		if (!t->array)
		{
			free(t);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			t->array[i] = NULL;
		return (t);
	}
	return (NULL);
}

/**
 * shash_table_set - sets ht table
 * @ht: hash table to set
 * @key: key to set
 * @value: value to set
 * Return: pass fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int pos;
	shash_node_t *c, *new;

	if (!ht || strlen(key) == 0)
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
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	if (!new->key)
	{
		free(new);
		return (0);
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
	new->snext = NULL;
	new->sprev = NULL;
	return (set_sorted_list(ht, new));
}

/**
 * set_sorted_list - sets doubly linked list
 * @ht: hash table to go through
 * @new: node to sort
 * Return: pass or fail
 */
int set_sorted_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *s;

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	if (strcmp(new->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
		return (1);
	}
	else
	{
		s = ht->shead->snext;
		while (s && strcmp(new->key, s->key) > 0)
			s = s->snext;
		if (!s)
		{
			new->sprev = ht->stail;
			ht->stail->snext = new;
			ht->stail = new;
			return (1);
		}
		new->sprev = s->sprev;
		s->sprev->snext = new;
		s->sprev = new;
		new->snext = s;
	}
	return (1);
}

/**
 * shash_table_get - returns value of key
 * @ht: hash table
 * @key: key to return value
 * Return: string value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int pos;
	shash_node_t *c;

	if (!ht || strlen(key) == 0)
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

/**
 * shash_table_print - prints shash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *h;

	if (!ht)
		return;

	h = ht->shead;
	printf("{");
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		if (h != ht->stail)
			printf(", ");
		h = h->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints table reversed
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *t;

	if (!ht)
		return;
	t = ht->stail;
	printf("{");
	while (t)
	{
		printf("'%s': '%s'", t->key, t->value);
		if (t != ht->shead)
			printf(", ");
		t = t->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a table
 * @ht: hash table to delete
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *f, *tmp;

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
