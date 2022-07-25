#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: Address of linked list
 * @idx: Index
 * @n: Value
 * Return: New node, 0 if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (!(*h) && idx)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	for (; tmp->next && idx; tmp = tmp->next, idx--)
		continue;
	if (!(tmp->next) && idx > 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (tmp->next || (!(tmp->next) && !idx))
		tmp = tmp->prev;
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
