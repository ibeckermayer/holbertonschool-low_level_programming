#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: a pointer to the head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (!head)
		return;

	next = head;
	while (next)
	{
		head = next;
		next = head->next;
		free(head);
	}
}
