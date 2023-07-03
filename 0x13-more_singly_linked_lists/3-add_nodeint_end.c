#include "lists.h"

/**
* add_nodeint_end - Add a node a the end of the list
*
* @head: Pointer to the list
* @n: The value to fill
*
* Return: The new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *search, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		search = *head;
		while (search->next)
			search = search->next;
		search->next = new;
	}
	return (new);
}
