#include "lists.h"
/**
 * reverse_listint - re
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;
	i = NULL;
	j = NULL;
	while (*head != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = n;
	}
	*head = i;
	return (*head);
}
