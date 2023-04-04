#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked listint_t list.
* @head: Pointer to the first node of the list.
* Return: The number of nodes in the list.
*/
size_t listint_len(const listint_t *head)
{
size_t count = 0;

while (head != NULL)
{
count++;
head = head->next;
}
return (count);
}

