#include "lists.h"
/**
 * sum_listint - aaa
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
