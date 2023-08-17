#include "lists.h"

size_t dlistint_len_(const dlistint_t *h);
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
	len = (unsigned int)dlistint_len_((const dlistint_t *)(*head));
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


/**
 * dlistint_len_ - returns the number of elements in a dlistint_t list.
 *
 * @h: Member of a dlistint_t list.
 *
 * Return: Number of elements in the list.
 */
size_t dlistint_len_(const dlistint_t *h)
{
	dlistint_t *p = NULL;
	int count = 0;

	if (h == NULL)
		return (0);

	/* Counting the element stored in h */
	count++;

	/* Counting the elements before h */
	if (h->prev != NULL)
	{
		p = h->prev;
		while (p != NULL)
		{
			p = p->prev;
			count++;
		}
	}

	/* Counting the elements after h */
	if (h->next != NULL)
	{
		p = h->next;
		while (p != NULL)
		{
			p = p->next;
			count++;
		}
	}
	return (count);
}
