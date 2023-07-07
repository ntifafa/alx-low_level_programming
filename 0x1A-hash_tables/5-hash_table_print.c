#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int c_flag;
	unsigned long int i;

	if (ht == NULL)
		return;
	c_flag = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (c_flag == 0)
				c_flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
