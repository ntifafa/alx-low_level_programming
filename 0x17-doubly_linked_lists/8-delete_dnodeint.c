#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specified index in linked list
 * @head: pointer to the first node
 * @index: deletion location
 * Return: 1 (success) and -1 (fail)
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		{
			temp = temp->next;
			count++;
		}

		if (count == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
