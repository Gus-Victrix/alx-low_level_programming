#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/* Included libraries. */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table.
 *
 * @key: The key, string.
 * The key is unique in the HashTable.
 * @value: The value corresponding to a key.
 * @next: A pointer to the next node of the List.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure.
 *
 * @size: The size of the array.
 * @array: An array of size @size.
 * Each cell of this array is a pointer to the first node of a liked list,
 * because we want our HashTable to use a Chaining collision handling.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - Node of the sorted hash table.
 *
 * @key: Unique key string.
 * @value: The value corresponding to a key.
 * @next: Pointer to the next node of the list.
 * @sprev: Pointer to the previous element of the sorted linked list.
 * @snext: Pointer to the next element of the sorted liked list.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure.
 *
 * @size: The size of the array.
 * @array: Array of buckets.
 * @shead: Pointer to the first element of the sorted linked list.
 * @stail: Pointer to the last element of the sorted linked list.
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/* Functions */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_sorted_node(shash_table_t *ht, shash_node_t *node);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
shash_node_t *create_node(const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);

#endif
