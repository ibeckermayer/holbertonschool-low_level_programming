#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: the hash table or NULL if there is a problem
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
		return (NULL);

	ht = malloc(sizeof(*ht));
	if (ht == NULL)
	{
		free(array);
		return (NULL);
	}

	ht->size = size;
	ht->array = array;

	return (ht);
}
