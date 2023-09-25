#include "lists.h"
/**
 * pop_listint - abc
 * @head:ddd...
 * Return: head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (n);
}
