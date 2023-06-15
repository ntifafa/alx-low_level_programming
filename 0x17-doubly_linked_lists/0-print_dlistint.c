#include "lists.h"

/**
 * print_dlistint - prints and counts all elements of linked list
 * @h: pointer to the first node
 * Return: count of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
