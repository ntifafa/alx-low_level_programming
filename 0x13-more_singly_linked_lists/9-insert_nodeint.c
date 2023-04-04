#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node in linked list
 * @idx: where new node is added
 * @n: value of node to be inserted
 * Return: address to new node, or NULL if it fails
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*declare and initialize i for iteration*/
	unsigned int i = 0;
	/*declare newNode and temp pointers*/
	listint_t *newNode, *now;
	/*set temp to head*/
	now = *head;

	/*allocate memory for newNode*/
	newNode = malloc(sizeof(listint_t));
	/*verify if list is empty*/
	if (*head == NULL)
		return (NULL);
	/*set data and next pointer of newNode*/
	newNode->n = n;
	newNode->next = NULL;
	/*handle insertion at the beginning of the list*/
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	/*traverse through nodes with loop*/
	while (now && i < idx)
	{
		now = now->next;
		i++;
	}
	/*reference previous node from now and insert newNode between nodes*/
	if (i == idx - 1)
	{
		newNode->next = now->next;
		now->next = newNode;
		return (newNode);
	}
	else
	{
		now = now->next;
		return (NULL);
	}
}
