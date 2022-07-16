#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a singly linked list
 * @head: Pointer to head in main function
 * @str: String to be duplicated
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

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
	/* insert new_node at the beginning and make it the head */
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
