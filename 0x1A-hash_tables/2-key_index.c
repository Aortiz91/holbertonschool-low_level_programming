#include "hash_tables.h"
/**
 * key_index - Determine the index of a key
 * @key: Key to be stored
 * @size: Size of the array of the hash
 *
 * Return: Index at which the key/value should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key) % size;
	return (hash);
}
