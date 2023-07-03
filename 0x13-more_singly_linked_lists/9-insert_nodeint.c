#include "lists.h"

/**
* insert_nodeint_at_index - Insert a node at a given index
*
* @head: Pointer to the list
* @idx: Index
* @n: Value to fill
*
* Return: The node, NULL if any issues
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *browse, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		browse = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (browse->next == NULL)
				return (NULL);
			browse = browse->next;
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = browse->next;
	browse->next = new;
	return (new);
}
