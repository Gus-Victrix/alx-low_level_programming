#include "lists.h"

/**
* print_listint - Print all elem of the list_t
*
* @h: Pointer to the list_t
*
* Return: The number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int i = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next, i++;
	}
	return (i);
}
