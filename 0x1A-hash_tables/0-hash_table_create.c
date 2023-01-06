#include "hash_table.h"
 /**
  * hash_table_create - create a table
  * @size - determine size of the table
  * return - empty table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = (hash_table_t*)malloc(sizeof(hash_table_t));

    if (!size)
		return (NULL);

    if (table = NULL)
        return (NULL);

    table->size = size;
    table->array = calloc(size, sizeof(hash_node_t *) * size);

    for (int i=0; i<table->size; i++)
        table->array[i] = NULL;

    return table;
}
