#include "lists.h"

/**
 * dlistint_len - returns the number of elements in list
 * @h: head
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int i = 0;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
