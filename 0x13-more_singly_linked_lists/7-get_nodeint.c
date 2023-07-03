#include "lists.h"

/**
* get_nodeint_at_index - Get the node at an index
*
* @head: List
* @index: Index
*
* Return: The found node, Null if not found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *search;

	if (head == NULL)
		return (NULL);

	search = head;
	for (i = 0; i < index; i++)
	{
		if (search->next == NULL)
			return (NULL);
		search = search->next;
	}
	return (search);
}
