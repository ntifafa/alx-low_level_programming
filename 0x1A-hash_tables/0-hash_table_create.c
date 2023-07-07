#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

/* allocate memory for the hash table */
new_hash_table = malloc(sizeof(hash_table_t));

/* return NULL if mem allocation fails */
if (new_hash_table == NULL)
	return (NULL);

/*set size for hash table*/
new_hash_table->size = size;

/*allocate mem for hash_node_t pointers*/
new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

/* return NULL if mem allocation fails */
if (new_hash_table->array == NULL)
	return (NULL);

    /* initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}
	return (new_hash_table);
}
