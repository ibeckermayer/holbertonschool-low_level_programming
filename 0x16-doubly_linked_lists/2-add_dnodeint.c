#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: a double pointer to the old head
 * @n: the int to be copied in
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head != NULL)
	{
		dlistint_t *copy;

		if (!*head)
			copy = NULL;
		else
		{
			copy = malloc(sizeof(*copy));
			if (!copy)
				return (NULL);
			copy->n = (*head)->n;
			copy->next = (*head)->next;
		}
		free(*head);
		*head = malloc(sizeof(**head));
		if (!*head)
		{
			free(copy);
			return (NULL);
		}

		(*head)->n = n;
		(*head)->next = copy;
		(*head)->prev = NULL;

		return (*head);

	}
	return (NULL);
}
