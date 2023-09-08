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

	if (key == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = malloc(sizeof(char) * _strlen(key) + 1);
	new_node->value = malloc(sizeof(char) * _strlen(value) + 1);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	_strcpy(new_node->key, key);
	_strcpy(new_node->value, value);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current != NULL)
		while (current->next != NULL)
			current = current->next;
	current = new_node;
	return (1);
}

/**
 * _strcpy - Copies a string from src to dest including the null terminator.
 *
 * @dest: Destination address.
 * @src: Source of the string.
 *
 * Return: The destination
 */
char *_strcpy(char *dest, const char *src)
{
	size_t i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++
	}
	dest[i] = '\0';
	return dest;
}

/**
 * _strlen - Finds the length of a string.
 *
 * @s: String whose length is to be found.
 *
 * Return: Length of the string.
 */
unsigned long _strlen(const char *s)
{
	unsigned long i = 0;

	while (s[i])
		i++;
	return (i);
}
