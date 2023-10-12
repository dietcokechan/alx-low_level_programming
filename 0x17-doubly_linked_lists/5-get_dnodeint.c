#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node in list
 * @head: head
 * @index: index
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL && i != index)
	{
		i++;
		temp = temp->next;
	}
	if (index == i)
		return (temp);
	else
		return (NULL);
}
