#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a list
 * @head: memory address of the first node
 * @n: passed value
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create, declare, assign and allocate memory for newNode*/
	listint_t *newNode = malloc(sizeof(listint_t));

	/*verify memory allocation*/
	if (newNode == NULL)
		return (NULL);
	/*pass value to the node*/
	newNode->n = n;
	/*point newNode to head's address*/
	newNode->next = *head;
	/*assign new node to address*/
	*head = newNode;

	return (newNode);
}
