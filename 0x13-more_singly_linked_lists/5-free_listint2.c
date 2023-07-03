#include "lists.h"

/**
* free_listint2 - Free the given list
*
* @head: Pointer to the list
*
* Return: Anything, cause void function
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
