#include "lists.h"

/**
 * free_list - frees malloced memory of list_t
 *
 * @head: Head node of list_t
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
