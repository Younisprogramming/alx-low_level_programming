#include "lists.h"
#include <stdio.h>
/**
 *list_len - dwdd
 *@h:dwdawdw
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
