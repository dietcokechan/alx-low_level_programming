#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of list
 * @head: head
 * @n: node
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *node;

	temp = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	if ((*head) == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next)
		temp = temp->next;
	node->prev = temp;
	temp->next = node;
	return (node);
}
