#include "lists.h"
/**
 * pop_listint - abc
 * @head:ddd...
 * Return: head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	temp = temp->next;
	free(*head);
	*head = NULL;
	return (temp);
}
