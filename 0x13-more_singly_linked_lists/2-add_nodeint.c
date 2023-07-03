#include "lists.h"

/**
* add_nodeint - Add a new node a the begin of the list
*
* @head: Pointer to the start of the list.
* @n: Value to fill.
*
* Return: The new node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
