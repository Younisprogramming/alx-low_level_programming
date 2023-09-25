#include "lists.h"
/**
 * print_listint - dawdwad
 * @h: dawd
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
