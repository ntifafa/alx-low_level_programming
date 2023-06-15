#include "lists.h"

/**
 * add_dnodeint - inserts a new node at the beginning of linked list
 * @head: pointer to the first node
 * @n: data being passed
 * Return: memory address of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
