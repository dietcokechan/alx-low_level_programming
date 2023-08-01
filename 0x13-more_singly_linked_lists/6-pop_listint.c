#include "lists.h"

/**
 * pop_listint - deletes the head node of list
 *
 * @head:head
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	val = temp->n;
	*head = temp->next;
	free(temp);

	return (val);
}
