#include "lists.h"

/**
* sum_listint - Get the sum of a list
*
* @head: The list
*
* Return: The sum, NULL if issues
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *browse;

	if (head == NULL)
		return (0);

	browse = head;
	while (browse)
	{
		sum += browse->n;
		browse = browse->next;
	}
	return (sum);
}
