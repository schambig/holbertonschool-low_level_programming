#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	/* for loop also works, for (i = 0; h; i++, h = h->next) */
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
