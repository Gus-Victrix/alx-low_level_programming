#include "lists.h"

/**
 * _strlen - Returns stringlength
 *
 * @str: Input string.
 *
 * Return: Length of input string.
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
		i++;
	return (i);
}


/**
 * add_node_end - adds a node to the end of a list_t list.
 *
 * @head: Address of the first node of a list_t
 * @str: String to be added to the list.
 *
 * Return: Pointer to a longer list_t. Null if errors encountered.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
