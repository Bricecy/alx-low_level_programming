#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.hi"


/**
 * create a new hash table with the specified size.
 *
 * @param size The size of the hash table's array.
 * @return A pointer to the newly created hash table, or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size)

{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
