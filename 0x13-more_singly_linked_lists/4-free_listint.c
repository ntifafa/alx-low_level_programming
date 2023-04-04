#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to first node of the list
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	/*declare pointers*/
	listint_t *now, *next;
	/*point now to memory address of head*/
	now = head;
	/*traverse and free list with a loop*/
	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
