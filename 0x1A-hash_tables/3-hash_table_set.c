#include "hash_tables.h"

/**
 * hash_table_set - Updates the hash table.
 *
 * @ht: The hash table to be updated.
 * @key: The new key.
 * @value: The new value.
 *
 * Return: 1 if success 0 if fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;

	if (!ht || !key || !*key || !strlen(key) || !ht->array || !ht->size || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = (char *)value;

			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	if (!new_node->value || !new_node->key)
	{
		free(new_node->value);
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
