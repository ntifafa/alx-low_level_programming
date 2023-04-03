#include "lists.h"

/**
 * print_listint - prints all elements of list_t list
 * @h: pointer to string
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
/*declare and initialize size_t*/
	size_t counter = 0;
/*traverse list_t and print each member*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
