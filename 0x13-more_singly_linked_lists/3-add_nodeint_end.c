#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: memory address of the first node
 * @n: passed value (integer)
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*Declare pointers*/
	listint_t *newNode, *temp;
	/* Assign and allocate memory for newNode*/
	newNode = malloc(sizeof(listint_t));
	/*verify memory allocation*/
	if (newNode == NULL)
		return (NULL);
	/*pass value to newNode*/
	newNode->n = n;
	/*If the list is empty, make the new node the head*/
	if (*head == NULL)
	{
		/*point new_node to head's address*/
		*head = newNode;
		return (newNode);
	}
	/*otherwise traverse to end of the list*/
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*set the last node to the new node (insertion)*/
	temp->next = newNode;
	/*Return pointer to newNode*/
	return (newNode);
}
