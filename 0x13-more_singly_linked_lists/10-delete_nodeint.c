#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node
*							at index of a listint_t linked list.
* @head: Pointer to the head node of the list.
* @index: Index of the node that should be deleted.
* Return: 1, if t succeeded or -1, if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
current = *head;
*head = (*head)->next;
free(current);
return (1);
}

prev = NULL;
current = *head;

for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
prev = current;
current = current->next;
}

prev->next = current->next;
free(current);

return (1);
}
