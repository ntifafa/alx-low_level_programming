#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to string
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
/*declare and initialize size_t*/
	size_t counter = 0;
/*traverse list_t and print each member*/
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
