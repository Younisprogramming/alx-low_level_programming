#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	static list_t *tail;
	list_t *p = malloc(sizeof(list_t)), *temp;

	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		tail = p;
		*head = tail;
	}
	else
	{
		tail->next = p;
		tail = p;
	}
	return (p);
}
