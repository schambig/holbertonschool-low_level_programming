#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at a given index
 * @head: Address of linked list
 * @index: Index
 * Return: 1 if successfull, 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tmp2;

	if (!(*head))
		return (-1);
	if (!index)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; tmp && index; tmp = tmp->next, index--)
		continue;
	if (!tmp)
		return (-1);
	tmp2 = tmp;
	tmp = tmp->prev;
	tmp->next = tmp2->next;
	if (tmp->next)
		tmp->next->prev = tmp;
	free(tmp2);
	return (1);
}
