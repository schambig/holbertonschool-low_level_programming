#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a doubly linked list
 * @h: Address of linked list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
		continue;

	return (i);
}
