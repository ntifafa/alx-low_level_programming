#include "lists.h"

/**
 * pop_listint - deletes head of a linked list
 * @head: double pointer to the memory address of first node
 * Return: node's data (n), or 0 if list is empty 
*/

int pop_listint(listint_t **head)
{
	/*declare pointers*/
	listint_t *temp;
	int n;

	/*verify if list is empty*/
	if (*head == NULL)
		return (0);
	/*point temp to the memory address of *head*/
	temp = *head;
	/*assign head to next node*/
	*head = (*head)->next;
	/*initialize n to store data of temp*/
	n = temp->n;
	/*free temp*/
	free(temp);
	/*return head's data*/
	return (n);	
}