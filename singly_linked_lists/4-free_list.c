#include "lists.h"

/**
 * free_list - Free a linked list
 * @head: Head of the list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current;

	/* for loop also works, for (; head; free(current->str), free(current)) */
	while (head != NULL)
	{
		/* point to the same address than head */
		current = head;
		/* traverse the list until it is NULL  */
		head = head->next;

		free(current->str);
		free(current);
	}
}
