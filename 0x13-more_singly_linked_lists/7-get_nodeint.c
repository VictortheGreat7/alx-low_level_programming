#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: A pointer to the head of the linked list.
* @index: The index of the node to retrieve.
* Return: If the node does not exist, return NULL.
*         Otherwise, return a pointer to the requested node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head && i <= index; i++)
{
if (i == index)
return (head);
head = head->next;
}

return (NULL);
}

