#include "search_algos.h"

/**
 * jump_list - jump search algorithm adapted to a singly linked list
 *
 * @list: head of list to be searched
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	size_t i, currentEndIdx;
	listint_t *start, *end;

	if (!list)
		return (NULL);

	jump = sqrt(size);
	start = list;
	end = list;
	for (i = 0; i < jump; i++)
		end = end->next;
	printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
	while (end->next && end->n < value)
	{
		start = end;
		currentEndIdx = end->index;
		for (i = start->index; end->next && i < currentEndIdx + jump; i++)
			end = end->next;
		printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
					start->index, end->index);
	while (start && start->index <= end->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
