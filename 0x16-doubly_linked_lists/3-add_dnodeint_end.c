#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: a double pointer to the old head
 * @n: the string to be copied in
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

		return (*head);

	}
	return (NULL);
}
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: a double pointer to the head
 * @n: the int
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	if (!head)
		return (NULL);
	else if (!*head)
		newnode = add_dnodeint(head, n);
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		newnode = malloc(sizeof(*newnode));
		if (!newnode)
			return (NULL);

		(newnode)->n = n;
		newnode->next = NULL;
		temp->next = newnode;
		newnode->prev = temp;

	}
	return (newnode);
}
