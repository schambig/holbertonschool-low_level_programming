#include "lists.h"

/**
 * sum_listint - Sum all the data (n) of a singly linked list
 * @head: Address of the curent head of the list
 * Return: The sum of all the nodes, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *t;
	int sum = 0;

	if (!head)
		return (0);

	for (t = head; t; t = t->next)
		sum += t->n;

	return (sum);
}
