#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"


/**
 * create a new hash table with the specified size.
 *
 * @param size The size of the hash table's array.
 * @return A pointer to the newly created hash table, or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size) {
	hash_table_t *ht;
	unsigned long int i;


	/* Allocate memory for the hash table struct*/
	ht = malloc(sizeof(hash_table_t));
	if (!ht) {
		return (NULL);
	}


	/* Allocate memory for the hash table's array*/
	ht->array = malloc(sizeof(hash_node_t*) * size);
	if (!ht->array) {
		return (NULL);
	}


	/* Initialize the hash table's array */
	for (i = 0; i < size; i++) {
		ht->array[i] = NULL;
	}

	/* Set the size of the hash table */
	ht->size = size;

	return ht;
}
