#include "lists.h"

/**
 * print_dlistint - prints all members of a list of type dlistint_t.
 *
 * @h: An item of a dlistint_t.
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *p = h;
	int count = 0;

	if (p == NULL)
		return (0);

	/* Moving to the start of the list */
	while (p->prev != NULL)
		p = p->prev;

	/* Printing the values of the list */
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
