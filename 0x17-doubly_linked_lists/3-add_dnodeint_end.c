#include "lists.h"

/**
 * add_dnodeint_end - inserts a new node at the end of linked list
 * @head: pointer to the first node
 * @n: data being passed
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new_node;

	ptr = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		new_node->prev = ptr;
	}
	return (new_node);
}
