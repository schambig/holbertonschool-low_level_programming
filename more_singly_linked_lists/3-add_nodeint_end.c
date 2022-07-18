#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a singly linked list
 * @head: Address of the curent head of the list
 * @n: number to be added
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *t;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	for (t = *head; t->next; t = t->next)
		;
	t->next = new;

	return (new);
}
