#include "lists.h"

/**
* pop_listint - Delete the head node of a list
*
* @head: Pointer to the list
*
* Return: The head value that been pop
*
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int head_value;

	if (head == NULL || *head == NULL)
		return (0);

	head_value = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (head_value);
}
