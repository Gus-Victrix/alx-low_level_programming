#include "lists.h"

/**
* delete_nodeint_at_index - Delete a node at a given index
*
* @head: Pointer to list
* @index: Index
*
* Return: 1 if it's work, -1 else
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *browse, *browse_next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		browse_next = (*head)->next;
		free(*head);
		*head = browse_next;
		return (1);
	}
	browse = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (browse->next == NULL)
			return (-1);
		browse = browse->next;
	}
	browse_next = browse->next;
	browse->next = browse_next->next;
	free(browse_next);
	return (1);
}
