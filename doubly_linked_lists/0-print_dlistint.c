#include "lists.h"

/**
 * print_dlistint - Print all the elements of a doubly linked list
 * @h: Address of linked list
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
		printf("%d\n", h->n);

	return (i);
}
