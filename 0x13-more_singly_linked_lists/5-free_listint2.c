#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to first node of the list
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	/*declare pointers*/
	listint_t *now, *temp;
	/*verify memory allocation*/
	if (head == NULL)
		return;
	/*point now to memory address of *head*/
	now = *head;
	/*traverse and free list with loop*/
	while (now != NULL)
	{
		temp = now->next;
		free(now);
		now = temp;
	}
	/*assign head to NULL*/
	*head = NULL;
}


