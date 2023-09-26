#include "lists.h"
/**
 * get_nodeint_at_index - aaa
 * @head: hhh
 * @index: iii
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;

	for (s = 0; s < index && head != NULL; s++)
	{
		head = head->next;
	}
	return (head);
}
