#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	hash_node_t *bucket, *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	valuecopy = strdup(value);
	if (valuecopy == NULL)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
	if (strcmp(key, bucket->key) == 0)
	{
		free(bucket->value);
		bucket->value = valuecopy;
		return (1);
	}
	bucket = bucket->next;
	}

	new_node = (hash_node_t *)calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
	free(valuecopy);
	return (0);
	}

	keycopy = strdup(key);
	if (keycopy == NULL)
	{
		free(valuecopy);
		free(new_node);
		return (0);
	}

	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
