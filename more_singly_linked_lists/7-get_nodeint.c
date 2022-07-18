#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a singly linked list
 * @head: Address of the curent head of the list
 * @index: Index of the nth node
 * Return: The nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *t;

	if (!head)
		return (NULL);

	for (i = 0, t = head; i < index; i++, t = t->next)
	{
		if (!t)
			return (NULL);
	}

	return (t);
}
