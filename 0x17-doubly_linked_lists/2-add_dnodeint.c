#include "lists.h"

/**
 * add_dnodeint - adds new node to the head of list
 * @head: head
 * @n: node
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if ((*head) == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		(*head)->prev = node;
		node->next = *head;
		*head = node;
		return (node);
	}
}
