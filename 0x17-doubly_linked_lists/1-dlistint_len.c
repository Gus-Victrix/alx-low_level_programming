#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list.
 *
 * @h: Member of a dlistint_t list.
 *
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
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
