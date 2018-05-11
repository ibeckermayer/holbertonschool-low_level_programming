#include "hash_tables.h"

/**
 * key_index - gives you the index of a key using the hash_djb2 function
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}

/**
 * make_hash_node - function to create a new hash node
 * @ht: the hash table it will be added to / updated
 * @key: the key
 * @value: value associated with the key
 * @index: the index it will be placed in the hash table's array
 *
 * Return: the hash node, or NULL for failure
 */
hash_node_t *make_hash_node(hash_table_t *ht, const char *key, const char *value, unsigned long int index)
{
	hash_node_t *hn;

	/* check for NULL */
	if (ht->array[index] == NULL)
	{
		hn = malloc(sizeof(*hn));
		if (hn == NULL)
			return (NULL);
		hn->key = (char *)key;
		hn->value = (char *)value;
		hn->next = NULL;
		return (hn);
	}
	else
	{
		/* check for update */
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = (char *)value;
			return (ht->array[index]);
		}
		else		/* collision */
		{
			hn = malloc(sizeof(*hn));
			if (hn == NULL)
				return (NULL);
			hn->key = (char *)key;
			hn->value = (char *)value;
			hn->next = ht->array[index];
			return (hn);
		}
	}
}


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table to be added to / updated
 * @key: the key, cannot be empty
 * @value: value associated with the key
 *
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hn;

	/* error checking */
	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	hn = make_hash_node(ht, key, value, index);
	if (hn == NULL)
		return (0);
	ht->array[index] = hn;
	return (1);

}
