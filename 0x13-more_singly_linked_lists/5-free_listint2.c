#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to first node of the list
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	/*declare pointer*/
	listint_t *now;
	/*point now to memory address of *head*/
	now = *head;
	/*free memory allocation*/
	free(now);
	*head = NULL;
}


