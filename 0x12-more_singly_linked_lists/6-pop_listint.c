#include "lists.h"

int pop_listint(listint_t **head)
{
	int n;
	listint_t *copy;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	copy = (*head)->next;
	free(*head);
	*head = copy;
	return (n);
}
