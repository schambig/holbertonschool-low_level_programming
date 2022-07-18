#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at a given position of a linked list
 * @head: Address of the current head of the list
 * @idx: The index where the node should be added
 * @n: The value to be inserted
 * Return: The address of the new node, NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *t, *prev, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	if (!idx)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0, t = *head; i < idx - 1; i++, t = t->next)
	{
		if (!(t->next))
		{
			free(new);
			return (NULL);
		}
	}
	prev = t->next;
	new->n = n;
	t->next = new;
	new->next = prev;

	return (new);
}
