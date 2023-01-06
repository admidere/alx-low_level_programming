#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to hash table type
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (!size)
		return (NULL);

	table = calloc(1, sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
