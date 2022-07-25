#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data of a doubly linked list
 * @head: Address of linked list
 * Return: Sum, 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
