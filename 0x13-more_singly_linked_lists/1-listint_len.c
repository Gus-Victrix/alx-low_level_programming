#include "lists.h"

/**
* listint_len - Return the number of elem in the list
*
* @h: Pointer to the list_t
*
* Return: The number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int i = 0;

	while (tmp != NULL)
		tmp = tmp->next, i++;
	return (i);
}
