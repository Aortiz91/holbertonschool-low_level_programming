#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Allocate the requisite memory for a new hash_table_t
 * and it's indexed array. Assign size of the array in new_table->size
 * @size: size of the hash_table_t array
 * Return: On Success returns a pointer to the new hash table, if not NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t));
	if (!(new_table->array))
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}