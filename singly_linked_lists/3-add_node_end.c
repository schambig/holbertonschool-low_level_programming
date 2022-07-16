#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a singly linked list
 * @head: Pointer to head in main function
 * @str: String to be duplicated
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *current = NULL;

	/* verify if the argument passed exist */
	if (head == NULL)
		return (NULL);

	/* dynamically allocate memory for new_node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* assign values to new_node */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* verify if the list exist (is no empty) */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* traverse the list until it is NULL */
	current = *head;
	while (current->next != NULL)
		current = current->next;
	/* insert new_node at the end */
	current->next = new_node;

	return (new_node);
}
