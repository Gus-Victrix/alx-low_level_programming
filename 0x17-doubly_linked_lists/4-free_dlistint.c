#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: First member of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
		return;
	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
}
