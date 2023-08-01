#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: head
 * @idx: index
 * @n: new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
