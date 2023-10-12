#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given pos
 * @h: head
 * @idx: index
 * @n: node
 * Return: address of new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *node;
	unsigned int i = 1;

	temp = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = node;
			return (node);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		*h = node;
		return (node);
	}
	while (temp->next != NULL && i != idx)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		node->prev = temp;
		node->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = node;
		temp->next = node;
		return (node);
	}
	return (NULL);
}