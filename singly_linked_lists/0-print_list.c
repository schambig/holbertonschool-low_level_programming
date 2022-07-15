#include "lists.h"

/**
 * print_list - Print all the elements of a linked list
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	/* for loop also works, for (i = 0; h; i++, h = h->next) */
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
