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
