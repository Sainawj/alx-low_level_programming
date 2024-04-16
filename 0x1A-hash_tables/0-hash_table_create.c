#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (size == 0)
	return (NULL);

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
	free(table);
	return (NULL);
	}

	for (i = 0; i < size; i++)

	{
	table->array[i] = NULL;
	}

	return (table);
}
