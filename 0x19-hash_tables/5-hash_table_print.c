#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, first = 1;
	hash_node_t *hn;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		hn = ht->array[i];
		if (hn != NULL)
		{
			while (1)
			{
				if (hn == NULL)
					break;
				if (!first)
					printf(", ");
				else
					first = 0;
				printf("'%s': '%s'", hn->key, hn->value);
				hn = hn->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
