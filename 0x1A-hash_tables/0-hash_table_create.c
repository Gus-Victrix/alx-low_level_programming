#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 *
 * @size: Size of the array.
 *
 * Return: pointer to the newly created hash table. NULL if failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc((sizeof(hash_node_t *) * size));
	return (new_table);
}
