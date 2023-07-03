#include "lists.h"

int check_addr2(const listint_t *head, const listint_t *current, size_t count);

/**
* free_listint_safe - Free the given list
*
* @h: Pointer to the list
*
* Return: The number of elem
*/
size_t free_listint_safe(listint_t **h)
{
	size_t i, elem = 0;
	listint_t *h_copy = *h, *next;

	if (*h != NULL && h != NULL)
	{
		for (elem = 0; *h && check_addr2(h_copy, *h, elem); elem++)
		{
			next = (*h)->next;
			*h = next;
		}
		*h = h_copy;
		for (i = 0; i < elem; i++)
		{
			next = *h;
			*h = (*h)->next;
			free(next);
		}
		if (*h)
			*h = NULL;
	}
	return (elem);
}


/**
* check_addr2 - Check if the addr has been already print
*
* @head: Linked list
* @current: Current elem to check
* @count: Position of the current elem
*
* Return: 0 if not already print, 1 else
*/
int check_addr2(const listint_t *head, const listint_t *current, size_t count)
{
	size_t i;
	const listint_t *browse;

	browse = head;
	for (i = 0; i < count; i++)
	{
		if ((void *)browse == (void *)current)
			return (0);
		browse = browse->next;
	}
	return (1);
}
