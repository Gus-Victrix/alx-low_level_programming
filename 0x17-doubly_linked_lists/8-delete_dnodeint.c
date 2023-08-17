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
	unsigned int len = 0, counter = 0;
	dlistint_t *current = NULL;

	/* Case: empty list or NULL list */
	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	/* Case: popping first element */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	/* Case: out of bounds */
	len = (unsigned int)dlistint_len((const dlistint_t *)(*head));
	if (index >= len)
		return (-1);
	/* Moving to required position */
	while (counter < index)
	{
		current = current->next;
		counter++;
	}
	/* Isolating the index to be deleted */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
