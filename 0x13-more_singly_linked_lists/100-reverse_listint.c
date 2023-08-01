#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: head
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
