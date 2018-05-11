#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *hn, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hn = ht->array[i];
		if (hn != NULL)
		{
			while (1)
			{
				if (hn == NULL)
					break;
				free(hn->key);
				free(hn->value);
				tmp = hn;
				hn = hn->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
