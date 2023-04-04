#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: points to the first node in the linked list
 * @index: node identifier
 * Return: a node, or NULL if does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*declare and initialize listint_t pointer and iteration variable*/
	listint_t *now = head;
	unsigned int i = 0;

	/*verify if list is empty*/
	if (head == NULL)
		return (NULL);
	/*traverse linked list with a loop*/
	while (now != NULL && i < index)
	{
		/*set next value to now pointer*/
		now = now->next;
		/*increment i*/
		i++;
	}
	/*return node if it exists*/
	if (i == index)
		return (now);
	/*return null if the node does not exist*/
	else
		return (NULL);
}
