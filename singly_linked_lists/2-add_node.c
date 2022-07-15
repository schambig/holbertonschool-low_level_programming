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

	/* verifying if the argument passed exist */
	if (head == NULL)
		return (NULL);

	/* dynamically allocating memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* assigning values to the new node */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* verifying if the list exist (is no empty) */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* making the new node the head of the list */
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
