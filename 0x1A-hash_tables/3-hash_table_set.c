#include "hash_tables.h"
/**
 * hash_table_set - creates a node to be added to a hash table
 * @ht: the hash table to add or update the key/value to
 * @key: can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	const unsigned char *newkey;

	if (!ht)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	newkey = (const unsigned char *)key;
	add_node(ht, newkey, new_node);

	return (1);
}

/**
 * add_node - adds a node to the hash table
 * @ht: hash table to add / update the key / value
 * @key: key to add to the node
 * @new_node: node with value to add
 * Return: Nothong on success
 */
int add_node(hash_table_t *ht, const unsigned char *key, hash_node_t *new_node)
{
	unsigned long int index;

	index = key_index(key, ht->size);

	if (!ht->array[index])
		return (0);

	if ((ht->array[index]) == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
