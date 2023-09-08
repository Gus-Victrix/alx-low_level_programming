#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with a key.
 *
 * @ht: The hash table in question.
 * @key: Key whose value is to be retrieved.
 *
 * Return: NULL if key not found, associated value otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;

	if (!ht || !key || !(*key) || !(ht->array) || !(ht->size))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	if (current == NULL)
		return (NULL);
	while (strcmp(key, current->key) != 0 && current->next)
		current = current->next;

	return (current->value);
}
