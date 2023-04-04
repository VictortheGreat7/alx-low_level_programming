#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to a pointer to the first node of the list.
* @idx: The index of the list where the new node should be added.
*       Index starts at 0.
* @n: The value to store in the new node.
* Return: The address of the new node, or NULL if it failed.
*         If it is not possible to add the new node at index idx,
*         do not add the new node and return NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node = NULL, *current_node = *head;
unsigned int i = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

while (current_node != NULL && i < idx)
{
prev_node = current_node;
current_node = current_node->next;
i++;
}

if (i < idx)
{
free(new_node);
return (NULL);
}

if (prev_node == NULL)
*head = new_node;
else
prev_node->next = new_node;

new_node->next = current_node;

return (new_node);
}

