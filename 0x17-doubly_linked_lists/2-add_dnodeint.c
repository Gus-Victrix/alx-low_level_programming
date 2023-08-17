#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: Head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	/* Checking malloc success for new_node */
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* Case: Creating new list */
	if (head == NULL)
	{
		head = malloc(sizeof(dlistint_t *));
		/* Checking malloc success for new list */
		if (head == NULL)
		{
			free(new_node);
			return (NULL);
		}
		*head = new_node;
		return (new_node);
	}
	/* Case: Empty list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Case: List exists and is non-empty */
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
