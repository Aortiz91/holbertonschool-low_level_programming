#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: key with the value to look for
 *
 * Return: value of type char associated with the element / NULL if fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *newkey;
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	newkey = (const unsigned char *)key;
	index = key_index(newkey, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	tmp = ht->array[index];
	while (tmp->key != key)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
