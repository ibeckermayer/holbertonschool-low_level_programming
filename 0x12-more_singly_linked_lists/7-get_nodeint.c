#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	int n;

	if (!head)
		return (NULL);

	n = (*head)->n;
	copy = (*head)->next;
	free(*head);
	*head = copy;
	return (n);
}
