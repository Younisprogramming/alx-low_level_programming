#include "lists.h"
/**
 * free_listint2 - abc
 * @head: aa
 * Return: we say its void !!
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
