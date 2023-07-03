#include "lists.h"


/**
* find_listint_loop - Find if the list contain infinite loop
*
* @head: linked list
*
* Return: The numer of elem
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tortoise = hare = head;
	while (hare->next != NULL && hare->next->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
