#include "lists.h"

/**
 * list_len - return num of elements in linked list
 *
 * @h: head of list
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
