#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: a pointer to the head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next, *copy;

	if (!head)
		return;

	next = head;
	while (next)
	{
		copy = next;
		next = copy->next;
		free(copy->str);
		free(copy);
	}
}
