#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hn;

	/* error checking */
	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	hn = ht->array[index];
	if (hn == NULL)
		return (NULL);

	while (1)
	{
		if (hn == NULL)
			return (NULL);
		if (strcmp(hn->key, key) == 0)
			return (hn->value);
		hn = hn->next;
	}
}
