#include "lists.h"

/**
 * listint_len - prints the number of elements in listint_t list
 * @h: pointer to string
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
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
