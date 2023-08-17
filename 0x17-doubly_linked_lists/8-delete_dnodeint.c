#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes specific node in a dlistint_t list.
 *
 * @head: Pointer to the head of the list in question.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (-1);
	current = *head;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (current->next == NULL && i == 0)
		*head = NULL;
	else if (current->next != NULL && i == 0)
	{
		current->next->prev = NULL;
		*head = current->next;
	}
	else if (i != 0 && current->next != NULL)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	else
		current->prev->next = NULL;
	free(current);
	return (1);
}
