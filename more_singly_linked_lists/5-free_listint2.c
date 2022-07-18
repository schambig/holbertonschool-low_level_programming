#include "lists.h"

/**
 * free_listint2 - Free a singly linked list and set its head to NULL
 * @head: Address of the current head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (!head)
		return;

	for (; *head; *head = (*head)->next, free(t))
		t = *head;

	*head = NULL;
}
