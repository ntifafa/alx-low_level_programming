#include "lists.h"

/**
 * list_len - prints the number of elements in
 * a linked list_t list
 * @h: pointer to string
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
/*declare and initialize size_t*/
	size_t counter = 0;
/*traverse list_t, count and print number of elements*/
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
