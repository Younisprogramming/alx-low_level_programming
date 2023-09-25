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
	temp = *head;
	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = NULL;
	return (temp);
}
