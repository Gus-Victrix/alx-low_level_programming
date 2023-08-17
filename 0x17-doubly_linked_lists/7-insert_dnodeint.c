#include "lists.h"

size_t dlistint_len_(const dlistint_t *h);
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index.
 *
 * @h: Pointer to the head of the list.
 * @idx: Index of new node.
 * @n: Value of the new node.
 *
 * Return: Address of new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0, counter = 0;
	dlistint_t *new_node = NULL, *current = *h;

	/* Case: empty list */
	if (h == NULL || *h == NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		else
			return (NULL);
	}
	/* Case inserting infront of list */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Case: appending to list */
	len = dlistint_len_(*h);
	if (idx == len)
		return (add_dnodeint_end(h, n));
	/* Case: idx out of bounds */
	if (idx > len)
		return (NULL);
	while (counter != idx)
	{
		current = current->next;
		counter++;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* Setting new_node up */
	new_node->n = n;
	new_node->prev = current->prev;
	new_node->next = current;
	/* Normalizing relationship with neighbours */
	current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
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
