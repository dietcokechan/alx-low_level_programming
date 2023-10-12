#include "lists.h"

/**
 * sum_dlistint - returns sum of elements in list
 * @head: head
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
    const dlistint_t *temp;
    int sum = 0;

    temp = head;
    while (temp != NULL)
    {
        sum += temp->n;
        temp = temp->next;
    }
    return (sum);
}