#include "lists.h"
/**
 * add_nodeint - aaaa
 * @head:dwdwd
 * @n: int
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
