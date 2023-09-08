#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash_table.
 *
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	unsigned int indicator = 1;
	hash_node_t *current;

	if (!ht || !ht->size || !ht->array)
		return;

	printf("{");

	while (index < ht->size)
	{
		current = ht->array[index];
		while (current)
		{
			if (indicator == 0)
				printf(", ");
			if (current->key != NULL)
			{
				printf("'%s' : '%s'", current->key, current->value);
				indicator = 0;
			}
			current = current->next;
		}
		index++;
	}
	printf("}\n");
}
