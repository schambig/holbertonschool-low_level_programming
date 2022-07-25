#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 * @head: Address of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	for (; head; head = head->next, free(tmp))
		tmp = head;
}
