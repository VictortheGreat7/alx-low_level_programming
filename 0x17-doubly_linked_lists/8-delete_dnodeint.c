#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index
* @head: Pointer to the pointer to the head of the dlistint_t list
* @index: Index of the node to be deleted, starting from 0
* Return: 1 if successful, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}

		count++;
		current = current->next;
	}

	return (-1);
}
