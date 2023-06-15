#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Pointer to the pointer to the head of the dlistint_t list
* @idx: Index where the new node should be added, starting from 0
* @n: Value to be assigned to the data (n) of the new node
* Return: The address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;

			if (current->prev != NULL)
				current->prev->next = new_node;
			else
				*h = new_node;

			current->prev = new_node;

			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
