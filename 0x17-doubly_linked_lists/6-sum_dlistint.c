#include "lists.h"

/**
 * sum_dlistint - sums all the data in linked list
 * @head: pointer to the first node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int count = 0;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		count++;
	}
	return (sum);
}
