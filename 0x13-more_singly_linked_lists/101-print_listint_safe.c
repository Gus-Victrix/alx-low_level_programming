#include "lists.h"

int check_addr(const listint_t *head, const listint_t *current, size_t count);

/**
* print_listint_safe - Print a linked lisk, avoid loop
*
* @head: linked list
*
* Return: The numer of elem
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t elem = 0;
	const listint_t *browse;

	browse = head;
	while (browse != NULL && check_addr(head, browse, elem))
	{
		printf("[%p] %d\n", (void *)browse, browse->n);
		browse = browse->next;
		elem++;
	}
	if (browse != NULL)
		printf("-> [%p] %d\n", (void *)browse, browse->n);

	return (elem);
}

/**
* check_addr - Check if the addr has been already print
*
* @head: Linked list
* @current: Current elem to check
* @count: Position of the current elem
*
* Return: 0 if not already print, 1 else
*/
int check_addr(const listint_t *head, const listint_t *current, size_t count)
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
