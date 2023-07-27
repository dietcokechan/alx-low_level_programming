#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 *
 * @head: head
 * @str: new node
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	while(str[i])
		i++;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = i;
	node->next = *head;

	*head = node;

	return (node);
}
