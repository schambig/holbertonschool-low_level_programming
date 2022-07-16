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
		/* move to the next node  */
		head = head->next;

		/* free every str and node at a time */
		free(current->str);
		free(current);
	}
}
