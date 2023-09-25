#include "lists.h"
/**
 * listint_len - wdwd
 * @h:aaaa
 * Return: count of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
