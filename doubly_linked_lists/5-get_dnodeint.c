#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a doubly linked list
 * @head: Address of linked list
 * @index: Index of node
 * Return: Address of node at index, NULL is not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head && index; head = head->next, index--)
		continue;

	return (head);
}
