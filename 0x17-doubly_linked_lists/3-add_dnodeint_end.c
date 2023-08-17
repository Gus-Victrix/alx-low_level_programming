#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: Head of a dlistint_t list.
 * @n: The new element to be added to the list.
 *
 * Return: NULL if failure, address of new node otherwise.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = NULL;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* Case new list */
	if (head == NULL)
	{
		head = malloc(sizeof(dlistint_t *));
		if (head == NULL)
		{
			free(new_node);
			return (NULL);
		}
		*head = NULL;
	}
	/* Case empty list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Case non-empty list */
	current = *head;
	/* Moving to the end of the list */
	while (current->next != NULL)
		current = current->next;
	/* Re-assignments */
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
