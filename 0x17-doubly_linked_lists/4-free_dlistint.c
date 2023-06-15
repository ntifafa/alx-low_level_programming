#include "lists.h"

/**
 * free_dlistint - frees linked list
 * @head: pointer to the first node
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
