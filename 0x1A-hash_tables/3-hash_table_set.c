#include "hash_tables.h"

/**
 * hash_table_set - insert or update an element in a hash table
 * @ht: pointer to hash table.
 * @key: key to add and should not be an empty string.
 * @value: value of key.
 *
 * Return: 0 (success) and 1 (fail)
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_cpy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_cpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
