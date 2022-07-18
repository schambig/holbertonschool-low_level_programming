#include "lists.h"

/**
 * free_listint - Free a singly linked list
 * @head: Address of the current head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	for (; head; head = head->next, free(t))
		t = head;
}
