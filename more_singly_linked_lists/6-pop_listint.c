#include "lists.h"

/**
 * pop_listint - Delete the head of a singly linked list and return its data
 * @head: Address of the curent head of the list
 * Return: Data of node deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int d;

	if (!head)
		return (0);

	if (!(*head))
		return (0);

	t = *head;
	*head = (*head)->next;
	d = t->n;
	free(t);

	return (d);
}
