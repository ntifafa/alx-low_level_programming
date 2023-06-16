#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specified position.
 * @h: pointer to the head node
 * @idx: index of the given node
 * @n: data to be passed
 * Return: the address of the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp2 = NULL, *new_node = malloc(sizeof(dlistint_t));
	unsigned int current = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	temp1 = temp2 = *h;

	while (temp1 != NULL)
	{
		if (current == idx)
		{
			new_node->next = temp1;
			new_node->prev = temp2;
			temp2->next = temp1->prev = new_node;
			return (new_node);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		current++;
	}
	if (current < idx)
		free(new_node);
	return (NULL);
}
