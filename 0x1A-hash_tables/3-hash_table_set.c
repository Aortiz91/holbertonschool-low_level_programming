#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key: can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t * node;

	if (!ht)
		return (-1);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (-1);
	node->key = strdup(key);
	node->value = strdup(value);

	assign_key(ht, node)
	
		return(0);	
}
