#include "lists.h"

/**
 * _str_len - Returns stringlength
 *
 * @str: Input string.
 *
 * Return: Length of input string.
 */
int _str_len(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - Adds a node into a list_t list.
 *
 * @head: Head node of list_t list.
 * @str: String to be added as a part of the node.
 *
 * Return: Null if errors. address of new node otherwise.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _str_len(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
