#include "lists.h"

/**
* free_listint - Free the given list
*
* @head: The list
*
* Return: Anything, cause void function
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
