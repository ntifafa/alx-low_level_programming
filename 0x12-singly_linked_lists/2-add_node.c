#include "lists.h"

/**
 * addnode - adds a new node at the beginning
 * of a lis
 * Return: the address of the new element, NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
/*Allocate memory for the new node*/	
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	{
		return NULL;
	}
/* Duplicate data for the new node*/
new_node->str = strdup(str);
if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}
new_node->len = strlen(str);
/*Set next pointer of new node to to head of list_t*/
new_node->next = *head;
/*Set the head pointer to new node*/
*head = new_node;
/*Return pointer to the new node*/
return (new_node);
}
