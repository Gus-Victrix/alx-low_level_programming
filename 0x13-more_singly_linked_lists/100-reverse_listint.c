#include "lists.h"

/**
* reverse_listint - Reverse a linked list
*
* @head: Pointer to the list
*
* Return: The new list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	current = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;
	return (*head);
}
