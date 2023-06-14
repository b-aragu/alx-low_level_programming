#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: the key to find
 * @size - array size of hash table
 * Return: The index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;
	unsigned long int new_key = 0;

	new_key = hash_djb2(key);
	idx = (new_key % size);
		return (idx);
}
