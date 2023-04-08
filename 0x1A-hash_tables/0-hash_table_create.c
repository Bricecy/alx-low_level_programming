#include <stdio.h>
#include <stdlib.h>


typedef struct hash_node_s{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;


typedef struct hash_table_s{
	unsigned long int size;
	hash_node_t**array;
}hash_table_t;


'''
c
hash_table_t *ht;
'''


/**
 * create a new hash table with the specified size.
 *
 * @param size The size of the hash table's array.
 * @return A pointer to the newly created hash table, or NULL if an error occurred.
 */
hash_table_t*hash_table_create(unsigned long int size) {
	hash_table_t*hash_table = NULL;
	unsigned long int i;


	/* Allocate memory for the hash table struct*/
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table) {
		return NULL;
	}


	/* Allocate memory for the hash table's array*/
	hash_table->array = malloc(sizeof(hash_node_t*) * size);
	if (!hash_table->array) {
		free(hash_table);
		return NULL;
	}


	/* Initialize the hash table's array */
	for (i = 0; i < size; i++) {
		hash_table->array[i] = NULL;
	}

	/* Set the size of the hash table */
	hash_table->size = size;

	return hash_table;
}
