#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: head
 * @str: new node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *node, *prev;

	while (str[i])
		i++;
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (strdup(str) == NULL)
	{
		free(node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		prev = *head;
		while (prev->next != NULL)
			prev = prev->next;
		prev->next = node;
		return(node);
	}
}
