#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: Head of the list.
 * @index: Index of the node to be returned.
 *
 * Return: Address of nth node, NULL otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	/* Checking that the base 0 index is not reached and nth is not at NULL) */
	while (counter < index && nth != NULL)
	{
		nth = nth->next;
		counter++;
	}
	/* Returning the most recent index of nth, either NULL or another. */
	return (nth);
}
