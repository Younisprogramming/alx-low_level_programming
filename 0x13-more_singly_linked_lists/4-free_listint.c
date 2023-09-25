#include "lists.h"
/**
 * free_listint - abc
 * @head:aaa
 * Return: NOOOOOOO! its void ..
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
