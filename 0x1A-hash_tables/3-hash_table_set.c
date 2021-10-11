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
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);

	newkey = (const unsigned char *)key;

	index = key_index(newkey, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
}
