#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a singly linked list
 * @head: Address of the curent head of the list
 * @n: number to be added
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
