#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of listint_t linked list
 * @head: point to the first node of linked list
 * Return: sum of data(n), otherwise return 0 when list is empty
*/

int sum_listint(listint_t *head)
{
	/*declare and set now pointer to head*/
	listint_t *now = head;
	/*declare and inititialize sum*/
	int sum = 0;
	/*loop to traverse and sum values of nodes*/
	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}
	return (sum);
}
