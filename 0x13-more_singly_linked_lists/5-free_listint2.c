#include "lists.h"
/**
 * free_listint2 - abc
 * @head: aa
 * Return: we say its void !!
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	ptr = *head;
	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
	free(*head);
}
