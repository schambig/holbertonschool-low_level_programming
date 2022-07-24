#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list
 * @head: Address of linked list
 * @n: New value
 * Return: Address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
