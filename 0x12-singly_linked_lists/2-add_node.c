#include "lists.h"
/**
 * add_node- a function
 * @head: pointer to pointer
 * @str: const char
 * Return: p
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = *head;
	*head = p;
	return (p);
}
