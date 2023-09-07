#include "hash_tables.h"

/**
 * key_index - Calculate the index for a key in a hash table array.
 *
 * @key: The key (word) to be stored in the hash table.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored
 *         in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* Calucuate the hash using the djb2 hash function */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the modulo of the hash with the array size */
	index = hash_value % size;

	return (index);
}
