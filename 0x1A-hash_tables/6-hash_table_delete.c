#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash_table.
 *
 * @ht: The hash table to be deletes.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *marked = NULL;
	unsigned long int index = 0;

	if (!ht || !ht->array || !ht->size)
		return;
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current)
	{
			marked = current;
			current = current->next;
			free(marked->key);
			free(marked->value);
			free(marked);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
