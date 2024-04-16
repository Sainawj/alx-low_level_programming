#include "hash_tables.h"

/**
 * hash_table_delete - Frees a hash table and all its nodes.
 * @ht: Pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	if (!ht)
		return;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *bucket = ht->array[i];

		while (bucket)
		{
			hash_node_t *temp = bucket;

			bucket = bucket->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
