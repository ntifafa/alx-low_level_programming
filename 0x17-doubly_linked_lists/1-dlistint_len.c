#include "lists.h"

/**
 * dlistint_len - counts all elements of linked list
 * @h: pointer to the first node
 * Return: count of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
